#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str = "yellow";
    reverse(str.begin(), str.end());

    cout << str;

    return 0;
}
