/**
 * @brief 二分查找 [left, right]
 * 
 * @param nums 
 * @param numsSize 
 * @param target 
 * @return int 
 */
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int middle = 0;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (nums[middle] < target) {
            left = middle + 1;
        }
        else if (nums[middle] > target) {
            right = middle - 1;
        }
        else {
            return middle;
        }
    }
    return -1;
}

/**
 * @brief 二分查找 [left, right)
 * 
 * @param nums 
 * @param numsSize 
 * @param target 
 * @return int 
 */
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize;
    int middle = 0;

    while (left < right)
    {
        middle = (left + right) / 2;
        if (nums[middle] < target) {
            left = middle + 1;
        } 
        else if (nums[middle] > target) {
            right = middle;
        }
        else {
            return middle;
        }
    }
    return -1;
}
