#include "DrawableParticle.h"

void DrawableParticle::update(sf::RenderWindow &w) {
    move();
    setLoc(loc);
    display(w);
}

void DrawableParticle::setLoc(const Vector2D &_loc) {
    Particle::setLoc(_loc);
    Circle::setLoc(loc);
}