#include <iostream>
using namespace std;

class Addition {
    public: 
    int add (int a,int b) {
        return a + b;
    }
};

class Subtraction {
    public:
    int subtract (int a, int b) {
        return a - b;
    }
};

class Arithemetic : public Addition, public Subtraction {
    public:
    void displayResults(int a,int b) {
        cout<<"Sum : "<<add(a,b)<<endl;
        cout<<"Difference : "<<subtract(a,b)<<endl;
    }
};

int main () {
    Arithemetic arithemtic;
    arithemtic.displayResults(5,3);
    return 0;
}
