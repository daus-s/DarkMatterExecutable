class particle
{
    public:
        int x;
        int y;
        vector2 v;
        vector2 a;
        int m;

        vector2 force(int x, int y);
        void updatePosition();

        particle();
        ~particle();
        particle(int x, int y, vector2 v, vector2 a, int m);

};
