#include <iostream>

int main() {

  int temperature_c;
  int temperature_f;
  float temperature_k;

  std::cout << "What is the current temperature in Celsius?: ";
  std::cin >> temperature_c;

  temperature_f = (temperature_c * 9 / 5) + 32;
  temperature_k = (temperature_c + 273.15);

  std::cout << "Temperature in celsius is: " << temperature_c << "\n";
  std::cout << "Temperature in fahrenheit is: " << temperature_f << "\n";
  std::cout << "Temperature in Kelvin is: " << temperature_k;
}
