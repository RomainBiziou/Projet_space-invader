//
// Created by Romain on 11/05/2020.
//

#include "vaisseau_principal.hpp"

void Vaisseau_principal::recevoirdegats(int nbrdegats){

    vaisseau_vie -= nbrdegats;

    if (vaisseau_vie < 0)
    {
        vaisseau_vie = 0;
    }
}

void Vaisseau_principal::attaquer(Vaisseau_principal &ennemis){

    ennemis.recevoirdegats(vaisseau_degats);
}

void Vaisseau_principal::affichage(sf::RenderWindow &window, sf::Texture &texture){
    sf::Sprite sprite_vaisseau;
    sprite_vaisseau.setTexture(texture);
    sprite_vaisseau.setPosition(sf::Vector2f(x,y));
    window.draw(sprite_vaisseau);

}

Vaisseau_principal::Vaisseau_principal()= default;

void Vaisseau_principal::deplacements(){
    // deplacement du vaisseau à droite
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        x += 4;
    }
    // deplacement du vaisseau à gauche
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        x -= 4;
    }
    // limite pour ne pas sortir de la fenetre à gauche
    if(x <= 0){
        x = 0;
    }
    // limite pour ne pas sortir de la fenetre à droite
    if(x + 55 >= 800){
        x = 800 - 55;
    }
}

bool Vaisseau_principal::tirer(){
    // Appuyer sur espace pour tirer
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
        return true;
    }
    else
        return false;
}

sf::Vector2i Vaisseau_principal::position(){
    sf::Vector2i position;
    position.x = x;
    position.y = y;
    return position;
}

bool Vaisseau_principal::vaisseau_tir(){
    if(tir.getElapsedTime().asMilliseconds() >= 500){
        tir.restart();
        return true;
    }
    else
        return false;
}