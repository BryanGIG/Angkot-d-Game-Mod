#include "CBaseEntry.hpp"

class UserV5 : public CBaseEntry {
public:
    const char *getAssembly() override;

    const char *getNamespace() override;

    const char *getClass() override;

    void Initialize() override;

    void Hook() override;

    void setCheat();
};
