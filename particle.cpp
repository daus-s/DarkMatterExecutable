#include <iostream>
#include "particle.h"

//field variables
int x;
int y;
vector2 v;
vector2 a;
int m;

vector2 particle::force(int x, int y)
{
    double forceX = 0.0;
    double forceY = 0.0;
    for (int i; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            double hyp = (x-i)*(x-i) + (y-j)*(y-j);
            double force = grid[i][j].m * grid[y][x].m/();
            forceX += force * (x-i)/sqrt((x-i)*(x-i) + (y-j)*(y-j));
            forceY += force * (y-j)/sqrt((x-i)*(x-i) + (y-j)*(y-j))
        }
    }

    return new vector2(forceX, forceY);
}
void particle::updatePosition()
{
    this.x = (int)(this.x + this.v.x + (this.a.x/2)%SIZE);
    this.y = (int)(this.y + this.y.x + (this.a.y/2)%SIZE);
}
//lol this throws exceptions
particle()
{
    x = -1;
    y = -1;
    *v = new vector2(SIZE, 0);
    *a = new vector2(2*SIZE, 0);
    m = 0;
}

particle(int x, int y, vector2 v, vector2 a, int m)
{
    this.x = x;
    this.y = y;
    this.*v = new vector2(v);
    this.*a = new vector2(a);
    this.m = m;
}
