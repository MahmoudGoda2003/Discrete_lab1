#include "../src/set_operations.h"
#include <gtest/gtest.h>


vector<string> universe ={"1","2","3","4","5","6","7","9","8"};
vector<vector<string>> subsets={{"1","2","4"},{"2","4","1"},{"6","7","8"},{"5","6","9"},{"1","2","3","4","5","6","7","9","8"},{"1","2","3","4"},{"1","9"}};

TEST(setComplement, test_set_complement) {
    //create SetOperations object
    SetOperations operation(universe,subsets);

    vector<string> answer={"3","5","6","7","8","9"};
    ASSERT_EQ(operation.setComplement(0), answer);

    answer={"5","6","7","8","9"};
    ASSERT_EQ(operation.setComplement(5), answer);

    answer={};
    ASSERT_EQ(operation.setComplement(4), answer);

    answer={"1","2","3","4","5","9"};
    ASSERT_EQ(operation.setComplement(2), answer);

    answer={"1","2","3","4","7","8"};
    ASSERT_EQ(operation.setComplement(3), answer);

}

TEST(setsUnion, test_sets_union) {
    //create SetOperations object
    SetOperations operation(universe,subsets);

    vector<string> answer={"1","2","4"};
    ASSERT_EQ(operation.setsUnion(0,1), answer);

    answer={"5","6","7","8","9"};
    ASSERT_EQ(operation.setsUnion(2,3), answer);

    answer={"1","2","3","4","9"};
    ASSERT_EQ(operation.setsUnion(5,6), answer);

    answer={"1","2","3","4","5","6","7","8","9"};
    ASSERT_EQ(operation.setsUnion(4,0), answer);

    answer={"1","2","4","9"};
    ASSERT_EQ(operation.setsUnion(0,6), answer);

}

TEST(setsIntersection, test_sets_intersection) {
    //create SetOperations object
    SetOperations operation(universe,subsets);

    vector<string> answer={"1","2","4"};
    ASSERT_EQ(operation.setsIntersection(0,1), answer);

    answer={"6"};
    ASSERT_EQ(operation.setsIntersection(2,3), answer);

    answer={};
    ASSERT_EQ(operation.setsIntersection(3,0), answer);

    answer={"1","2","4"};
    ASSERT_EQ(operation.setsIntersection(4,0), answer);

    answer={"1","9"};
    ASSERT_EQ(operation.setsIntersection(4,6), answer);

}
