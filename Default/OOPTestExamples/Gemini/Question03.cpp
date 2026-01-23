// נתון הקוד הבא המטפל בעדכון קובץ. מה יודפס בסוף?

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int vals[] = {10, 20, 30};
    ofstream f1("test.bin", ios::binary);
    f1.write((char*)vals, sizeof(vals));
    f1.close();

    fstream f2("test.bin", ios::in | ios::out | ios::binary);
    int newVal = 99;
    f2.seekp(sizeof(int), ios::beg);
    f2.write((char*)&newVal, sizeof(int));

    f2.seekg(0, ios::beg);
    int res = 0;
    f2.read((char*)&res, sizeof(int));
    f2.read((char*)&res, sizeof(int));

    cout << res;
    f2.close();
    return 0;
}

/*
מה יודפס למסך?

תשובות אפשריות:
1. 10
2. 20
3. 99
4. 30
5. 119
6. שגיאת זמן ריצה
*/
