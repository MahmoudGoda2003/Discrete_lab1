#include <bits/stdc++.h>
#include "../bits_applications.h"
using namespace std;


class BitAppScreen {

public:
    void display() {
        while(true) {
            system("cls");
            BitsApplications op;
            int num;
            int choice, pos;
            cout<<"\t\t\t\t Bits Manipulation"<<endl;
            cout<<"\n\t * Get unique number(Enter:1)"<<endl;
            cout<<"\n\t * Count ones(Enter:2)"<<endl;
            cout<<"\n\t * Go back(Enter:3)"<<endl;
            cout<<"\n\t Please enter number : ";
            cin >> choice;

            vector<int> nums;
            switch(choice) {
                case 1 :
                    int n, temp;
                    cout << "\n Enter the length of the input: ";
                    cin >> n;
                    cout << "\n Enter the numbers: ";
                    while(n--){
                        cin >> temp;
                        nums.push_back(temp);
                    }
                    cout << "\n Result: " << op.uniqueNumber(nums);
                    break;
                case 2 :
                    cout<<"\n\t Please the number : ";
                    cin >> num;
                    cout << "\n Result: " << op.countOnes(num);
                    break;
                default:
                    return;
            }
            
            cout << "\nWant to continue? (0, 1): ";
            cin >> choice;
            if(choice == 0)
                return;
        }
    }

};