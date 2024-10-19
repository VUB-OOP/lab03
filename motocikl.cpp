#include "motocikl.h"

Motocikl::Motocikl() : proizvodac(""), model(""), zapremnina(0) {}

std::string Motocikl::getProizvodac() {
    return proizvodac;
}

std::string Motocikl::getModel() {
    return model;
}

int Motocikl::getZapremnina() {
    return zapremnina;
}

void Motocikl::setProizvodac(std::string proizvodac) {
    this->proizvodac = proizvodac;
}

void Motocikl::setModel(std::string model) {
    this->model = model;
}

void Motocikl::setZapremnina(int zapremnina) { // zapremnina mora biti pozitivan broj i ne veći od 2000
    if (zapremnina <= 0 || zapremnina > 2000) {
        return;
    }
    this->zapremnina = zapremnina;
}