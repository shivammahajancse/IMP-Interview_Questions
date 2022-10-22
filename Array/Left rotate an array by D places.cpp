void leftRotate(int arr[], int k, int n)

    {

      int arr1[n];int j=0;

      int x=(k)-((k/n)*n);

      for(int i=x;i<n;i++,j++){

          arr1[j]=arr[i];

      }

      for(int i=0;i<x;i++){

          arr1[j++]=arr[i];

      }

      for(int i=0;i<n;i++){

          arr[i]=arr1[i];

      }

  }
