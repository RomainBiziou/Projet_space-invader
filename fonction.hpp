//
// Created by Romain on 07/06/2020.
//

#ifndef SPACEINVADER_FONCTION_HPP
#define SPACEINVADER_FONCTION_HPP

#include "tir.hpp"
#include "ennemis.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "ennemis_sniper.hpp"

void background(sf::RenderWindow &window, sf::Texture &texture);
void tbl_ennemis(std::vector<Ennemis> &ennemis);
void ennemis_affichage(sf::RenderWindow &window, std::vector<Ennemis> &ennemis, sf::Texture &texture, std::vector<Tir> &tir);
void tbl_ennemis_sniper(std::vector<Ennemis_sniper> &ennemis_sniper);
void ennemis_sniper_affichage(sf::RenderWindow &window, std::vector<Ennemis_sniper> &ennemis_sniper, sf::Texture &texture, std::vector<Tir> &tir);
void tir_affichage(sf::RenderWindow &window, sf::Texture &texture, std::vector<Tir> &tirs, int vitesse);

#endif //SPACEINVADER_FONCTION_HPP
