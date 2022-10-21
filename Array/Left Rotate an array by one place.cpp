int maxAND (int arr[], int n)
   {
       int maxi=INT_MIN;
       for(int i=0;i<n;i++)
       {
           maxi=max(maxi,arr[i]);
       }
       int bits = log2(maxi);
       int mask = (1<<bits);
       for(int i=bits;i>=0;i--)
       {
           int count=0;
           for(int j=0;j<n;j++)
           {
               if((mask&arr[j])==mask)
               {
                   count++;
               }
           }
           // cout<<mask<<" ";
           if(count<2)
           {
              mask=((mask-1)&mask); 
           }
           if(i>0)
           mask = (mask | (1<<(i-1)));
           // cout<<mask<<endl;
       }
       
       return mask;
   }
