int floor=-1;

        int ceil=Integer.MAX_VALUE;

        for(int i=0;i<n;i++)

        {

            if(arr[i]==x)

            {

                floor=arr[i];

                ceil=arr[i];

            }

            else if(arr[i]<x)

            {

                floor=Math.max(floor,arr[i]);

            }

            else

            {

                ceil= Math.min(ceil,arr[i]);

            }

        }

        if(ceil == Integer.MAX_VALUE)

        {

            ceil=-1;

        }

        return new Pair(floor,ceil);

    }
