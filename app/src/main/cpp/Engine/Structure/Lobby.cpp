#include "../Includes.hpp"

void (*Update)(Lobby *) = nullptr;

void new_Update(Lobby *self) {
    Update(self);
    auto gameData = Pool::getGameData();
    if (!gameData) {
        LOGE("Game data null");
        return;
    }

    auto userv5 = gameData->getUserv5();
    if (!userv5) {
        LOGE("Userv5 null");
        return;
    }

    userv5->setCheat();
}

void Lobby::Initialize() {
    setPointer(Update, "Update", 0);
}

void Lobby::Hook() {
    setHook(Update, "Update");
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