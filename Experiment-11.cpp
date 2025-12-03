#include <iostream>
#include <stdexcept>
using namespace std;

class DivisionHandler {
public:
    double divideNumbers(double numerator, double denominator) {
        if (denominator == 0) {
            throw runtime_error("Division by zero is not allowed!");
        }
        return numerator / denominator;
    }
};

int main() {
    try {
        DivisionHandler divisionHandler;

        double numerator, denominator;

        cout << "Enter the numerator: ";
        cin >> numerator;

        cout << "Enter the denominator: ";
        cin >> denominator;

        double result = divisionHandler.divideNumbers(numerator, denominator);

        cout << "Result of division: " << result << endl;
    }
    catch (const runtime_error &e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unexpected exception occurred." << endl;
    }

    return 0;
}
