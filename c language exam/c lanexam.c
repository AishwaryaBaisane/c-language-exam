 
#include<stdio.h>
struct data
{
	char name[30];
	int date;
	int month, year;
	int vdate;
};
int user(char *name, int date,int month,int year)
{
	struct data s;
	int i;
	FILE *fp;
	fp = fopen("data.txt","w");

    int x,o;
    int y;
    	if(month>=1 && month<=12)
    	{
    		
    		if(month!=2)
            {
               if(month%2==0)
               {
   	              s.vdate = 30;
               }	
               else
              {
  	           s.vdate = 31;
              }
          }
         else
         {
	      if(month%4==0)
	       {
	    	s.vdate = 29;

	       }
	       else
        	{
		     s.vdate = 28;
	       }
       }
          if(date>=1 && date<=s.vdate)
         {
    		if(year>=1924 && year<=2024)
    		{
    			printf("Name :%s\n",name);
    			printf("Birth Date :");
    			printf("%d/",date);
    			printf("%d/",month);
    			printf("%d \n",year);
    			printf("Age : %d years\n\n",2024-year);
    			
    			fprintf(fp,"Name :%s\n",s.name);
    			fprintf(fp,"Birth Date :");
    			fprintf(fp,"%d/",s.date);
    			fprintf(fp,"%d/",s.month);
    			fprintf(fp,"%d\n",s.year);
    			fprintf(fp,"Age : %d years\n\n",2024-s.year);

			}
			else
			{
				printf("enter year between 1924 & 2024 !\n\n");
				o--;
                main();
			}
		}
		else
		{
		    printf("enter valid date !\n\n");
		   	o--;
            main();
		}
	  }
		else
		{
			printf("enter month between 1 to 12 !\n\n");
			o--;
            main();
		}
		

		
	

    

}

int main()
{

	struct data s;
	char name[30];
	int i,v=4,y;
  
    int c=0;
    int o=0;
    o++;
    for(i=0; i<3; i++)
    {
    	
	x:
	c++;
    if(c<v)
    {
   
	printf("enter %d person's detail :\n",o+1);
	
	printf("enter user name :");
	scanf(" %[^\n]",&s.name);
	printf("enter user's date of birth :");
	scanf("%d",&s.date);
	printf("enter user's month of birth :");
	scanf("%d",&s.month);
	printf("enter user's year of birth :");
	scanf("%d",&s.year);
    
    
	user(s.name,s.date,s.month,s.year);
    
    }
   	
   }
  
	
	
}





