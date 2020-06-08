//
// Created by Romain on 11/05/2020.
//

#ifndef SPACEINVADER_ENNEMIS_HPP
#define SPACEINVADER_ENNEMIS_HPP
#include <SFML/Graphics.hpp>
#include <iostream>
#include "vaisseau_principal.hpp"

class Ennemis
{

protected:
    int x;
    int y;
    int ennemis_vie = 2;
    int ennemis_degats = 2;
    sf::Clock tir;

public:
    Ennemis() = delete;
    explicit Ennemis(int _x, int _y);
    bool ennemis_tir();
    void recevoirdegats(int nbrdegats);
    void attaquer(Vaisseau_principal &vaisseau_principal);
    void affichage(sf::RenderWindow &window, sf::Texture &texture);
    sf::Vector2i position();
};

#endif //SPACEINVADER_ENNEMIS_HPP
