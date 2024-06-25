class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
        vector<string> res;
        string str = "";
        backtrack(res,str,n,n);
        return res;
    }
    void backtrack(vector<string> &res, string str, int open, int close)
    {
        if(open == 0 && close == 0)
        {
            res.push_back(str);
            return;
        }
        if(open>0)
        {
            backtrack(res,str+"(",open-1,close);
        }
        if(close>open)
        {
            backtrack(res,str+")",open,close-1);
        }
    }
};
