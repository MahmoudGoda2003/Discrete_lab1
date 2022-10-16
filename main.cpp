#include <iostream>
#include "bit_operations.h"
#include "bits _applications.h"
#include "set_operations.h"

int main() {
    // BitsApplications appliction;
    // cout<<appliction.countOnes(7);
    setOperations op;
    op.setUniverse();
    for(int i=0;i<2;i++)
        op.setSubsets();

    vector<string> res = op.setsUnion(0, 1);

    for(auto & re : res){
        cout << re << " ";
    }
    return 0;
}
