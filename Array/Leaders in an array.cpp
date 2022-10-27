class Solution{

    //Function to find the leaders in the array.

    public:

    vector<int> leaders(int a[], int n){

        // Code here

        vector<int> ans;

        

        ans.insert(ans.begin(), a[n-1]);

        int max= a[n-1];

        for(int i=n-2; i>=0; i--){

            if(a[i] >= max){

                max=a[i];

                ans.insert(ans.begin(), a[i]);

            }

        }

        

        return ans;

    }

};
