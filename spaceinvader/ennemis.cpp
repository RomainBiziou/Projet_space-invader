//
// Created by Romain on 11/05/2020.
//

#include "ennemis.hpp"

Ennemis::Ennemis() : ennemis_vie(2), ennemis_degats(2) {

}

void Ennemis::recevoirdegats(int nbrdegats) {

    ennemis_vie -= nbrdegats;

    if (ennemis_vie < 0)
    {
        ennemis_vie = 0;
    }

}

void Ennemis::attaquer(Ennemis &vaisseau_principal) {
    vaisseau_principal.recevoirdegats(ennemis_degats);
}