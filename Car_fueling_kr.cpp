#include<bits/stdc++.h>
#include<stdio.h>

int n_fill(int target , int max_d, int npp, int pp[])
{
    int d_trav=0;
    int n_f=0;
    int npp_c=0;
    int count=0;
    
    	if(target<=max_d)
			return 0;
			
    	if(npp==1)
	{
	
		if((pp[npp-1]+max_d)>=target)
			return 1;
		
		if (target>=max_d) 
			return -1;
		
	}
	
		for (int i=1;i<npp;i++)
	{
	    if ((pp[i] - pp[i-1])>max_d)
	    {
	         return - 1;
	    }
	}
	
	if ((target - pp[npp-1])>max_d)
	return -1;
	
d_trav = max_d;
int counter =0;
while( d_trav < target)
{

for (int j=0;j<npp;j++)
{
   if (d_trav==pp[j])
   {
       n_f = n_f+1;
       counter=1;
   }
}

if (counter==0)
{
 	while ((pp[npp_c] < d_trav ) && (npp_c <= npp))
 	{
	 	npp_c = npp_c + 1;
	 	count = count + 1;
    }

    
    if (count>0)
    {
     	n_f = n_f + 1;
    }
	else	
	{
    	return -1;
	}
    
    count = 0;
   
    if (npp_c-1 >=npp)
    {
        d_trav = target;
        return n_f;
    }
    
    d_trav = pp[npp_c-1];
    
    npp_c = 0;
    
}
 	d_trav = d_trav + max_d;
 	counter =0;
 
}
    
    return n_f;
}

int main()
{
	int target = 0;//900;
    int max_d =0;//400;
    int npp = 0;//4;
  std::cin>>target;
  
	std::cin>>max_d;
	std::cin>>npp;
	int pp[500];
	for(int i=0;i<npp;i++)
	{
		std::cin>>pp[i];
	}
	
	if ((target<1) || (target >1000000))
		return -1;
		
			if ((max_d<1) || (max_d >400))
				return -1;
				
				if ((npp<1) || (npp>300))
					return -1;
					for(int i=0;i<npp;i++)
					{
						
						if(pp[i]>=target || pp[i]<=0)
							return -1;
					}
    // compulsory petrol pumps to refill at
    //int pp[4] = { 200,375,550,750 };
 
int n_f=0;

 n_f = n_fill(target,max_d,npp,pp);
 

std::cout <<n_f;
    // function call that returns the answer to the problem
    //std::cout << countRefill(N, K, M, compulsory) << endl;
    return 0;
}
