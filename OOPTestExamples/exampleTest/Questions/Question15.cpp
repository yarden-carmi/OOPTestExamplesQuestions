// שאלה 15
// עבור אלו מהאופציות לתכנית הראשית התכנית תקרוס בזמן ריצה או תדפיס ערכי זבל?

#include<iostream>
#include<string>
using namespace std;
class X {
private:
    char* _str;
public:
    X() { _str = new char[5]; strcpy_s(_str, 5, "stam"); }
    void operator=(X & x) {
        _str = new char[strlen(x._str) + 1];
        strcpy_s(_str, strlen(x._str) + 1, x._str);
    }
    ~X() { delete[] _str; }
    void print() const { cout << _str << endl; }
};
void main() {
    // Look at the options!
}

/*
תשובות אפשריות:
א. void main() { X x1, x2; x1=x2; x1.print(); }
ב. void main() { X x1, x2; x1=x2; x2.print(); }
ג. void main() { X x1, x2; x1=x1; x1.print(); }
ד. void main() { X x1, x2; x1=x2; x2=x1; x1.print(); }
ה. כל התשובות האחרות אינן נכונות
*/