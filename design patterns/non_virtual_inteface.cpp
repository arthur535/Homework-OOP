#include <iostream>
class Animal {
public:
    Animal(){std::cout << "Animal constructor" << std::endl;}
    virtual ~Animal(){std::cout << "Animal destructor" << std::endl;}
    virtual void speak() const {std::cout << getSound() << std::endl;}
private:
    virtual std::string getSound()const = 0;
};
class Dog : public Animal {
public:
    Dog(){std::cout << "Dog constructor" << std::endl;}
    ~Dog(){std::cout << "Dog destructor" << std::endl;}
private:
    std::string getSound() const {return "Woof!";}
};
class Cat : public Animal {
public:
    Cat(){std::cout << "Cat constructor" << std::endl;}
    ~Cat(){std::cout << "Cat destructor" << std::endl;}
private:
    std::string getSound() const {return "Meow!";}
};


int main(){
    Dog Retriever;
    Retriever.speak();
    Cat Abyssinian;
    Abyssinian.speak();
}
