#include "my_mmu.h"
#include "my_process.h"
#include <fstream>
#include <gtest/gtest.h>
#include <iostream>
#include <string>

using namespace std;

TEST(MMU, InitMMU) {
  MMU mmu = MMU(65536, 256);
  EXPECT_EQ(mmu.get_page_size(), 256);
  EXPECT_EQ(mmu.get_free_pages_size(), 256);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
