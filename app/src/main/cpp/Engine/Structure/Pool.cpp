#include "../Includes.hpp"

GameData *Pool::getGameData() {
    LOGI(__FUNCTION__);
    GameData *gamedata = nullptr;
    Il2Cpp::GetStaticFieldValue("Assembly-CSharp.dll", "", "Pool", "GamedData", &gamedata);
    return gamedata;
}

void Pool::Initialize() {
}

void Pool::Hook() {
}

const char *Pool::getAssembly() {
    return "Assembly-CSharp.dll";
}

const char *Pool::getNamespace() {
    return "";
}

const char *Pool::getClass() {
    return "Pool";
}