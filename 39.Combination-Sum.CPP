class Solution {
public:
    void combination(vector<int>& candidates, int target,
                     vector<vector<int> >& res,
                     vector<int>& r, int i)
    {
        if (target < 0)
            return;

        if (target == 0)
        {
            res.push_back(r);
            return;
        }

        while (i < candidates.size() && target - candidates[i] >= 0)
        {

            r.push_back(candidates[i]);

            combination(candidates, target - candidates[i], res, r, i);
            i++;

            r.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

        vector<int> r;
        vector<vector<int> > res;
        combination(candidates, target, res, r, 0);

        return res;
    }
};
