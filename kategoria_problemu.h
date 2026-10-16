#pragma once

#include <string>

class KategoriaProblemu {
public:
  KategoriaProblemu(int id, std::string& nazwa, std::string& opis);

  int getId();
  std::string getNazwa();
  std::string getOpis();

private:
  int id;
  std::string nazwa;
  std::string opis;
};
