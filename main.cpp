#include "chef.h"
#include "italianChef.h"
#include <iostream>
using namespace std;

int main() {
    Chef Chef("Gordon");
    cout << "Salads: " << Chef.makeSalad(20) << endl;
    cout << "Soups: " << Chef.makeSoup(20) << endl;

    ItalianChef italianChef("Mario");

    italianChef.askSecret("pizza", 25, 15);   // oikein
    italianChef.askSecret("wrong", 25, 15);   // väärin

    return 0;
}
