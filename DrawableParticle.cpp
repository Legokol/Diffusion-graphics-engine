#include "DrawableParticle.h"

DrawableParticle::DrawableParticle(double m, double r, double *_x, double *_v) : Particle(m, r, _x, _v),
                                                                                 Circle(Vector2D(_x[0], _x[1]), r) {}


void DrawableParticle::update(double dt, sf::RenderWindow &w) {
    move(dt);
    setLoc(loc);
    display(w);
}

void DrawableParticle::setLoc(const Vector2D &_loc) {
    Particle::setLoc(_loc);
    Circle::setLoc(loc);
}