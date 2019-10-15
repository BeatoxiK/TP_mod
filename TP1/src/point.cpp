#include <iostream>
#include "point.hpp"


// Constructeur de Cartesien
Cartesien::Cartesien(double x1, double y1): x(x1), y(y1)
{
    cout << "Il est fou Afflelou" << endl;
}

//Constructeur de Polaire
Polaire::Polaire(double theta1, double r1): theta(theta1), r(r1)
{
    cout << "Fraicheur de vivre" << endl;
}

// Methodes de Cartesien
void Cartesien::setX(double newX){
    this->x = newX;
}
void Cartesien::setY(double newY){
    this->y = newY;
}
void Cartesien::afficher(ostream& flux) const {
    flux << "(x=" << this->getX() << ";y=" << this->getY() << ")";
}
double Cartesien::getX() const {
    return x;
}
double Cartesien::getY() const {
    return y;
}

// Methodes de Polaire
void Polaire::setDistance(double newR){
    this->r = newR;
}
void Polaire::setAngle(double newT){
    this->theta = newT;
}
void Polaire::afficher(ostream& flux) const {
    flux << "(a=" << this->getAngle() << ";d=" << this->getDistance() << ")";
}
double Polaire::getDistance() const {
    return r;
}
double Polaire::getAngle() const {
    return theta;
}

// surcharger les operateurs vers les flux
ostream & operator<< (ostream flux, const Point & p)
{
    p->afficher(flux);
    return flux;
}

/*
ostream & operator<<(ostream & o, const Point & p)
{
    o << "(" << endl;
    return o;
}

istream & operator>>(istream & i, const Point & affichage)
{
    i >> affichage
    return o;
}*/