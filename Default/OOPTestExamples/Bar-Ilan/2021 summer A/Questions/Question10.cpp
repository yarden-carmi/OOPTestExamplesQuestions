// שאלה 10
// באלו שורות ישנה שגיאה?

#include<iostream>
using namespace std;
class X {
public:
    const X& f1 (const X& x) const {
        return *this;
    }
    const X& f2(X& x) const {
        return *this;
    }
    X& f3 (X& x) const {
        return x;
    }
    X& f4(X& x) {
        return *this;
    }
};
void main() {
    const X x1;
    X x2;
    x1.f1(x2).f2(x2).f3(x2).f4(x2); //line 1
    x1.f4(x2).f3(x2).f2(x2).f1(x2); //line 2
    x2.f1(x2).f2(x2).f3(x2).f4(x2); //line 3
    x2.f1(x1).f2(x1).f3(x1).f4(x1); //line 4
}

/*
תשובות אפשריות:
א. ישנה שגיאה בשורות 1,3 בלבד
ב. ישנה שגיאה בשורות 2,4 בלבד
ג. ישנה שגיאה בשורה 2 בלבד
ד. ישנה שגיאה בשורה 4 בלבד
ה. ישנה שגיאה בשורה 3 בלבד
ו. כל התשובות האחרות אינן נכונות
*/