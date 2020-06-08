//
// Created by Romain on 02/06/2020.
//

#include "obstacle.hpp"



void Obstacle::recevoirdegats(int nbrdegats){

    obs_vie -= nbrdegats;

    if (obs_vie < 0){
        obs_vie = 0;
    }
}

// Fonction Affichage de l'obstacle
void Obstacle::affichage(sf::RenderWindow &window, sf::Texture &texture){
    sf::Sprite sprite_obstacle;
    sprite_obstacle.setTexture(texture);
    sprite_obstacle.setPosition(sf::Vector2f(x,675));

    window.draw(sprite_obstacle);
}

Obstacle::Obstacle(int _x): x(_x){

}