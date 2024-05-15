#include <iostream>
#include <vector>

using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Elements of array";
    for (int i = 0; i < 5; ++i){
        cout << " " << arr[i];
    }
    cout << endl;

}