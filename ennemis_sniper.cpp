//
// Created by Romain on 02/06/2020.
//

#include <SFML/Graphics.hpp>
#include "ennemis_sniper.hpp"

void Ennemis_sniper::recevoirdegats_sniper(int nbrdegats) {

    ennemis_sniper_vie -= nbrdegats;

    if (ennemis_sniper_vie < 0)
    {
        ennemis_sniper_vie = 0;
    }

}

void Ennemis_sniper::attaquer_sniper(Vaisseau_principal &vaisseau_principal) {
    vaisseau_principal.recevoirdegats(ennemis_sniper_degats);
}

Ennemis_sniper::Ennemis_sniper(int _x, int _y) : Ennemis(_x, _y){

}