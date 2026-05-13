#include <gtest/gtest.h>
#include "periodic_table.h"

TEST(PeriodicTableTest, ContainsHydrogen) {
    PeriodicTable table("data/periodic_table.json");
    EXPECT_TRUE(table.contains("H"));
}

TEST(PeriodicTableTest, HydrogenMass) {
    PeriodicTable table("data/periodic_table.json");
    const Element& el = table.get("H");
    EXPECT_NEAR(el.atomic_mass, 1.008, 0.001);
}

TEST(PeriodicTableTest, DoesNotContainFakeElement) {
    PeriodicTable table("data/periodic_table.json");
    EXPECT_FALSE(table.contains("Xx"));
}
