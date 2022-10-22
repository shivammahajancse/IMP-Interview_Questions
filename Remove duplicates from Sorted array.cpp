class Solution{
public:
    int remove_duplicate(int a[],int n){
        int pre=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[pre])
            {
                pre++;
                swap(a[pre],a[i]);
            }
        }
        return pre+1;
    }
};
