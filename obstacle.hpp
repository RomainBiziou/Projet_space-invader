//
// Created by Romain on 02/06/2020.
//

#ifndef SPACEINVADER_OBSTACLE_HPP
#define SPACEINVADER_OBSTACLE_HPP

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

class Obstacle
{
protected:
    int x;
    int y{};
    int longueur{}; // = 50
    int largeur{}; //  = 25
    int obs_vie{} ;

public:
    Obstacle() = delete;
    explicit Obstacle(int _x);

    void affichage(sf::RenderWindow &window);
    void recevoirdegats (int nbrdegats);

};


#endif //SPACEINVADER_OBSTACLE_HPP
