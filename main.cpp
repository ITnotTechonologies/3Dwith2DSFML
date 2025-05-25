#include <SFML/Graphics.hpp>
#include <vector>

class Dot{
    std::vector<double> Position;

    void YRotation(std::vector<double> &position, double &rotation_speed, double &direction) {

    }
};

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 700), "SFML works!");
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