// שאלה 17
// איזו פונקציה/אופרטור יש להוסיף למחלקה Op כדי שיודפס 1 למסך?

#include<iostream>
using namespace std;
class A {
public:
    friend ostream& operator<<(ostream& out, const A& other) {
        out << "1";
        return out;
    }
};
class Op {
public:
};
void main() {
    Op op;
    cout << (A)op << endl;
}

/*
תשובות אפשריות:
א. operator A() const { return A(); }
ב. A operator A() const { return A(); }
ג. operator int() const { return A(); }
ד. friend ostream& operator<<(ostream& x, const Op& op) { x << "1"; return x; }
ה. operator char() const { return '1'; }
ו. כל התשובות האחרות אינן נכונות
*/