vector<int> findUnion(int arr1[], int arr2[], int n, int m)

    {

        //Your code here

        //return vector with correct order of elements

        set<int>Set;

        vector<int>ans;

        for(int i = 0 ; i < n ; i++)

        Set.insert(arr1[i]);

        for(int i = 0 ; i < m ; i++)

        Set.insert(arr2[i]);

        for(auto &e : Set)

         {

             ans.push_back(e);

         }

          return ans;

    }
