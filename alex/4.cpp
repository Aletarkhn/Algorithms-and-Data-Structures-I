#include <iostream>
using namespace std;

int main(){
    int i, n;
    float arr[1000];

    cout << " enter number from 1 to 1000: ";
    cin >> n;
    cout << endl;

    for(i = 0; i < n; ++i){
        cout << "number: " << i +1 << " : ";
        cin >> arr[i];
    }

    for(i = 1; i < n; ++i){

        if(arr[0] < arr[i])
            arr[0] = arr[i];
    }

    cout << endl << " largest element: " <<arr[0];

    return 0;
}
