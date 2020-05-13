//Did we decode the file successfully?
#include <stdio.h> 

int main()
{
float words; 
float theOccurences; 
words = 0; 
theOccurences = 0; 
FILE *fp; 
fp = fopen("testfile.txt", "r");
if (fp == NULL)
{
printf("Something went wrong.\n"); 
return 1; 
}

char x[100];
while (fscanf(fp, " %100s", x) == 1){

x[0] = tolower(x[0]);
printf("%s\n", x); 

  if ((strcmp(x, "the")) == 0){
      printf("A match.\n"); 
      theOccurences+= 1;
    }
  words+= 1;
  
  

}
float ratio = (theOccurences / words); 
if (ratio > 0.1){
printf("The file has been decoded.\n"); 
}
else {
printf("Decoding failed. \n");
printf("Words: %4f, \"the\" : %4f\n", words, theOccurences); 
}



return 0; 
}
