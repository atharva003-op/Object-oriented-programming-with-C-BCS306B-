#include <iostream>
using namespace std;

class NUM {
    private: int n;

    public:
    void getNum(int x) {
        n=x;
    }
    void dispNum(void) {
        cout<<"value of n is : "<<n;
    }
    void operator - () {
        n=-n;
    }
};

int main () {
    NUM num;
    num.getNum(10);
    cout<<"original number"<<endl;
    num.dispNum();
    cout<<endl; - num;
    cout<<"after unary minus operator overloading"<<endl;

    num.dispNum();
    return 0;
}
