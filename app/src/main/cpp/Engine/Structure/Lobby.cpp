#include "../Includes.hpp"

void (*Awake)(Lobby *) = nullptr;

void new_Awake(Lobby *self) {
    Awake(self);
    auto gameData = Pool::getGameData();
    if (!gameData) {
        LOGE("Game data null");
        return;
    }

    auto userv5 = gameData->getUserv5();
    if (!userv5) {
        LOGE("userv5 null");
        return;
    }

    userv5->setCheat();
}

void Lobby::Initialize() {
    setPointer(Awake, "Awake", 0);
}

void Lobby::Hook() {
    setHook(Awake, "Awake");
}

const char *Lobby::getAssembly() {
    return "Assembly-CSharp.dll";
}

const char *Lobby::getNamespace() {
    return "";
}

const char *Lobby::getClass() {
    return "Lobby";
}