#include "../src/set_operations.h"
#include <gtest/gtest.h>


vector<string> universe ={"1","2","3","4","5","6","7","9","8"};
vector<vector<string>> subsets={{"1","2","4"},{"2","4","1"},{"6","7","8"},{"5","6","9"},{"1","2","3","4","5","6","7","9","8"},{"1","2","3","4"},{"1","9"}};

TEST(setComplement, test_set_complement) {
    //create SetOperations object
    SetOperations operation(universe,subsets);

}
