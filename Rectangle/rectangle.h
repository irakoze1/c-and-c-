#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle
{
    public:
        rectangle();
        virtual ~rectangle();

        float Getlength() { return length; }
        void Setlength(float val) { length = val; }
        float Getwidth() { return width; }
        void Setwidth(float val) { width = val; }

    protected:

    private:
        float length;
        float width;
};

#endif // RECTANGLE_H
