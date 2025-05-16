class Solution {
public:
int compute(int n)
{
    int res=0;
    while(n!=0)
    {
        res=res+(n%10)*(n%10);
        n=n/10;
    }
        return res;
    }

    bool isHappy(int n) {
        unordered_set<int>s;
        while(true)
{
    n=compute(n);
    if(s.count(n)==0)
    s.insert(n);
    else
    break;
}        
if(n==1)return true;
return false;
    }
};