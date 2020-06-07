#include <iostream>
#include <SFML/Graphics.hpp>
#include "obstacle.hpp"
#include "vaisseau_principal.hpp"
#include "fonction.hpp"
#include "ennemis.hpp"


int main()
{
    sf::Window window1;
    sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invader");


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

    // Chargement des textures --- Source: Matthieu Morel
    std::vector<string> dossiers_images = {
            "../../Ressources/ennemis.png",
            "../../Ressources/vaisseau_principal.png",
            "../../Ressources/Fond.png",
            "../../Ressources/ennemis_sniper.png"
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

        background(window, textures[2]);

        // Affichage du vaisseau
        vaisseauPrincipal.deplacements();
        vaisseauPrincipal.affichage(window, textures[1]);

        // Affichage ennemis
        ennemis_affichage(window, ennemis, textures[0]);
        ennemis_sniper_affichage(window, ennemis_sniper, textures[3]);

        // Affichage des obstacles
        obstacle.affichage(window);
        obstacle1.affichage(window);
        obstacle2.affichage(window);


        window.display();
    }

    return 0;
}