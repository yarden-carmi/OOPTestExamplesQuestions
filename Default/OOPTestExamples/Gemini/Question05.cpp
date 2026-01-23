// 5. נתון הקוד הבא. מה יודפס בסוף?

#include <iostream>
#include <typeinfo>
using namespace std;

struct NonVirtual { int x; };
struct Virtual { virtual ~Virtual() {} };

int main() {
    int i = 10;
    NonVirtual* nv = nullptr;
    Virtual* v = new Virtual();

    // מקרה א
    typeid(i++);
    std::cout << i << " ";

    // מקרה ב
    typeid(*nv); // האם יקרוס?
    std::cout << "Survive ";

    // מקרה ג
    int j = 0;
    // הביטוי בתוך typeid אינו מקבל שיערוך אם הטיפוס סטטי
    typeid([&j](){ j = 100; return v; }()); 
    std::cout << j;

    return 0;
}

/*
תשובות אפשריות:
1. 11 Survive 100
2. 10 Survive 100
3. 11 Survive 0
4. 10 Crash 0
5. 10 Survive 0
6. שגיאת קומפילציה
*/
