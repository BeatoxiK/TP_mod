#ifndef POINT_HPP
#define POINT_HPP
using namespace std;

class Point
{
    public:
        virtual void afficher(ostream&) const = 0;
    
};

class Cartesien: public Point
{
    private:
        double x;
        double y;
    
    public:
        Cartesien(double x1 = 0, double y1 = 0);

        void setX(double newX);
        void setY(double newY);
        
        double getX() const;
        double getY() const;

        virtual void afficher(ostream&) const;

};

class Polaire: public Point
{
    private:
        double theta;
        double r;

    public:
        Polaire(double theta1=0, double r1=0);

        void setAngle(double newR);
        void setDistance(double newT);

        virtual void afficher(ostream&) const;

        double getDistance() const;
        double getAngle() const;
};

//ostream & operator<< (ostream flux, const Point & p);

#endif

