#include <iostream>
#include <SFML/Graphics.hpp>
#include "obstacle.hpp"
#include "vaisseau_principal.hpp"
#include "fonction.hpp"
#include "ennemis.hpp"
#include "tir.hpp"


int main()
{
    sf::Window window1;
    sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invader");
    window.setVerticalSyncEnabled(true);


    // Création des obstacles
    Obstacle obstacle(90);
    Obstacle obstacle1(375);
    Obstacle obstacle2(660);

    // Creation de vaisseau principal
    Vaisseau_principal vaisseauPrincipal;

    std::vector<Ennemis> ennemis;
    tbl_ennemis(ennemis);

    std::vector<Ennemis_sniper> ennemis_sniper;
    tbl_ennemis_sniper(ennemis_sniper);

    // tableau pour les tirs
    std::vector<Tir> tir_ennemis;
    std::vector<Tir> tir_sniper;
    std::vector<Tir> tir_vaisseau;

    // Chargement des textures --- Source: Matthieu Morel
    std::vector<string> dossiers_images = {
            "../../Ressources/ennemis.png",
            "../../Ressources/vaisseau_principal.png",
            "../../Ressources/Fond.png",
            "../../Ressources/ennemis_sniper.png",
            "../../Ressources/nebuleuse.png",
            "../../Ressources/tir.png",
            "../../Ressources/tir_ennemis.png",
            "../../Ressources/tir_ennemis_sniper.png"
    };
    std::vector<sf::Texture> textures;
    for(const auto& image : dossiers_images){
        sf::Texture texture;
        texture.loadFromFile(image);
        textures.push_back(texture);
    }

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        // Affichage de l'arriere plan
        background(window, textures[2]);

        // Affichage du vaisseau
        vaisseauPrincipal.deplacements();
        vaisseauPrincipal.affichage(window, textures[1]);
        if(vaisseauPrincipal.tirer() && vaisseauPrincipal.vaisseau_tir()){
            sf::Vector2i position = vaisseauPrincipal.position();
            tir_vaisseau.emplace_back(position.x + 23, position.y - 12, 1);
        }

        // Affichage ennemis
        ennemis_affichage(window, ennemis, textures[0], tir_ennemis);
        ennemis_sniper_affichage(window, ennemis_sniper, textures[3], tir_sniper);

        // tir pour vaisseau
        tir_affichage(window, textures[5], tir_vaisseau, 2);
        // tir pour ennemis
        tir_affichage(window, textures[6], tir_ennemis, 2);
        // tir pour ennemis_sniper
        tir_affichage(window, textures[7], tir_sniper, 3);

        // Affichage des obstacles
        obstacle.affichage(window, textures[4]);
        obstacle1.affichage(window, textures[4]);
        obstacle2.affichage(window, textures[4]);


        window.display();
    }

    return 0;
}