class Solution
{
public:
    bool lemonadeChange(vector<int>& bills)
    {
        int n=bills.size();


        int five=0,ten=0;
        for(int i=0; i<n; i++)
        {
            int bill= bills[i];
            if(bill==5)
            {
                five++;
            }
            else  if(bill==10)
            {
                if(1<=five)
                {
                    ten++;
                    five--;

                }
                else
                {
                    return false;
                }


            }
            else
            {
                if(ten>=1 && five>=1 )
                {
                    ten--;
                    five--;
                }
                else if(five>=3)
                {
                    five=five-3;
                }
                else
                {

                    return false;
                }



            }


        }

        return true;

    }
};
