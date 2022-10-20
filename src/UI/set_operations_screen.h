#include <bits/stdc++.h>
#include "../set_operations.h"
using namespace std;


class SetsScreen {

public:
    void display() {
        bool uni = false;
        SetOperations op;
        while(true) {
            if(!uni){
                uni = true;
                cout<<"\n\t Please enter the universe(space separated strings): ";
                vector<string> universe;
                string temp;
                cin.clear();
                fflush(stdin);
                while(cin.peek() != '\n'){
                    cin >> temp;
                    universe.push_back(temp);
                }      

                cout<<"\n\t Please enter the number of subsets to be entered: ";
                int n;
                cin >> n;
                vector<vector<string>> subsets;
                for(int i=0;i<n;i++){
                    cout<<"\n\t Please enter subset number "<< i <<" (space separated strings): ";
                    vector<string> sub;
                    cin.clear();
                    fflush(stdin);
                    while(cin.peek() != '\n'){
                        cin >> temp;
                        sub.push_back(temp);
                    }
                    subsets.push_back(sub);
                }

                op.setOperations(universe, subsets);
            }

            int choice;
            cout<<"\t\t\t\t Set Operations"<<endl;
            cout<<"\n\t * Set Complement(Enter:1)"<<endl;
            cout<<"\n\t * Sets Union(Enter:2)"<<endl;
            cout<<"\n\t * Sets Intersection(Enter:3)"<<endl;
            cout<<"\n\t * Go back(Enter:4)"<<endl;
            cout<<"\n\t Please enter number : ";
            cin >> choice;

            
            
            int index1, index2;
            switch(choice) {
                case 1 :
                    cout<<"\n\t Please enter the number of the subset to be operated on: ";
                    cin >> index1;
                    for(auto elem : op.setComplement(index1))
                        cout << elem << " ";
                    cout << endl;
                    break;
                case 2 :
                    cout<<"\n\t Please enter the number of the two subset to be operated on: ";
                    cin >> index1 >> index2;
                    for(auto elem : op.setsUnion(index1, index2))
                        cout << elem << " ";
                    cout << endl;
                    break;
                case 3 :
                    cout<<"\n\t Please enter the number of the two subset to be operated on: ";
                    cin >> index1 >> index2;
                    for(auto elem : op.setsIntersection(index1, index2))
                        cout << elem << " ";
                    cout << endl;
                    break;
                default :
                    return;
                
            }
            
            cout << "\nWant to continue? (0, 1): ";
            cin >> choice;
            if(choice == 0)
                return;
        }
    }

};