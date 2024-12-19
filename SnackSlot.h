#include <vector>
#include "Snack.h"
#include "human.h"

class SnackSlot {
private:
    int _capacity;
    std::vector<Snack*> snacks;

public:
    SnackSlot(int capacity);

    void addSnack(Snack* snack);
    void buySnack(int snackIndex, Human* human);
    void getRemainingCapacity();
    void getSnackCount();
    ~SnackSlot();
};
