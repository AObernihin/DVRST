using namespace std;
#include <iostream>

int main()
{
    const int size = 5;
    int arr1[size]{ 1,2,3,4,5 }; 
    int arr2[size];
    int* parr1 = arr1, *parr2 = arr2;
    for (int i = 0; i < size; i++) 
    {
        *(parr2 + i) = *(parr1 + i);
    }
    //===================//
    for (int i = size - 1; i != -1; i--)
    {
        cout << *(parr2 + i) << " ";
    }
    cout << endl;
    //====================//
    int orig[size]{ 1,2,3,4,5 };
    int copy[size];
    int* pcopy = copy, *porig = orig;
    for (int i = 0; i < size; i++) 
    {
        *(pcopy + i) = *(porig + size - i - 1);
    }
    
}

