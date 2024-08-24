#include <iostream>
using namespace std;

int main () {
    int numArr1 [10];
    int numArr2 [10];
    int allnum [20];

    //input 10 numbers
    for (int i = 0; i < 10; i++) {
        cout << "Input element " << i << " for Set 1: ";
        cin >> numArr1 [i];
    }
    cout << endl;

    for (int j = 0; j < 10; j++) {
        cout << "Input element " << j << " for Set 2: ";
        cin >> numArr2 [j];
    }
    cout << endl;

    //combine into 1 array
    for (int i = 0; i < 10; i++) {
        allnum[i] = numArr1[i];
    }
    for (int i = 0; i < 10; i++) {
        allnum[10 + i] = numArr2[i];
    }
   
    //arrange the 10 numbers in descending order
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - 1; j++) {
            if (allnum[j] < allnum[j + 1]) { 
                int temp;
                
                temp = allnum[j];
                allnum[j] = allnum[j + 1];
                allnum[j + 1] = temp;
            }
        }
    }

    cout << "In descending order: ";
    for (int i = 0; i < 20; i++) {
        cout << allnum[i] << " ";
    }
       
    return 0;
}