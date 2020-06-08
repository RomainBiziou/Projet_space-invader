//
// Created by Romain on 07/06/2020.
//

#ifndef SPACEINVADER_TIR_HPP
#define SPACEINVADER_TIR_HPP

#include <SFML/Graphics.hpp>

class Tir{
protected:
    int x;
    int y;
    int direction_tir;

public:
    Tir(int _x, int _y, int _direction_tir);
    void affichage(sf::RenderWindow &window, sf::Texture &texture);
    void deplacement_tir(int vitesse);

};
#endif //SPACEINVADER_TIR_HPP