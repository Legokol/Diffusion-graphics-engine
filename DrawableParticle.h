#ifndef DIFFUSION_GRAPHICS_ENGINE_DRAWABLEPARTICLE_H
#define DIFFUSION_GRAPHICS_ENGINE_DRAWABLEPARTICLE_H

#include "Circle.h"
#include "particle.h"

class DrawableParticle: public Circle, public Particle {
public:
    void update(sf::RenderWindow &w);

    void setLoc(const Vector2D &_loc);
};


#endif //DIFFUSION_GRAPHICS_ENGINE_DRAWABLEPARTICLE_H
