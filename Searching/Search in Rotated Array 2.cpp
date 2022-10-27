bool Search(int n, vector<int>& arr, int key) {
        int start=0;
        int end=n-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==key)
                return true;
            if(arr[mid]==arr[start] && arr[mid]==arr[end])
                start++,end--;
            else if(arr[start]<=arr[mid]){
                if(arr[start]<=key && key<=arr[mid])
                    end=mid-1;
                else
                    start=mid+1;
            }
            else{
                if(arr[mid]<=key && arr[end]>=key)
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        
        return false;
    }
