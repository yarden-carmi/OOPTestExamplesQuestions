// שאלה 11
// אילו שורות בתכנית הבאה גורמות לשגיאת קומפילציה?

class A {
public:
    int I;
};

class B : protected A {
private:
    int J;
};

void main() {
    A t;
    B tt;
    t.I = 3;
    tt.I = 3;
}

/*
(א) אף שורה
(ב) שורות 2 ו6-
(ג) שורות 2 ו5-
(ד) שורה 7
*/
