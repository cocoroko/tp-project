#include "humanity.h"

void humanity::Addhumanity(std::string type) {
    if( type == "scientist" ) {
        scientist.push_back(creator.Createscientist());
    }
    if( type == "lekar" ) {
        Hlekar.push_back(creator.Createlekar());
    }
    if( type == "covalier" ) {
        Hcovalier.push_back(creator.Createcovalier());
    }
}

void CounterTerrorists::Info() {
    std::cout << std::endl;
    std::cout << "Humanity team:" << std::endl;
    std::cout << "scientists: " << scientist.size() << std::endl;
    std::cout << "lekar: " << Hlekar.size() << std::endl;
    std::cout << "covalier: " << Hcovalier.size() << std::endl;
}

int humanity::GetDamage() {
    int total = 0;
    for( int i = 0; i < allUnits.size(); i++ ) {
        total += allUnits[i]->UnitDamage();
    }
    return total;
}
