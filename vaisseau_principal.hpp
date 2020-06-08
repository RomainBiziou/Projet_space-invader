//
// Created by Romain on 11/05/2020.
//

#ifndef SPACEINVADER_VAISSEAU_PRINCIPAL_HPP
#define SPACEINVADER_VAISSEAU_PRINCIPAL_HPP

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>


using std::string;

class Vaisseau_principal {

protected:
//    string nom;
    int x = 370;
    int y = 730;
    int vaisseau_vie = 5;
    int vaisseau_degats = 1;
    sf::Clock tir;

public:
    Vaisseau_principal();
    void affichage(sf::RenderWindow &window, sf::Texture &texture);
    void recevoirdegats(int nbrdegats);
    void attaquer(Vaisseau_principal &ennemis);
    void deplacements();
    bool tirer();
    sf::Vector2i position();
    bool vaisseau_tir();

};

#endif //SPACEINVADER_VAISSEAU_PRINCIPAL_HPP
