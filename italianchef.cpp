#include "italianChef.h"
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(string name)
    : Chef(name), flour(0), water(0) {
    cout << "ItalianChef constructor: " << chefName << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef destructor: " << chefName << endl;
}

bool ItalianChef::askSecret(string pw, int flourAmount, int waterAmount) {
    cout << "pw??" << endl;

    if (pw == password) {
        flour = flourAmount;
        water = waterAmount;
        cout << "pw ok" << endl;
        makePizza();
        return true;
    }
    return false;
}

int ItalianChef::makePizza() {
    cout << "makePizza" << endl;

    int pizzasByFlour = flour / 5;
    int pizzasByWater = water / 5;

    int pizzas = min(pizzasByFlour, pizzasByWater);
    cout << "Pizzas made: " << pizzas << endl;

    return pizzas;
}
