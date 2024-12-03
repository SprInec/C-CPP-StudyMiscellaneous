/**
 * @brief 双指针法 (快慢指针法)
 * 
 * @param nums 
 * @param numsSize 
 * @param val 
 * @return int 
 */
int removeElement(int* nums, int numsSize, int val) {
    int slowIndex = 0;
    for (int fastIndex = 0; fastIndex < numsSize; fastIndex++) {
        if (val != nums[fastIndex]) {
            nums[slowIndex++] = nums[fastIndex];
        }
    }
    return slowIndex;
}

int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == val) {
            for (int j = i + 1; j < numsSize; j++) {
                nums[j - 1] = nums[j];
            }
            i--;
            numsSize--;
        }
    }
    return numsSize;
}
