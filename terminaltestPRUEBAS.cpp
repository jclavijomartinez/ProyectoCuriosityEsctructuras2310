#include <iostream>
#include <string>

void printPrompt() {
  std::cout << "$ ";
}

int main() {
  std::string input;
  while (true) {
    printPrompt();
    std::getline(std::cin, input);
    if (input == "exit") {
      break;
    }
    if (input == "ayuda") {
      std::cout<<"Bienvenido al controlador! en esta seccion puedes encontrar todas las funciones, proximamente"
      break;
    }
  }
  return 0;
}