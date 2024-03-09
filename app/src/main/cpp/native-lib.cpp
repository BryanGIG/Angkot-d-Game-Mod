#include <jni.h>
#include <string>
#include <thread>
#include "Engine/Includes.hpp"

__attribute__ ((constructor))
void lib_main() {
    std::thread([]() {
        ProcMap map;
        do {
            map = KittyMemory::getElfBaseMap("libil2cpp.so");
            sleep(1);
        } while (!map.isValid() && !map.isValidELF());

        if (Il2Cpp::Init("libil2cpp.so") == 0) {
            LOGI("Il2Cpp::Init - Valid");
            ListCBaseEntry::add(std::make_shared<Lobby>());
            ListCBaseEntry::add(std::make_shared<Pool>());
            ListCBaseEntry::add(std::make_shared<GameData>());
            ListCBaseEntry::add(std::make_shared<UserV5>());

            // Initialize the classes
            ListCBaseEntry::Initialize();
        }
    }).detach();
}
