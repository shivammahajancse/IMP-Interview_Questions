int search(int a[], int n){

     //code

     int i=0;

     while(i!=n)

     {

         if(a[i]==a[i+1]) i+=2;

         else if(a[i]!=a[i+1]) return a[i];

     }

 }
