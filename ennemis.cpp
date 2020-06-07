//
// Created by Romain on 11/05/2020.
//


#include "ennemis.hpp"

Ennemis::Ennemis(int _x, int _y) : x(_x), y(_y){

}

void Ennemis::recevoirdegats(int nbrdegats) {

    ennemis_vie -= nbrdegats;

    if (ennemis_vie < 0)
    {
        ennemis_vie = 0;
    }

}

void Ennemis::attaquer(Vaisseau_principal &vaisseau_principal) {
    vaisseau_principal.recevoirdegats(ennemis_degats);
}

void Ennemis::affichage(sf::RenderWindow &window, sf::Texture &texture){
    sf::Sprite sprite_ennemis;
    sprite_ennemis.setTexture(texture);
    sprite_ennemis.setPosition(sf::Vector2f(x,y));
    window.draw(sprite_ennemis);
}