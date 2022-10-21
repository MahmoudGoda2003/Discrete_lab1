#include "../src/bits_applications.h"
#include <gtest/gtest.h>


TEST(uniqueNumber, test_unique_number) {
    //create BitApplication object
    BitsApplications application ;

    //create vector contain 2 repeated 100 time and 1 repeated 1 time
    vector <int> test_sample(101,2);
    test_sample[0]=1;

    // every loop increase number of 1 by one and decease number of zeros
    for (int index = 1; index <test_sample.size() ; ++index) {
        ASSERT_EQ(application.uniqueNumber(test_sample), index%2? 1:2 );
        test_sample[index]=1;
    }

}

TEST(countOnes, test_count_ones) {
    //create BitApplication object
    BitsApplications application ;

    unsigned int test_sample = UINT32_MAX;

    //every loop make one bit in test_sample zero and then count number of ones
    for (int index = 32; index >=0 ; --index) {
        ASSERT_EQ(application.countOnes(test_sample), index);
        test_sample = test_sample & ~(1 << index);
    }

}
