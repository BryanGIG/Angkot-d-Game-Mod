#include "../Includes.hpp"

GameData *Pool::getGameData() {
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