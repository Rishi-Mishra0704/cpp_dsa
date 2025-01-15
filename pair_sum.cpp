#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector<int> arr, int target)
{
    vector<int> ans;
    int n = arr.size();
    int i = 0, j= n-1;
    while (i < j)
    {
        int pairsum = arr[i] + arr[j];
        if(pairsum < target){
            i++;
        }
        else if(pairsum > target){
            j--;
        }else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    

    return ans;
}

int main()
{
    vector<int> nums = {2,3,6,8,12,32};

    int target = 14;

    vector<int> ans = pair_sum(nums,target);
    cout << ans[0] << "," << ans[1]<<endl;

    return 0;
}