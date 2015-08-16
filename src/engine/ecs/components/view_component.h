#pragma once

#include <memory>
#include <SFML/Graphics.hpp>

namespace pl {

class ViewComponent {

public:
    void setTexture(sf::Texture &texture);

private:
    sf::Sprite sprite;
};
}
