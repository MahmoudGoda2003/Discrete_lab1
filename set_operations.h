#include <bits/stdc++.h>
using namespace std;


class setOperations{
private:
    vector<string> universe;
    vector<vector<int>> subsets;
    string setsNames = "";

    // bool myCmp(string s1, string s2){
    //     if (s1.size() == s2.size()){
    //         return s1 < s2;
    //     }else{
    //         return s1.size() < s2.size();
    //     }
    // }
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
        vector<int> res(universe.size(), 0);
        cin.clear();
        fflush(stdin);
        while(cin.peek() != '\n'){
            cin >> temp;
            res[binarySearch(universe, 0, universe.size(), temp)] = 1;
        }
        subsets.push_back(res);
    }

    void getSubets(){
        for(int i=0;i<subsets.size();i++){
            vector<int> curr = subsets[i];
            for(int j=0;j<curr.size();j++){
                cout << curr[j];
            }
            cout << endl;
        }
    }
    void getUniverse(){
        for(int i=0;i<universe.size();i++){
            cout << universe[i] << " ";
        }
        cout << endl;
    }

    vector<string> setComplement(int set){
        vector<string> res;
        for(int i=0;i<universe.size();i++){
            if(!subsets[set][i])
                res.push_back(universe[i]);
        }
        return res;
    }

    vector<string> setsUnion(int set1, int set2){
        vector<string> res;
        for(int i=0;i<universe.size();i++){
            if(subsets[set1][i] == 1 || subsets[set2][i] == 1)
                res.push_back(universe[i]);
        }
        return res;
    }

    vector<string> setsIntersection(int set1, int set2){
        vector<string> res;
        for(int i=0;i<universe.size();i++){
            if(subsets[set1][i] && subsets[set2][i])
                res.push_back(universe[i]);
        }
        return res;
    }

    
};