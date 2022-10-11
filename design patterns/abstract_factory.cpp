#include <iostream>
class IEngine {
public:
    virtual void releaseEngine() = 0;
};

class JapaneseEngine : public IEngine {
public:
    void releaseEngine() override {
        std::cout << "japanese engine release" << std::endl;
    }
};

class RussianEngine : public IEngine {
public:
    void releaseEngine() override {
        std::cout << "russian engine release" << std::endl;
    }
};

class ICar {
public:
    virtual void releaseCar() = 0;
};

class JapaneseCar : public ICar {
public:
    void releaseCar() {
        std::cout << "japanese car release" << std::endl;
    }
};

class RussianCar : public ICar {
public:
    void releaseCar() override {
        std::cout << "russian car release" << std::endl;
    }
};

class IFactory {
public:
    virtual IEngine* createEngine() = 0;
    virtual ICar* createCar() = 0;
};

class JapaneseFactory : public IFactory {
public:
    IEngine* createEngine() override {
        return new JapaneseEngine();
    }
    ICar* createCar() override {
        return new JapaneseCar();
    }
};

class RussianFactory : public IFactory {
public:
    IEngine* createEngine() override {
        return new RussianEngine();
    }
    ICar* createCar() override {
        return new RussianCar();
    }
};

int main(){
    IFactory* ifactory = new JapaneseFactory;
    IEngine* pt1 = ifactory->createEngine();
    pt1->releaseEngine();
    ICar* pt2 = ifactory->createCar();
    pt2->releaseCar();
    
    IFactory* jfactory = new RussianFactory;
    IEngine* pt3 = jfactory->createEngine();
    pt3->releaseEngine();
    ICar* pt4 = jfactory->createCar();
    pt4->releaseCar();
}
