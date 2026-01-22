// שאלה 19
// השלם את הקוד במקום שני סימני השאלה (??) בכדי שיעבור קומפילציה.

#include<iostream>
using namespace std;
class A {
    int K;
    const int f(const int k) const { return ??; }
};
void main() {
}

/*
תשובות אפשריות:
א. &K
ב. k
ג. K+k
ד. (K(k))
ה. this->K
ו. &k
*/