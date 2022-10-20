#include <bits/stdc++.h>
using namespace std;


class setOperations{
private:
    vector<string> universe;
    vector<long long> subsets;

    int binarySearch(const string& item) {
       int l = 0, r = universe.size();
        while (l <= r) {
            int mid = (l + r)/2;
            if (universe[mid] == item)
                return mid;
            else if (universe[mid] > item)
                r = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }

    vector<string> intToStrings(long long sub){
        int index = 0;
        vector<string> res;
        while(sub && index<universe.size()){
            if(sub%2)
                res.push_back(universe[index]);
            index++;
            sub >>= 1;
        }
        return res;
    }

    long long setBit (long long number, int position) {
        return number | (1 << position);
    }

public:
    setOperations(vector<string> universe, vector<vector<string>> subsets){
        sort(universe.begin(), universe.end());
        this->universe = universe;
        for (auto & subset : subsets) {
            long long bin_subset =0;
            for (auto & element : subset) {
                bin_subset = setBit(bin_subset, binarySearch(element));
            }
            this->subsets.push_back(bin_subset);
        }
    }
   /** void setUniverse(){
        string temp;
        while(cin.peek() != '\n'){
            cin >> temp;
            universe.push_back(temp);
        }
        sort(universe.begin(), universe.end());
    }
    **/
    /**
    void setSubsets(){
        string temp;
        long long res = 0;
        cin.clear();
        fflush(stdin);
        while(cin.peek() != '\n'){
            cin >> temp;
            res = setBit(res, binarySearch(temp));
        }
        subsets.push_back(res);
    }
**/
    vector<vector<string>> getSubsets() {
        vector<vector<string>> string_subsets;
        for(auto &bin_subset: subsets){
            vector<string> subset = intToStrings(bin_subset);
            string_subsets.push_back(subset);
        }
        return string_subsets;
    }

    vector<string> getUniverse(){
        return universe;
    }

    vector<string> setComplement(int set){

        return intToStrings(~subsets[set]);
    }

    vector<string> setsUnion(int set1, int set2){

        return intToStrings(subsets[set1] | subsets[set2]);
    }

    vector<string> setsIntersection(int set1, int set2){

        return intToStrings(subsets[set1] & subsets[set2]);
    }


};