#include <iostream>
#pragma pack(1)
class Something
{
public:
    Something() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
    void settopSV(int data) {
        topSecretValue = data;
    }
private:
    int topSecretValue;
};

int main() {
    Something obj;
    obj.settopSV(45);
    bool* pb = reinterpret_cast<bool*>(&obj);
    ++pb;
    int* pi = reinterpret_cast<int*>(pb);
    ++pi;
    std::string* ps = reinterpret_cast<std::string*>(pi);
    ++ps;
    int* pi1 = reinterpret_cast<int*>(ps);
    std::cout << (*(pi1));
}

