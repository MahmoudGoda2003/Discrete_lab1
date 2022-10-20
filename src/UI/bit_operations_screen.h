#include <bits/stdc++.h>
#include "../bit_operations.h"
using namespace std;


class BitOpScreen {

public:
    void display() {
        while(true) {
            system("cls");
            BitOperations op;
            int num;
            int choice, pos;
            cout<<"\t\t\t\t Bits Operations"<<endl;
            cout<<"\n\t * Set a bit(Enter:1)"<<endl;
            cout<<"\n\t * Get a bit(Enter:2)"<<endl;
            cout<<"\n\t * Clear a bit(Enter:3)"<<endl;
            cout<<"\n\t * Update a bit(Enter:4)"<<endl;
            cout<<"\n\t * Go back(Enter:5)"<<endl;
            cout<<"\n\t Please enter number : ";
            cin >> choice;

            cout<<"\n\t Please the number you want to operate on : ";
            cin >> num;
            cout<<"\n\t Please the position of the bit you want to operate on : ";
            cin >> pos;


            switch(choice) {
                case 1 :
                    cout << "\n Result: " << op.setBit(num, pos);
                    break;
                case 2 :
                    cout << "\n Result: " << op.getBit(num, pos);
                    break;
                case 3 :
                    cout << "\n Result: " << op.clearBit(num, pos);
                    break;
                case 4 :
                    bool up;
                    cout<<"\n\t Please enter how you want to update it (0, 1) : ";
                    cin>>up;
                    cout << "\n Result: " << op.updateBit(num, pos, up);
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