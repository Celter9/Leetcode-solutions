/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *returnn=(int*)malloc(2*sizeof(int));
    *returnSize=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                returnn[0]=i;
                returnn[1]=j;
                *returnSize=2;
                return returnn;
            }
        }
    }
    free(returnn);
    return NULL;
}