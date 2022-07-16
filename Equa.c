#include <stdio.h>
#include<string.h>
struct equator
{ char cy[30];
  };
int main() 
{ struct equator r;
  printf("------------------Welcome to Equator Region Verification Site------------------\n");
  printf("Please Ensure to Type country's Name in Sentence Case(i.e. America)\n");
  printf("Enter the name of the country: ");
  scanf("%s",r.cy);
  int i;
  if(strcmp("Ecuador",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Colombia",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Brazil",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Sao Tome & Principe",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Gabon",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Democratic Republic of the Congo",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Uganda",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Kenya",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Somalia",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Maldives",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Indonesia",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else if(strcmp("Kiribati",r.cy)==0)
    printf("%s Lies in Equator Region",r.cy);
  else
    printf("%s dosen't comes under the Equatorial Region",r.cy);
printf("\n\n------------------Thank You For Visiting Our Site------------------------------");
    return 0;
}