#pragma once

#include <string>

#include "pracownik_systemu.h"

class Administrator : public PracownikSystemu {
public:
  Administrator(int id, std::string imie, std::string nazwisko, std::string email);
  std::string getRola();
  bool czyMozeZmienicStatus(Zgloszenie zgloszenie);
};
