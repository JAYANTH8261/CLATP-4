#include <stdio.h>
#include<string.h>
FILE *p;
struct equator
{ char cy[30];
  };
int main() 
{ struct equator r;
  printf("------------------Welcome to Equator Region Verification Site------------------\n");
  printf("Please Ensure to Type country's Name in Sentence Case(i.e. America)\n");
  printf("Enter the name of the country: ");
  scanf("%s",r.cy);
  int i,x=0,*y;
  y=&x;
  p=fopen("jay.txt","w");
  if(strcmp("Ecuador",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Colombia",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Brazil",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Sao Tome & Principe",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Gabon",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Democratic Republic of the Congo",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Uganda",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Kenya",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Somalia",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Maldives",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Indonesia",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else if(strcmp("Kiribati",r.cy)==*y)
    {printf("%s Lies in Equator Region",r.cy);
    fprintf(p,"%s Lies in Equator Region",r.cy);}
  else
    {printf("%s dosen't comes under the Equatorial Region",r.cy);
    fprintf(p,"%s dosen't comes under the Equatorial Region",r.cy);}
printf("\n\n------------------Thank You For Visiting Our Site------------------------------");
fclose(p);
    return 0;
}
