#include <iostream>
#include "motocikl.h"

int main() {
  Motocikl motor1;
  motor1.setProizvodac("Yamaha");
  motor1.setModel("FZ6");
  motor1.setZapremnina(600);
  motor1.info();

  Motocikl motor2("Honda", "CBR600RR");
  motor2.info();

  Motocikl motor3("Suzuki", "GSX-R1000", 1000);
  motor3.info();
}
