#include <iostream>

int add (int a, int b) {
    return a + b;
}

double add (double a, double b) {
    return a + b;
}

int main () {
    int ResultInt = add (5,10);
    std::cout<<"Result of adding integers : "<<ResultInt<<std::endl;

    double ResultDouble = add (5.2,10.5);
    std::cout<<"Result of adding doubles : "<<ResultDouble<<std::endl;
}
