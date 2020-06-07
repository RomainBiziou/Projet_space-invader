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
void Obstacle::affichage(sf::RenderWindow &window){
    sf::RectangleShape rectangle(sf::Vector2f(50, 25));
    rectangle.setPosition(sf::Vector2f(x,675));
    rectangle.setFillColor(sf::Color::Yellow);

    window.draw(rectangle);
}

Obstacle::Obstacle(int _x): x(_x){

}