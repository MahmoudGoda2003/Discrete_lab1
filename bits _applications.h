#include <bits/stdc++.h>
using namespace std;


class BitsApplications {
public:
    int uniqueNumber(vector <int> nums) {
        int num = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            num = num ^ nums[i];
        }
        return num;
    }

    int countOnes(int num){
        int result = 0;
        while (num != 0){
            result++;
            num = num & (num - 1);
        }
        return result;
    }
};