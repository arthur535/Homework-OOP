#include <iostream>

class Singleton {
public:
    static Singleton & instance() {
        static Singleton s;
        return s;
    }
    void setinfo(std::string str) {
        info = str;
    }
    std::string getinfo() {
        return info;
    }
private:
    Singleton(){}
    Singleton(Singleton const&);
    Singleton& operator=(Singleton const&);
    std::string info;
    
};
int main() {
    std::string data;
    std::cout << "please input your data: ";
    std::cin >> data;
    Singleton::instance().setinfo(data);
    std::cout << Singleton::instance().getinfo() << std::endl;
}
