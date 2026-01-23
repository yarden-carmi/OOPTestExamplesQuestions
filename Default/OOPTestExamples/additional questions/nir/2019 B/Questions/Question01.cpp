// שאלה 1
// מה מדפיסה התוכנית

#include <iostream>
int f(char c, int i) {return i++;}
int &f(int &i, char c) {return ++i;}
void main() {int x=4; std::cout << f(x,'x'); std::cout<< f('x',x); }

/*
(א) התכנית לא עוברת קומפילציה
(ב) 45
(ג) 44
(ד) 55
*/
