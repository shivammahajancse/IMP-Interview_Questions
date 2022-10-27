class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
        sort(arr, arr+n);
        int len = 1;
        int maxlen = 1;
        for(int i=1; i<n; i++)
        {
            if(arr[i] == arr[i-1] + 1)
            {
                len++;
            }
            else if(arr[i] == arr[i-1])
            {
                continue;
            }
            else
            {
                maxlen = max(maxlen, len);
                len = 1;
            }
        }
        maxlen = max(maxlen, len);
      return maxlen;
    }
};
