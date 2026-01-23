// שאלה 18
// כמה שורות בקטע תכנית לא עוברות קומפילציה?

void main() {
    int a = 42;
    int *p;
    const int b = 24;
    const int *q;
    p = &a;
    p = &b;
    q = &a;
    q = &b;
}

/*
(א) 0
(ב) 1
(ג) 2
(ד) 3
*/
