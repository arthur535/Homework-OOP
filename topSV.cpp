#include <iostream>

class Something
{
public:
    Something() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

class newSmth
{
public:
    int get(){return topsv;}
    bool b;
    int i;
    std::string str;
private:
    int topsv;
};

int main(){
    Something obj;
    newSmth* p = reinterpret_cast<newSmth*>(&obj);
    std::cout << p->get();
}
