#include <string>

class Snack {
private:
    std::string _name;
    double _calories;
    double _price;

public:
    Snack(std::string name, int calories, double price);

    std::string getName();
    int getCalories();
    double getPrice();

    void setPrice(double price);

};

