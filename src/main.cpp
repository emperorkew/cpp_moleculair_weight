#include "periodic_table.h"
#include <iostream>
int main() {
  PeriodicTable table("data/periodic_table.json");

  if (table.contains("H")) {
    const Element &el = table.get("H");
    std::cout << el.name << ": " << el.atomic_mass << "\n";
  }
  return 0;
}
