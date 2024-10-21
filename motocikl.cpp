#include <iostream>
#include "motocikl.h"

// Defaultni konstruktor - koristi delegiranje konstruktora
Motocikl::Motocikl() : Motocikl("", "", 0) {}

// Dodatni konstruktori - koristi delegiranje konstruktora
Motocikl::Motocikl(std::string proizvodac, std::string model) : Motocikl(proizvodac, model, 0) {
}

// Dodatni konstruktor - ostali konstruktori delegiraju ovome konstruktoru
Motocikl::Motocikl(std::string proizvodac, std::string model, int zapremnina) {
    // konstruktor postavlja podatke kroz set metode jer se u njima vrši validacija
    setProizvodac(proizvodac);
    setModel(model);
    setZapremnina(zapremnina);
}

// Getteri
std::string Motocikl::getProizvodac() {
    return proizvodac;
}

std::string Motocikl::getModel() {
    return model;
}

int Motocikl::getZapremnina() {
    return zapremnina;
}

// Setteri
void Motocikl::setProizvodac(std::string proizvodac) {
    this->proizvodac = proizvodac;
}

void Motocikl::setModel(std::string model) {
    this->model = model;
}

void Motocikl::setZapremnina(int zapremnina) { // zapremnina mora biti pozitivan broj i ne veći od 2000
    if (zapremnina < 0 || zapremnina > 2000) {
        return;
    }
    this->zapremnina = zapremnina;
}

// Metode
void Motocikl::info() {
    std::cout << proizvodac << " ";
    std::cout << model << " (";
    std::cout << zapremnina << ")" << std::endl;
}