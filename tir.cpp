//
// Created by Romain on 07/06/2020.
//

#include "tir.hpp"

Tir::Tir(int _x, int _y, int _direction_tir) : x(_x), y(_y), direction_tir(_direction_tir){

}

void Tir::affichage(sf::RenderWindow &window, sf::Texture &texture){
    sf::Sprite sprite_tir;
    sprite_tir.setTexture(texture);
    sprite_tir.setPosition(sf::Vector2f(x,y));
    window.draw(sprite_tir);
}

void Tir::deplacement_tir(int vitesse){
    if(direction_tir == 0){
        y += vitesse;
    }
    else if(direction_tir == 1){
        y -= vitesse;
    }
}