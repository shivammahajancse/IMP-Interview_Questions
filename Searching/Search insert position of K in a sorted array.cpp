    int searchInsertK(vector<int> a, int n, int k)

    {

        int l = 0;

        int h = n - 1;

 

        while(l <= h){

            int mid = l + (h-l)/2;

            if(a[mid] == k){

                return mid;

            }

            else if(a[mid] < k){

                l = mid + 1;

            }

            else{

                h = mid - 1;

            }

        }

        return l;

    }

};
