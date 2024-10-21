#include <string>

class Motocikl {
public:
    // Defaultni konstruktor
    Motocikl();
    // Dodatni konstruktori
    Motocikl(std::string proizvodac, std::string model);
    Motocikl(std::string proizvodac, std::string model, int zapremnina);

    // Getteri
    std::string getProizvodac();
    std::string getModel();
    int getZapremnina();

    // Setteri
    void setProizvodac(std::string proizvodac);
    void setModel(std::string model);
    void setZapremnina(int zapremnina);

    // Metode
    void info();

private:
    std::string proizvodac;
    std::string model;
    int zapremnina;
};