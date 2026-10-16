#pragma once

#include <string>

class Komentarz {
public:
  Komentarz( std::string tresc,std::string autor, std::string data);

  std::string getTresc();
  std::string getAutor();
  std::string getData();

private:
  std::string tresc_;
  std::string autor_;
  std::string data_;
};
