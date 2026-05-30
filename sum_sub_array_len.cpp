/* Find the Longest Subarray with Sum = K.
Array has ONLY positive numbers. */
#include <iostream>

int main() {
    // Sliding window approach
    int SIZE = 8; 
    int arr[SIZE] = {1, 2, 3, 2, 1, 2, 1, 2};
    int K = 5;
    int maxlen = 0, sum = 0, right = 0, left = 0;
    for (; right < SIZE; right++)
    {
        sum += arr[right];
        while (sum > K && left <= right)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == K)
        {
            maxlen = std::max(maxlen, right - left + 1);
        }
    }
    std::cout << "Length of the largest subarray with sum"<<K<<" is "<<maxlen;
    return 0;
}
