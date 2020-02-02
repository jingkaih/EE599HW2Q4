#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapByReferences, ShouldWork) {
  Solution solution;
  int a = 3, b = 6;
  solution.SwapByRef(a,b);

  EXPECT_EQ(6, a);
  EXPECT_EQ(3, b);
}  

TEST(SwapByPointers, ShouldWork) {
  Solution solution;
  int m = 5, n = 9;
  solution.SwapByPtr(&m,&n);
  EXPECT_EQ(9, m);
  EXPECT_EQ(5, n);
}  
