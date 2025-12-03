#include <iostream>
#include <fstream>
#include <iomanip>  

using namespace std;

#define FILE_NAME "time.dat"

void writeTime(int h, int m, int s) {
    char str[10];
    fstream file;

    file.open(FILE_NAME, ios::out | ios::binary);
    if (!file) {
        cout << "Error in creating file!!!" << endl;
        return;
    }

    sprintf(str, "%02d:%02d:%02d", h, m, s);

    file.write(str, sizeof(str));
    cout << "Time " << str << " has been written into file." << endl;

    file.close();
}

void readTime(int *h, int *m, int *s) {
    char str[10];
    fstream file;

    file.open(FILE_NAME, ios::in | ios::binary);
    if (!file) {
        cout << "Error in file opening..." << endl;
        return;
    }

    file.read(str, sizeof(str));

    sscanf(str, "%02d:%02d:%02d", h, m, s);

    file.close();
}

int main() {
    int h, m, s;

    cout << "Enter time :" << endl;
    cout << "Enter hour   : "; cin >> h;
    cout << "Enter minute : "; cin >> m;
    cout << "Enter second : "; cin >> s;

    writeTime(h, m, s);

    h = m = s = 0;

    readTime(&h, &m, &s);

    cout << "The time is "
         << setw(2) << setfill('0') << h << ":"
         << setw(2) << setfill('0') << m << ":"
         << setw(2) << setfill('0') << s << endl;

    return 0;
}
