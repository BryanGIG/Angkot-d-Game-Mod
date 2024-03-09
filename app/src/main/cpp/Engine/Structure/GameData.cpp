#include "../Includes.hpp"

uintptr_t user;

UserV5 *GameData::getUserv5() {
    return Il2Cpp::GetField<UserV5 *>(this, user);
}

void GameData::Initialize() {
    setFieldOffset(user, "user");
}

void GameData::Hook() {

}

const char *GameData::getAssembly() {
    return "Assembly-CSharp.dll";
}

const char *GameData::getNamespace() {
    return "ADG.Model";
}

const char *GameData::getClass() {
    return "GameData";
}