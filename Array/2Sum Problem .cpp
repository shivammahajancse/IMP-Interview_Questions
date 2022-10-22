class Solution {

    public pair[] allPairs( long A[], long B[], long N, long M, long X) {

        // Your code goes here

        ArrayList<pair> Al= new ArrayList<>();

        Arrays.sort(A);

        Arrays.sort(B);

        for(int i=0;i<N;i++){

            for(int j=0;j<M;j++){

                if(A[i]+B[j]==X){

                    pair t = new pair(A[i],B[j]);

                    Al.add(t);

                }

                else if(A[i]+B[j]<X){

                    continue;

                }

                else{

                    break;

                }

            }

        }

        pair[] res= new pair[Al.size()];

        int n=0;

        for(pair p : Al){

            res[n++]=p;

        }

        return res;

    }

}
