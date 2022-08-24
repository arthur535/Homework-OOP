#include <iostream>
class Person {
public:
    Person() = default;
    Person(int _age, std::string _name) {
        age = _age;
        name = _name;
    }
    Person(Person&& rhs) {
        age = rhs.age;
        name = rhs.name;
    }
    ~Person = default;
    void printf() {
        std::cout << "age = " << age << std::endl;
        std::cout << "name = " << name << std::endl;
    }
private:
    int age;
    std::string name;
};
int main(){
    Person first(14, "Armen");
    first.printf();
    Person second  = std::move(first);
    first.printf();
}

