//
// Created by Romain on 02/06/2020.
//

#ifndef SPACEINVADER_ENNEMIS_SNIPER_HPP
#define SPACEINVADER_ENNEMIS_SNIPER_HPP
#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include "ennemis.hpp"
#include "vaisseau_principal.hpp"

class Ennemis_sniper : public Ennemis {
protected:

    int ennemis_sniper_vie = 1;
    int ennemis_sniper_degats = 4;

public:
    Ennemis_sniper(int _x, int _y);
    void recevoirdegats_sniper(int nbrdegats);
    void attaquer_sniper(Vaisseau_principal &vaisseau_principal);

};

#endif //SPACEINVADER_ENNEMIS_SNIPER_HPP
