#include <bits/stdc++.h>
using namespace std;


class setOperations{
private:
    vector<string> universe;
    vector<long long> subsets;

    int binarySearch(vector<string>& uni, int l, int r, string item) {
        while (l <= r) {
            int mid = (l + r)/2;
            if (uni[mid] == item)
                return mid;
            else if (uni[mid] > item)
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

    int setBit (long long number, int position) {
        return (number | (1 << position));
    }

public:
    void setUniverse(){
        string temp;
        while(cin.peek() != '\n'){
            cin >> temp;
            universe.push_back(temp);
        }
        sort(universe.begin(), universe.end());
    }

    void setSubsets(){
        string temp;
        long long res = 0;
        cin.clear();
        fflush(stdin);
        while(cin.peek() != '\n'){
            cin >> temp;
            res = setBit(res, binarySearch(universe, 0, universe.size(), temp));
        }
        subsets.push_back(res);
    }

    void getSubsets(){
        for(int index=0; index < subsets.size();index++){
            cout << subsets[index] << endl;
        }
    }

    void getUniverse(){
        for(int index=0; index < universe.size(); index++){
            cout << universe[index] << " ";
        }
        cout << endl;
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