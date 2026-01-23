// שאלה 20
// כמה מהשורות 7-9 עוברות קומפילציה ומשימות 42 לשדה x של המחלקה C במשתנה d?

class A { public: int x; };
class B : public A {};
class C : public A {};
class D : public B, public C {};
void main() {
D d;
d.C::x = 42;
((C)d).x = 42;
((C*)&d)->x = 42;
}

/*
(א) 0
(ב) 1
(ג) 2
(ד) 3
*/
