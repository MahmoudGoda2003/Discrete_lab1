#include "../src/bit_operations.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>


TEST(getBit, test_get_bit) {
 //create BitOperations object
    BitOperations operation;

 //check getting all bits in zero
    int test_sample = 0;
    for (int index = 0; index < 31; ++index) {
        ASSERT_EQ(operation.getBit(test_sample,index), 0);
    }

 // check getting bits of 5
    test_sample = 5; // binary representation 101
    ASSERT_EQ(operation.getBit(test_sample,0), 1);
    ASSERT_EQ(operation.getBit(test_sample,1), 0);
    ASSERT_EQ(operation.getBit(test_sample,2), 1);

 //check getting all bits in the biggest integer (2147483647)
    test_sample = INT32_MAX;
    for (int index = 0; index < 31; ++index) {
        ASSERT_EQ(operation.getBit(test_sample,index), 1);
    }
}

TEST(setBit, test_set_bit) {
    //create BitOperations object
    BitOperations operation;

    //check setting all bits in zero to be ones
    int test_sample = 0;
    for (int index = 0; index < 31; ++index) {
        test_sample = operation.setBit(test_sample,index);
        ASSERT_EQ(test_sample, pow(2,index+1)-1);
    }

    //check setting all bits in the biggest integer(2147483647) to be ones
    for (int index = 0; index < 31; ++index) {
        ASSERT_EQ(operation.setBit(INT32_MAX,index), INT32_MAX);
    }

}

TEST(clearBit, test_clear_bit) {
    //create BitOperations object
    BitOperations operation;

    //check setting all bits in zero to be zeros
    for (int index = 0; index < 31; ++index) {
        ASSERT_EQ(operation.clearBit(0,index), 0);
    }

    //check setting all bits in the biggest integer(2147483647) to be zero
    int test_sample = INT32_MAX;
    for (int index = 31; index >= 0; index--) {
        test_sample = operation.clearBit(test_sample,index);
        ASSERT_EQ(test_sample, pow(2,index)-1);
    }

}

TEST(updateBit, test_update_bit) {
    //create BitOperations object
    BitOperations operation;

    //check updating all bits in zero to be ones
    int test_sample = 0;
    for (int index = 0; index < 31; ++index) {
        test_sample = operation.updateBit(test_sample,index, true);
        ASSERT_EQ(test_sample, pow(2,index+1)-1);
    }

    //check updating all bits in the biggest integer(2147483647) to be ones
    for (int index = 0; index < 31; ++index) {
        ASSERT_EQ(operation.updateBit(INT32_MAX,index, true), INT32_MAX);
    }

    //check updating all bits in zero to be zeros
    for (int index = 0; index < 31; ++index) {
        ASSERT_EQ(operation.updateBit(0,index, false), 0);
    }

    //check updating all bits in the biggest integer(2147483647) to be zero
    test_sample = INT32_MAX;
    for (int index = 31; index >= 0; index--) {
        test_sample = operation.updateBit(test_sample,index, false);
        ASSERT_EQ(test_sample, pow(2,index)-1);
    }

}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
