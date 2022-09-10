#include <iostream>
#include "class.hpp"
#include "operators.hpp"
#include "ctors.hpp"
#include "functions.hpp"
#include <unordered_map>

ams::string lowercase(ams::string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
    return str;
}
bool polindrome_permutation(ams::string);
int main(){
    ams::string str;
    str = "hoala Alohy";
    std::cout << polindrome_permutation(str);
}
bool polindrome_permutation(ams::string str) {
    std::unordered_map<char, int> ht;
    for (int i = 0; i < str.size(); ++i) {
        if(str[i] == ' '){
            str.erase(i,i);
            --i;
        }
    }
    lowercase(str);
    for (int i = 0; i < str.size(); ++i) {
        ht[str[i]]++;
    }
    int count_of_odd_elements = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (ht[str[i]] % 2 == 1) {
            count_of_odd_elements++;
        }
    }
    if (count_of_odd_elements <= 1) {
        return true;
    }
    return false;
}
