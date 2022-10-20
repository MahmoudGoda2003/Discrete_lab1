#include <bits/stdc++.h>
#include<Windows.h>
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
                case 1 : return;
                case 2 : return;
                case 3 : return;
                case 4 : return;
            }
        }
    }

};