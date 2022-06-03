#include "gtest/gtest.h"

#include "item.h"
#include "weapon.h"
#include "weapon.cpp"
#include "armor.h"
#include "armor.cpp"
#include "bag.h"
#include "bag.cpp"

#include "weapon_test.h"
#include "armor_test.h"
#include "bag_test.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

