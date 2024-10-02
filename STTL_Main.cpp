/*
Nick Spizzirri
9/30/24
CSC122
*/

#include<iostream>
#include"STTL.h"

int main(){
    int size;
    int slides;
    cout << "Welcome to the fancy array sliding program.\n\nPlease enter your desired array size.\n"<<endl;
    cin >> size;
    int arr1[size];
    cout <<"\nNext, enter each int value in the array.\n"<<endl;
    for(int i=0;i<size;i++){
        cin >> arr1[i];
    }
    cout <<"\nHow many slides to the left would you like?\n"<<endl;
    cin >> slides;
    array_shift(arr1, size, slides);
    cout <<"SLIIIIDE TO THE LEFT!!\n-------------"<<endl;
    for(int i=0; i<size;i++){
    cout <<"\n" << arr1[i] << endl;
}
    return 0;
}