#include <string>

class Motocikl {
public:
    Motocikl();

    std::string getProizvodac();
    std::string getModel();
    int getZapremnina();

    void setProizvodac(std::string proizvodac);
    void setModel(std::string model);
    void setZapremnina(int zapremnina);

private:
    std::string proizvodac;
    std::string model;
    int zapremnina;
};