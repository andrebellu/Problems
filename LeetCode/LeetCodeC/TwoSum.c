int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *r = (int *)malloc(2 * sizeof(int)), a;

    for (int i = 0; i < numsSize; i++)
    {
        a = target - nums[i];
        for (int j = i + 1; j < numsSize; j++)
        {
            if (a == nums[j])
            {
                r[0] = i;
                r[1] = j;
                return r;
            }
        }
    }
    return r;
}