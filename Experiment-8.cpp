#include <iostream>
using namespace std;

class alpha {
    int x;
public:
    alpha(int i) {
        x = i;
        cout << "Alpha Initialized\n";
    }

    void show_x() {
        cout << "\nx = " << x;
    }
};

class beta {
    float y;
public:
    beta(float j) {
        y = j;
        cout << "\nBeta Initialized\n";
    }

    void show_y() {
        cout << "\ny = " << y;
    }
};

class gamma : public beta, public alpha {
    int m, n, c, d;
public:
    gamma(int a, float b, int c, int d)
        : alpha(a), beta(b) {

        this->c = c;
        this->d = d;

        cout << "\nGamma Initialized\n";
    }

    void show_mn() {
        cout << "\nm = " << c;
        cout << "\nn = " << d;
    }
};

int main() {
    gamma g(5, 7.65, 30, 100);

    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}
