#include <bits/stdc++.h>
#include "bit_operations_screen.h"
#include "bits_applications_screen.h"
#include "set_operations_screen.h"

using namespace std;


class MainScreen {

public:
    void display() {
        while(true) {
            system("cls");
            cout<<"\t\t\t\t Bits Manipulation"<<endl;
            cout<<"\n\t * Basic Bit Operations(Enter:1)"<<endl;
            cout<<"\n\t * Sets Operations(Enter:2)"<<endl;
            cout<<"\n\t * Applications (Enter:3)"<<endl;
            cout<<"\n\t * Exit(Enter:4)"<<endl;
            cout<<"\n\t Please enter number : ";
            int operation;
            cin>>operation;

            switch(operation) {
                case 1 :
                    BitOpScreen bitop;
                    bitop.display();
                    break;
                case 2 :
                    SetsScreen setop;
                    setop.display();
                    break;
                case 3 :
                    BitAppScreen bitapp;
                    bitapp.display();
                    break;
                case 4 : return;
            }
        }
    }

};