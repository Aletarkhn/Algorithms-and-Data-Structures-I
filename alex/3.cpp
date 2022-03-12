#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string S = "a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p";

    cout << " " << S << endl;

    S.erase(remove(S.begin(), S.end(), 'a'), S.end());
    cout << " " << S;

    return 0;
}
