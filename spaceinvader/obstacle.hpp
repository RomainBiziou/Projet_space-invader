//
// Created by Romain on 02/06/2020.
//

#ifndef SPACEINVADER_OBSTACLE_HPP
#define SPACEINVADER_OBSTACLE_HPP

#include <iostream>
#include <string>

class Obstacle
{
protected:
    int longueur = 50;
    int largeur = 25;
    int obs_vie ;

public:

    void recevoirdegats (int nbrdegats);

};


#endif //SPACEINVADER_OBSTACLE_HPP
