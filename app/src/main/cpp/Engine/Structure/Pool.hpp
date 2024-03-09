#include "CBaseEntry.hpp"

class Pool : public CBaseEntry {
public:
    const char *getAssembly() override;

    const char *getNamespace() override;

    const char *getClass() override;

    void Initialize() override;

    void Hook() override;

    static GameData *getGameData();
};
