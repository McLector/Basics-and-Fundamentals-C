#include <iostream>
using namespace std;

int main()
{
    int firstset[10], secondset[10], mergedArray[20];

    cout<<"First Array"<<endl;
    // Input elements for the first set
    for(int i = 0; i < 10; i++) {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> firstset[i];
    }

    cout<<"\nSecond Array"<<endl;
    // Input elements for the second set
    for(int j = 0; j < 10; j++) {
        cout << "Enter Number " << j + 11 << ": ";
        cin >> secondset[j];
    }

    // Merge the two sets into the mergedArray
    for (int i = 0; i < 10; i++) {
        mergedArray[i] = firstset[i];
        mergedArray[i + 10] = secondset[i];
    }

    // Sort the mergedArray in descending order
    for (int i = 0; i < 19; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (mergedArray[i] < mergedArray[j]) {
                // Swap elements to sort in descending order
                int temp = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray[j] = temp;
            }
        }
    }

    // Output the merged and sorted array
    cout << "Merged and sorted array in descending order:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << mergedArray[i] <<endl;

    }

    return 0;
}
