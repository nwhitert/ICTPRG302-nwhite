#include <iostream>

#include <SFML/Graphics.hpp>

#include "PhysicsObject.hpp"
#include "PhysicsBox.hpp"
#include "PhysicsSprite.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "ICTPRG302");
    window.setVerticalSyncEnabled(false);
    window.setKeyRepeatEnabled(true);

    sf::Texture myText;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}