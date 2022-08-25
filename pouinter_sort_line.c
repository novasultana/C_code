
#include <stdio.h>
#include <string.h>
int main(){
int a;
printf("How many text do you want to enter?\n");
scanf("%d",&a);
char array[a][30];
printf("Enter %d text(s): \n", a);
a=a+1;
for(int i=0; i<a; i++){
gets(array[i]);
}
char temp[30];
for(int i=0; i<a; i++){

for(int j=0; j<a-1; j++){
if(strcmp(array[j], array[j+1]) > 0){
strcpy(temp, array[j]);
strcpy(array[j], array[j+1]);
strcpy(array[j+1], temp);
}
}
}
printf("\nOutput: \n");
display(array,a);
}
void display(char array[][30],int a)
{
for(int i=0; i<a; i++)
{
puts(array[i]);
}
printf("\n");
}
