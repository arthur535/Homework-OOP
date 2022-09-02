#include <iostream>
#include <vector>
using namespace std;
class Musician{
public: virtual void play(){cout << "Musician\n";}
};
class Pianist : public Musician {
public: void play(){cout << "Painist\n";}
};
class Guitarist : public Musician {
public: void play(){cout << "Guitarist\n";}
};
class Bassguitarist : public Musician {
public: void play(){cout << "Bassguitarist\n";}
};
class Drummer : public Musician {
public: void play(){cout << "Drummer\n";}
};
class Vocalist : public Musician {
public: virtual void play(){cout << "Vocalist\n";}
};
std::vector<Musician*> party_maker(){
    std::vector<Musician*> group(5);
    group[0] = new Drummer;
    group[1] = new Guitarist;
    group[2] = new Bassguitarist;
    group[3] = new Pianist;
    group[4] = new Vocalist;
    return group;
}
void party(std::vector<Musician*> vec){
    for (int i = 0; i < vec.size(); ++i) {
        vec[i]->play();
    }
}
int  main(){
    party(party_maker());
}
