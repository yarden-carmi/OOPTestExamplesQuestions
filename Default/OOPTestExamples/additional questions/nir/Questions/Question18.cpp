// שאלה 18
// מה מדפיסה התכנית הבאה:

#include <vector>
#include <iostream>
void main() {
    std::vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.insert(v.begin() + 1, 9);
    for (int i = 0; i < v.size(); ++i) std::cout << v[i];
}

/*
תשובות אפשריות:
(א) 9012
(ב) 0912
(ג) 0192
(ד) 0129
*/
