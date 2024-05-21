#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
    string str;
public:
    MyString(const string& s = "") : str(s) {}

    MyString operator+(const MyString& other) {
        MyString result = *this;
        result.str += other.str;
        return result;
    }

    void display() {
        cout << str;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("world!");

    MyString s3 = s1 + s2;

    cout << "Concatenated string: ";
    s3.display();
    cout << endl;

    return 0;
}