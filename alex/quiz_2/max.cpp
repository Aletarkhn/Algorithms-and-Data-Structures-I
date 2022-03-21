#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    std::vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int highest = 0;

    for (int a = 0; a < array.size(); a++){
        for (int b = a; b < array.size(); b++){
            int sum = 0;

            for (int k = a; k <= b; k++){
                sum = sum + array[k];
            }
            highest = std::max(highest, sum);
        }
    }

    std::cout << "Highest sum - " << highest << std::endl;

    return 0;
}
