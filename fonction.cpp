//
// Created by Romain on 07/06/2020.
//

#include "fonction.hpp"

void background(sf::RenderWindow &window, sf::Texture &texture){
    // charger sprite pour le fond  ---- Source pour Sprite: Ravenmore
    sf::Sprite sprite_background;
    sprite_background.setTexture(texture);
    window.draw(sprite_background);
}

void tbl_ennemis(std::vector<Ennemis> &ennemis){
    // Boucle qui gere les y
    for(int i = 0; i < 2; i++){
        // Boucle qui gere les x
        for(int j = 0; j < 25; j++){
            ennemis.emplace_back(Ennemis(j * 32,i * 32 + 52));

        }
    }
}

void ennemis_affichage(sf::RenderWindow &window, std::vector<Ennemis> &ennemis, sf::Texture &texture, std::vector<Tir> &tir){
    // Parcours tout les elements du tableau ennemis
    for(auto &ennemi:ennemis){
        if(ennemi.ennemis_tir()){
            sf::Vector2i position = ennemi.position();
            tir.emplace_back(position.x + 10, position.y + 32,0);
        }
        ennemi.affichage(window, texture);
    }
}

void tbl_ennemis_sniper(std::vector<Ennemis_sniper> &ennemis_sniper){
    // Boucle qui gere les y
    for(int i = 0; i < 1; i++){
        // Boucle qui gere les x
        for(int j = 0; j < 25; j++){
            ennemis_sniper.emplace_back(Ennemis_sniper(j * 32,i * 32 + 20));

        }
    }
}

void ennemis_sniper_affichage(sf::RenderWindow &window, std::vector<Ennemis_sniper> &ennemis_sniper, sf::Texture &texture, std::vector<Tir> &tir){
    // Parcours tout les elements du tableau ennemis_sniper
    for(auto &ennemi:ennemis_sniper){
        if(ennemi.ennemis_tir()){
            sf::Vector2i position = ennemi.position();
            tir.emplace_back(position.x + 12, position.y + 32,0);
        }
        ennemi.affichage(window, texture);
    }
}

void tir_affichage(sf::RenderWindow &window, sf::Texture &texture, std::vector<Tir> &tirs, int vitesse){
    for(auto &tir:tirs){
        tir.affichage(window, texture);
        tir.deplacement_tir(vitesse);
    }
}