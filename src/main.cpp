#include "periodic_table.h"
#include <iostream>
int main() {
  PeriodicTable table("data/periodic_table.json");

  if (table.contains("H")) { //Test case to see if parsing works
    const Element &el = table.get("H");
    std::cout << el.name << ": " << el.atomic_mass << "\n";
  }
  return 0;
}
