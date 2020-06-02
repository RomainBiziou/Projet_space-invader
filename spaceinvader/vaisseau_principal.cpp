//
// Created by Romain on 11/05/2020.
//
#include "vaisseau_principal.hpp"

void Vaisseau_principal::recevoirdegats(int nbrdegats) {

    vaisseau_vie -= nbrdegats;

    if (vaisseau_vie < 0)
    {
        vaisseau_vie = 0;
    }
}

void Vaisseau_principal::attaquer(Vaisseau_principal &ennemis) {

    ennemis.recevoirdegats(vaisseau_degats);
}
