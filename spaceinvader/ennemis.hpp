//
// Created by Romain on 11/05/2020.
//

#ifndef SPACEINVADER_ENNEMIS_HPP
#define SPACEINVADER_ENNEMIS_HPP

#include <iostream>

class Ennemis
{

protected:
    int ennemis_vie;
    int ennemis_degats;

public:
    Ennemis();
    void recevoirdegats(int nbrdegats);
    void attaquer(Ennemis &vaisseau_principal);
};

#endif //SPACEINVADER_ENNEMIS_HPP
