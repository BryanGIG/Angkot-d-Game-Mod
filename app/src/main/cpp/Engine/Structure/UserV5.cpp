#include "../Includes.hpp"

uintptr_t money;

uintptr_t coin;

void UserV5::setCheat() {
    Il2Cpp::SetField<float>(this, money, 999999.f);
    Il2Cpp::SetField<float>(this, coin, 999999.f);
}

void UserV5::Initialize() {
    setFieldOffset(money, "money");
    setFieldOffset(coin, "coin");
}

void UserV5::Hook() {

}

const char *UserV5::getAssembly() {
    return "Assembly-CSharp.dll";
}

const char *UserV5::getNamespace() {
    return "ADG.Model";
}

const char *UserV5::getClass() {
    return "UserV5";
}