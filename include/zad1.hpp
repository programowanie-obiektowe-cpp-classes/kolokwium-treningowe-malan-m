#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
public:
    virtual ~Makaron()                      = default;
    virtual double  ileMaki(unsigned) const = 0;
    static Makaron* gotujMakaron(const std::string& s);
};

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle : public Makaron
{
    double              L, W, R;
    static const double C;

public:
    Tagliatelle() : L{.5}, W{.5}, R{.5} {}                                      //konstruktor domyslny
    Tagliatelle(double a, double b, double c) : L{a}, W{b}, R{c} {}             //konstruktor 
    double ileMaki(unsigned P) const { return static_cast< double >(P) * L * W * (1. - R) * C; }
};