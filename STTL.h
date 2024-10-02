/*
Nick Spizzirri
9/30/24
CSC122
*/

#include<iostream>
using namespace std;

void array_shift(int arr1[], int size, int rota){
for(int i=0; i < rota;i++){
    int store = arr1[0];
for(int i=0; i<size-1;i++){
    arr1[i]=arr1[i+1];
}
arr1[size-1]=store;
}
}