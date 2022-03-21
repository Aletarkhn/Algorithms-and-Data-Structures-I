#include <stdio.h>

void findPair(int nums[], int n, int target){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (nums[i] + nums[j] == target){
                printf("Pairs are - (%d, %d)\n", nums[i], nums[j]);
                return;
            }
        }
    }

    printf("Pair not found");
}

int main(void){
    int nums[] = { 2, 7, 11, 5, 15};
    int target = 9;

    int n = sizeof(nums)/sizeof(nums[0]);

    findPair(nums, n, target);

    return 0;
}
