// שאלה 19
// כמה שורות בתכנית לא עוברות קומפילציה?

class A {};
class B : public A {};

void main() {
    A a, *p;
    B b, *q;
    p = &b;
    q = &a;
    a = b;
    b = a;
}

/*
(א) 0
(ב) 1
(ג) 2
(ד) 3
*/
