// https://leetcode.com/problems/combination-sum-ii/    
void printcombinations(vector<int>&candidates,int target,vector<int>&ans,vector<vector<int>>&mainans,int ind)
    {
        if(ind==candidates.size())
        {
            if(target==0)
            {
                mainans.push_back(ans);
            }
            return;
        }
        //logic 
        if(candidates[ind]<=target)
        {
            ans.push_back(candidates[ind]);
            printcombinations(candidates,target-candidates[ind],ans,mainans,ind+1);
            ans.pop_back();
        }
        printcombinations(candidates,target,ans,mainans,ind+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ans;
        vector<vector<int>>mainans;
        printcombinations(candidates,target,ans,mainans,0);
       
        sort(mainans.begin(), mainans.end());
        mainans.erase(unique(mainans.begin(), mainans.end()), mainans.end());
        return mainans;
    }
};
