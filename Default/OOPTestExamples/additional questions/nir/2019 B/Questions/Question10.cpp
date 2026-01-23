// שאלה 10
// נתונות הגדרות של 5 רשומות:
// כמה שדות מטיפוס int קיימים באובייקט מטיפוס E?

struct A {
    int x;
};

struct B : virtual A {};
struct C : virtual A {};
struct D : A {};
struct E : B, C, D {};

/*
(א) 1
(ב) 2
(ג) 3
(ד) אף תשובה אינה נכונה
*/
