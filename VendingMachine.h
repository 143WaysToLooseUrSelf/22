#include <vector>
#include "SnackSlot.h"
#include "human.h"

class VendingMachine {
private:
    int _totalSlots;
    std::vector<SnackSlot*> slots;

public:
    VendingMachine(int slotCount);

    void addSlot(SnackSlot* slot);
    void buySnackFromSlot(int slotIndex, int snackIndex, Human* human);
    void getEmptySlotsCount();
    ~VendingMachine();
};
