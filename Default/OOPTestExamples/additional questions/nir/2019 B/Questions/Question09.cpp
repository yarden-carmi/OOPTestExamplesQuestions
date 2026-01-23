// שאלה 9
// מה מדפיסה התכנית?

#include <iostream>

class B {
public:
    virtual void disp() {
        std::cout << "B";
    }
};

class D : public B {
public:
    void disp() {
        std::cout << "D";
    }
};

void main() {
    D d;
    d.disp();
    D *pd = &d;
    pd->disp();
    B *pb = pd;
    pb->disp();
}

/*
(א) התכנית לא עוברת קומפילציה
(ב) DDB
(ג) DDD
(ד) BBB
*/
