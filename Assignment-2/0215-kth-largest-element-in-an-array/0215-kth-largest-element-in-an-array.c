int findKthLargest(int* nums, int numsSize, int k) {
    int freq[20001] = {0};

    for (int i = 0; i < numsSize; i++)
        freq[nums[i] + 10000]++;

    for (int i = 20000; i >= 0; i--) {
        k -= freq[i];
        if (k <= 0)
            return i - 10000;
    }

    return -1;
}