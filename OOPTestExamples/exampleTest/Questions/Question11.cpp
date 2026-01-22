// שאלה 11
// בכמה מתוך הקריאות לפונקציה func בתכנית הראשית יש שגיאת קומפילציה?

#include<iostream>
using namespace std;
void func(double d, const char* s = "NULL", int i = 0, float f = 5.5)
{
    cout << "Do something" << endl;
}
void main() {
    func();
    func(1);
    func(2.2);
    func(3.3, 6);
    func("hello");
    func(5, "hi", 6.6);
    func(5, "bye", 6.6, 6.6);
    func(5, 6.6, "again", 6);
}

/*
תשובות אפשריות:
א. בארבע קריאות
ב. בשש קריאות
ג. בשתי קריאות
ד. בשלוש קריאות
ה. בקריאה אחת
ו. בחמש קריאות
*/