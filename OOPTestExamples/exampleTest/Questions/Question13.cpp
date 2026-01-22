// שאלה 13
// נתונה התכנית הבאה, מה יודפס?

#include<iostream>
using namespace std;
int& func(int arr[], int index) {
    return arr[index];
}
void main() {
    int arr[]={6,7,8,9,10};
    int num = func(arr,3) = func(arr,4) = 4;
    cout << num;
}

/*
תשובות אפשריות:
א. התכנית לא תתקמפל
ב. בתכנית יש שגיאה בזמן ריצה
ג. 4
ד. 9
ה. 10
ו. לא יודפס כלום
*/