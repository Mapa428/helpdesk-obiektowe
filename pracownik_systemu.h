#pragma once

#include <string>

class Zgloszenie;

class PracownikSystemu {
public:
  int getId() const;
  std::string getImie() const;
  std::string getNazwisko() const;
  std::string getEmail() const;

  virtual std::string getRola() const = 0;
  bool czyMozeZmienicStatus(const Zgloszenie& zgloszenie) const = 0;

protected:
  PracownikSystemu(int id, const std::string& imie,
                   const std::string& nazwisko, const std::string& email);
  ~PracownikSystemu();

private:
  int id;
  std::string imie;
  std::string nazwisko;
  std::string email;
};
