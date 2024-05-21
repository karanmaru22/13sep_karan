#include <iostream>
using namespace std;

class Interest {
private:
    int principal;
    int year;
    float rate;

public:
    Interest(int p, int y, float r = 2.5) {
        principal = p;
        year = y;
        rate = r;
    }

    float calculateInterest() {
        return (principal * year * rate) / 100;
    }
};

int main() {
    int principal, year;
    float rate;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter number of years: ";
    cin >> year;
    cout << "Enter rate of interest: ";
    cin >> rate;

    Interest obj(principal, year, rate);

    cout << "Simple Interest: " << obj.calculateInterest() << endl;

    return 0;
}