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
            printcombinations(candidates,target-candidates[ind],ans,mainans,ind);
            ans.pop_back();
        }
        printcombinations(candidates,target,ans,mainans,ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ans;
        vector<vector<int>>mainans;
        printcombinations(candidates,target,ans,mainans,0);
        return mainans;