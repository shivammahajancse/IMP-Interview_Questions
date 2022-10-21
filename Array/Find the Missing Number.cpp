int missingNumber(int A[], int N)

{

    int n=N-1;

    int s=(N*(N+1))/2;

    for(int i=0;i<n;i++)

    {

        s-=A[i];

    }

    return s;

}
