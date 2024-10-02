/*
Nick Spizzirri
9/30/24
CSC122
*/

#include<iostream>
#include<cassert>
#include"STTL.h"

int main(){
    int testArray1[]={1,2,3};
    int resultArray1[]={2,3,1};
    array_shift(testArray1,3,1);
    for(int i=0;i<3;i++){
        assert(testArray1[i]==resultArray1[i]);
    }
    int testArray2[]={1,2,3,4,5,6,7,8,9,0};
    int resultArray2[]={5,6,7,8,9,0,1,2,3,4};
    array_shift(testArray2,10,4);
    for(int i=0;i<10;i++){
        assert(testArray2[i]==resultArray2[i]);
    }
    int testArray3[]={1,2,3,4,5,6,7,8,9,0};
    int resultArray3[]={0,1,2,3,4,5,6,7,8,9};
    array_shift(testArray3,10,9);
    for(int i=0;i<10;i++){
        assert(testArray3[i]==resultArray3[i]);
    }
}