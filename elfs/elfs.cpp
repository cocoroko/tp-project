#include "elfs.h"

void elfs::Addelfs(std::string type) {
    if( type == "ork" ) {
        ork.push_back(creator.Createork());
    }
    if( type == "lekar" ) {
        Elekar.push_back(creator.CreateElekar());
    }
    if( type == "covalier" ) {
        Ecovalier.push_back(creator.CreateEcovalier());
    }
}

void elfs::Info() {
    std::cout << std::endl;
    std::cout << "elfs team:" << std::endl;
    std::cout << "orks: " << ork.size() << std::endl;
    std::cout << "covalier: " << Ecovalier.size() << std::endl;
    std::cout << "lekars: " << Elekar.size() << std::endl;
}

int elfs::GetDamage() {
    int total = 0;
    for( int i = 0; i < allUnits.size(); i++ ) {
        total += allUnits[i]->UnitDamage();
    }
    return total;
}
