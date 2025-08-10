/*
Array is Data structutre in which we can only set the same type of value 
*/

/* 
intialization of array --> int marks [5] = {1,2,3,4,5};
or
int marks [5] = 
*/


#include<iostream>
using namespace std;

void array1 (){

    int marks [5] = {1,2,3,4,5};
    cout << "Array before update:" << endl;
    for(int i = 0; i<5; i++){
        cout<<marks[i]<<endl;
    }

    marks[4] = 100; // Update operation

    cout << "\nArray after update:" << endl;
    for(int i = 0; i<5; i++){
        cout<<marks[i]<<endl;
    }
}

int main(){
    array1();
}
