#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << "Chef constructor: " << chefName << endl;
}

Chef::~Chef() {
    cout << "Chef destructor: " << chefName << endl;
}

string Chef::getName() {
    cout << "getName called" << endl;
    return chefName;
}

int Chef::makeSalad(int ingredients) {
    return ingredients / 5;
}

int Chef::makeSoup(int ingredients) {
    return ingredients / 3;
}
