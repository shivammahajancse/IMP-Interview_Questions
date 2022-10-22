int print2largest(int arr[], int n) {

        // code here

        Arrays.sort(arr);

        Set<Integer> hash_Set = new TreeSet<Integer>();

        for(int i=0;i<arr.length;i++){

            hash_Set.add(arr[i]);

        }

 

         List<Integer> list = new ArrayList<Integer>(hash_Set);

         if(list.size()>1)

        return list.get(list.size()-2);

        else

        return -1;

    }
