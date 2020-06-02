#include <iostream>
#include <SFML/Graphics.hpp>



int main()
{
    sf::Window window1;
    sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invader");
    window.clear(sf::Color::Black);


    sf::RectangleShape rectangle(sf::Vector2f(50, 25));
    rectangle.setPosition(100, 650);

    while (window.isOpen())
    {
        sf::Event event;


        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(rectangle);

        window.display();
    }

    return 0;
}