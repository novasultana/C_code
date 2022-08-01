#include<stdio.h>
#define response_size 5
#define frequency_size 11
int main()
{
   int answer,rating;

   int frequency[frequency_size]={0};

   int response[response_size]={5,10,6,10,6};

   for(answer=0;answer<response_size;answer++)
   {
       ++frequency[response[answer]];
   }
   printf("%s%17s\n","Rating","Frequency");

   for(rating=1;rating<frequency_size;rating++)
   {
       printf("%6d%17d \n",rating,frequency[rating]);
   }

   return 0;
}
