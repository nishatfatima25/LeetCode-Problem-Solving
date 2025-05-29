// LeetCode Problem : 15. 3Sum
// Link : https://leetcode.com/problems/3sum/


//better approach

#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    set<vector<int>> st;
    for(int i=0; i<n; i++){
        set<int> hashset;

        for(int j=i+1; j<n; j++){
            int third = -(arr[i]+arr[j]);

            if(hashset.find(third) != hashset.end()){
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }

    }
    vector<vector<int>> ans (st.begin(), st.end());
    return ans;
}


//Optimal approach : two pointers

#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){

        //skip on getting the same i
        if(i>0 && arr[i] == arr[i-1]) continue;

        int j = i+1;
        int k = n-1;
        
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];

            if(sum>0) {
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k+1]) k--;
            }
        }
    }

    return ans;

}
