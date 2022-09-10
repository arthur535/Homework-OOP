#include <iostream>
//interface class Musician
class Musician {
public:
    virtual void play() = 0;
    virtual void listen(Musician&) = 0;
    virtual bool isPlaying() = 0;
    virtual ~Musician();
};
Musician:: ~Musician (){
    std::cout << "Musician dtor\n";
}
//Derived classes
class Saxophonist : Musician {
public:
    Saxophonist(){std::cout << "Sax ctor\n";};
    void play() override {std::cout << "Saxophonist is playing\n";}
    void listen(Musician&) override {std::cout << "Saxophonist is listening\n";}
    bool isPlaying() override {std::cout << "If Saxophonist is playing";return 1;}
    ~Saxophonist () override {std::cout << "Sax dtor\n";}
};
class Pianist : Musician {
public:
    Pianist(){std::cout << "Pianist ctor\n";};
    void play() override {std::cout << "Pianist is playing\n";}
    void listen(Musician&) override {std::cout << "Pianist is listening\n";}
    bool isPlaying() override {std::cout << "If Pianist is playing";return 1;}
    ~Pianist () override {std::cout << "Pianist dtor\n";}
};
class Bassist : Musician {
public:
    Bassist(){std::cout << "Bassist ctor\n";};
    void play() override {std::cout << "Bassist is playing\n";}
    void listen(Musician&) override {std::cout << "Bassist is listening\n";}
    bool isPlaying() override {std::cout << "If Bassist is playing";return 1;}
    ~Bassist () override {std::cout << "Bassist dtor\n";}
};
class Drummer : Musician {
public:
    Drummer(){std::cout << "Drummer ctor\n";};
    void play() override {std::cout << "Drummer is playing\n";}
    void listen(Musician&) override {std::cout << "Drummer is listening\n";}
    bool isPlaying() override {std::cout << "If Drummer is playing";return 1;}
    ~Drummer () override {std::cout << "Drummer dtor\n";}
};
int main(){
    Saxophonist* s = new Saxophonist;
    Pianist* k = new Pianist;
    delete s;
    delete k;
}
