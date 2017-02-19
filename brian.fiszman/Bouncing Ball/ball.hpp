#include <SFML/Graphics.hpp>
#include "resolution.hpp"
#ifndef BALL_H
#define BALL_H

using namespace sf;

class Ball: public CircleShape
{
    typedef CircleShape Super;
    private:
        float speedX;
        float speedY;    

    public:
        Ball();
        explicit Ball(float size);
        float getSpeedX();
        float getSpeedY();
        void setSpeedX(float speedX);
        void setSpeedY(float speedY);
        bool hasCollidedOnX(Resolution resolution);
        bool hasCollidedOnY(RectangleShape shp, Resolution resolution);
};

#endif
