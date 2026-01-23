// שאלה על ירושה וקבצים: נתונות המחלקות הבאות

#include <iostream>
#include <fstream>
using namespace std;

class Base { public: int a; };
class Derived : public Base { public: int b; };

void main() {
    ofstream f("data.bin", ios::binary);
    // ... setup for reading later
    
    Derived d;
    d.a = 1; d.b = 2;
    f.write((char*)&d, sizeof(Derived));
    f.close(); // Closing to ensure flush
    
    ifstream f_in("data.bin", ios::binary);
    Base b_obj;
    f_in.read((char*)&b_obj, sizeof(Base));

    cout << "b_obj.a: " << b_obj.a << endl;
}

/*
כמה בתים נקראו מהקובץ ומה יהיה ערך השדה b_obj.a?

תשובות אפשריות:
1. 8 בתים נקראו, ערך 1
2. 4 בתים נקראו, ערך 2
3. 4 בתים נקראו, ערך 1
4. התנהגות לא מוגדרת
5. 8 בתים נקראו, ערך 2
6. שגיאת קומפילציה
*/
