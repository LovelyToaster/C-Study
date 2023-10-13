#include <iostream>
using namespace std;
long max3(long a, long b, long c)
{
    if (a < b)
        a = b;
    if (a > c)
        return a;
    else
        return c;
}
long maxSubSum(int a[], int left, int right)
{
    int i, j;
    long maxLeftSum, maxRightSum;
    long maxLeftBorderSum, leftBorderSum;
    long maxRightBorderSum, rightBorderSum;
    if (left == right)
    {
        if (a[left] > 0)
            return a[left];
        else
            return 0;
    }
    int mid = (left + right) / 2;
    maxLeftSum = maxSubSum(a, left, mid);
    maxRightSum = maxSubSum(a, mid + 1, right);
    maxLeftBorderSum = 0, leftBorderSum = 0;
    for (i = mid; i >= left; i--)
    {
        leftBorderSum+=a[i];
        if (leftBorderSum > maxLeftBorderSum)
            maxLeftBorderSum = leftBorderSum;
    }
    maxRightBorderSum = 0, rightBorderSum = 0;
    for (j = mid + 1; j <= right; j++)
    {
        rightBorderSum += a[j];
        if (rightBorderSum > maxRightBorderSum)
            maxRightBorderSum = rightBorderSum;
    }
    return max3(maxLeftSum, maxRightSum, maxLeftBorderSum + maxRightBorderSum);
}
int main()
{
    int a[] = {-2, 11, -4, 13, -5, -2}, n = 6;
    int b[] = {-6, 2, 4, -7, 5, 3, 2, -1, 6, -9, 10, -2}, m = 12;
    printf("a序列的最大连续子序列的和：%ld\n", maxSubSum(a, 0, n - 1));
    printf("b序列的最大连续子序列的和：%ld\n", maxSubSum(b, 0, m - 1));
}