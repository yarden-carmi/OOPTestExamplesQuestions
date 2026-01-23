// שאלה 21
// מה מדפיסה התכנית הבאה:

#include <iostream>
#include <vector>
void main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(4);
    std::vector<int>::iterator it = v.begin();
    int n = *(it++);
    std::cout << n;
}

/*
תשובות אפשריות:
(א) 1
(ב) 2
(ג) 4
(ד) 5
*/
