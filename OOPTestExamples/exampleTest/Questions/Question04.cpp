// שאלה 4
// נתונות המחלקה והתכנית הראשית הבאות. מהו מספר הפעמים שיודפס למסך הספרה 3 בלבד?

#include<iostream>
using namespace std;
class A {
public:
    A() { cout << "1"; }
    A(const A& a) { cout << "2"; }
    ~A() { cout << "3"; }
};
void main() {
    A arr1[3];
    A* arr2 = new A[4];
    A** arr3 = new A * [5];
    for (int i=0 ; i<5; i++)
        arr3[i] = new A(arr1[i % 3]); //% is modulo
    delete[] arr2;
    for (int i=0 ; i<5; i++)
        delete arr3[i];
    delete[] arr3;
}

/*
תשובות אפשריות:
א. 12
ב. 5
ג. 4
ד. 3
ה. 7
ו. 9
*/
