// שאלה 9
// מהי הטענה הנכונה לגבי התכנית הבאה?

#include<iostream>
#include<string>
using namespace std;
class Str {
private:
    char* _s;
public:
    Str() {
        _s = new char[5];
        strcpy_s(_s, 5, "stam");
    }
    ~Str() {
        if (_s)
            delete[] _s;
    }
    void print() const { cout << _s; }
};
void main() {
    Str s1;
    Str s2 = s1;
    s1.print();
    s2.print();
}

/*
תשובות אפשריות:
א. התכנית תדפיס stamstam ואז תופיע שגיאה בזמן ריצה
ב. התכנית תדפיס stamstam ותסתיים כהלכה
ג. יש שגיאת קומפילציה כי לא מוגדר בנאי העתקה (copy constructor)
ד. יש שגיאת קומפילציה כי לא מוגדר אופרטור השמה (=)
ה. כל התשובות האחרות אינן נכונות
ו. לא יודפס כלום כי יש שגיאה בזמן ריצה
*/