// נתח את המקרה הבא של חריגות וקבצים:

#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

void process() {
    ofstream f("log.txt");
    f << "Start";
    throw std::runtime_error("Fail");
    f << "End";
    f.close();
}

int main() {
    try {
        process();
    } catch (...) {
        cout << "Caught";
    }
    return 0;
}

/*
מה יהיה תוכן הקובץ log.txt ומה יודפס למסך?

תשובות אפשריות:
1. קובץ: "Start", מסך: שגיאה לא מטופלת
2. קובץ: ריק, מסך: "Caught"
3. קובץ: "StartEnd", מסך: "Caught"
4. קובץ: "Start", מסך: "Caught"
5. קובץ: "StartEnd", מסך: כלום
6. קובץ: ריק, מסך: כלום
*/
