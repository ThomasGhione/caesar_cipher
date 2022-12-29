#include <iostream>
#include <string>
int main() {
    const int N = 26;
    std::string p;
    int k;
    std::cout << "Insert the word to encrypt and the number of shifts ";
    std::cin >> p >> k;
    for (unsigned int i = 0; i < p.size(); ++i) p[i] = ((p[i] - 'a') + k) % N + 'a';
    std::cout << p;
}