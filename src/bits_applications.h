#include <bits/stdc++.h>
using namespace std;


class BitsApplications {
public:
    int uniqueNumber(vector <int> nums) {
        int num = nums[0];
        for (int index = 1; index < nums.size(); index++) {
            num = num ^ nums[index];
        }
        return num;
    }

    int countOnes(unsigned int num){
        int num_of_ones = 0;
        while (num != 0){
            num_of_ones++;
            num = num & (num - 1);
        }
        return num_of_ones;
    }
};