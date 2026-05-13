#ifndef PERIODIC_TABLE_H
#define PERIODIC_TABLE_H

#include <string>
#include <unordered_map>

struct Element {
  int number;
  std::string name;
  std::string symbol;
  double atomic_mass;
}; // struct for an element parsing

class PeriodicTable {
public:
  PeriodicTable(const std::string &json_path);

  const Element &get(const std::string &symbol) const;
  bool contains(const std::string &symbol) const;

private:
  std::unordered_map<std::string, Element> elements_;
};

#endif
