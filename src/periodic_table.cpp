#include "periodic_table.h"
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

PeriodicTable::PeriodicTable(const std::string &json_path) {
  std::ifstream file(json_path);
  nlohmann::json data = nlohmann::json::parse(file);

  for (const auto &el : data["elements"]) {
    Element element;
    element.number = el["number"];
    element.name = el["name"];
    element.symbol = el["symbol"];
    element.atomic_mass = el["atomic_mass"];

    elements_[element.symbol] = element;
  }
}

bool PeriodicTable::contains(const std::string &symbol) const {
  return elements_.count(symbol) > 0;
}

const Element &PeriodicTable::get(const std::string &symbol) const {
  return elements_.at(symbol);
}
