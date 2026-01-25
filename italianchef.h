#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>
using namespace std;

class ItalianChef : public Chef {
private:
    string password = "pizza";
    int flour;
    int water;

    int makePizza();

public:
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string pw, int flourAmount, int waterAmount);
};

#endif
