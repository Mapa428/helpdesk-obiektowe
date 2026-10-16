#pragma once

#include <string>

enum class Priorytet {
  NISKI,
  SREDNI,
  WYSOKI,
  KRYTYCZNY,
};

std::string priorytetNaTekst(Priorytet priorytet);
