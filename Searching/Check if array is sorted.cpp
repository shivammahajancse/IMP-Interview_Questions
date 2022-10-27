class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        if(n==1) return true;
        if(n==2) return arr[1]>arr[0];
        for(int i=1; i<n-1; i++){
            if(arr[i-1]>arr[i] || arr[i]>arr[i+1]) return false;
        }
        return true;
    }
};
