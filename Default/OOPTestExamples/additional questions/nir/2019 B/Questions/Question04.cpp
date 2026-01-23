// שאלה 4
// מה מדפיסה התכנית?

#include <iostream>
using namespace std;
class X {
public:
X(int i) { n=i; }
int & f() { return n; }
private:
int n;
};
int main() {
X x1(5);
int &j = x1.f();
j += 2;
cout << j << x1.f() << endl;
}

/*
(א) 57
(ב) 77
(ג) 75
(ד) התכנית גורמת לשגיאת קומפילציה/זמן ריצה
*/
