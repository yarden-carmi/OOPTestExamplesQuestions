// 4. מה תהיה תוצאת ההרצה של הקוד הבא?

#include <iostream>
#include <fstream>
using namespace std;

class Data {
public:
    int* val;
    Data(int v) { val = new int(v); }
    ~Data() { delete val; }
};

int main() {
    Data d1(100);
    ofstream out("d.bin", ios::binary);
    out.write((char*)&d1, sizeof(Data));
    out.close();

    ifstream in("d.bin", ios::binary);
    Data d2(0);
    in.read((char*)&d2, sizeof(Data));
    in.close();

    return 0;
    // בצאתו מ-main מתבצע הדיסטרטור של d1 ו-d2
}

/*
תשובות אפשריות:
1. התוכנית תרוץ ותסתיים בהצלחה ללא הודעות
2. זליגת זיכרון (Memory Leak) ללא קריסה
3. שגיאת קומפילציה בגלל כתיבת מצביע לקובץ
4. שגיאת זמן ריצה (Double Free) כי שני האובייקטים מצביעים לאותו זיכרון
5. שגיאת IO בקריאה מהקובץ
6. ערך האובייקט d2 יהיה לא מוגדר
*/
