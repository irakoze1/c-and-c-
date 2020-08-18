#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        virtual ~Point();

        int Getabscisse() { return abscisse; }
        void Setabscisse(int val) { abscisse = val; }
        int Getordinate() { return ordinate; }
        void Setordinate(int val) { ordinate = val; }
        Point(int,int);
        void Display();
        Point Move(int);
        Point Homotetie(int);
        double Distance(Point());
    protected:

    private:
        int abscisse;
        int ordinate;
};

#endif // POINT_H
