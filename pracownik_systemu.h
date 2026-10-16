#pragma once

#include <string>

class Zgloszenie;

class PracownikSystemu {
public:
  int getId();
  std::string getImie();
  std::string getNazwisko();
  std::string getEmail();

  virtual std::string getRola()  = 0;
  bool czyMozeZmienicStatus( Zgloszenie& zgloszenie)  = 0;

protected:
  PracownikSystemu(int id,  std::string& imie,
                    std::string& nazwisko,  std::string& email);
  ~PracownikSystemu();

private:
  int id;
  std::string imie;
  std::string nazwisko;
  std::string email;
};
