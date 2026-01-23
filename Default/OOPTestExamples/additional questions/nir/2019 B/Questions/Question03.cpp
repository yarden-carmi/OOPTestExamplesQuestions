// שאלה 3
// מה מדפיסה התכנית?

#include <iostream>
using namespace std;
void f(int i, double j) { cout << i << j << endl; }
void f(double i, int j) { cout << j << i << endl; }
void main() {
int i = 1, j = 2;
f(i, j);
}

/*
(א) 12
(ב) 21
(ג) 1221
(ד) התכנית לא עוברת קומפילציה
*/
