//
// Created by Romain on 11/05/2020.
//

#ifndef SPACEINVADER_VAISSEAU_PRINCIPAL_HPP
#define SPACEINVADER_VAISSEAU_PRINCIPAL_HPP

#include <iostream>
#include <string>

using std::string;

class Vaisseau_principal {

protected:
//    string nom;
    int vaisseau_vie = 5;
    int vaisseau_degats = 1;

public:

    void recevoirdegats(int nbrdegats);
    void attaquer(Vaisseau_principal &ennemis);

};

#endif //SPACEINVADER_VAISSEAU_PRINCIPAL_HPP
