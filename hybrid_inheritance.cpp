#include <iostream>
class Parent {
    int basedata = 1024;
public:
    int getdata() {
        return basedata;
    }
};

class Child1 : public Parent {};

class Child2 : public Parent {};

class Grandchild : public Child1, public Child2 {
public:
    int getdata() {
        Child1* obj = reinterpret_cast<Child1*>(this);
        return obj->getdata();
    }
};
int main() {
    Grandchild obj;
    std::cout << obj.getdata();
}


