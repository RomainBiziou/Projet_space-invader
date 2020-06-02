//
// Created by Romain on 02/06/2020.
//

#include "obstacle.hpp"

void Obstacle::recevoirdegats(int nbrdegats) {

    obs_vie -= nbrdegats;

    if (obs_vie < 0){
        obs_vie = 0;
    }
}
