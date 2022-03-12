#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str = "yellow blue green";
    reverse(str.begin(), str.end());

    cout << str;

    return 0;
}
