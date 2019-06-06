#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    int i=0;
    fgets(str, 50, stdin);
    for(int j=0; j<strlen(str); j++)
    {
      i = str[j];
      if(i=='A'|| i=='a') printf(".-|");
      if(i=='B'|| i=='b') printf("-...|");
      if(i=='C'|| i=='c') printf("-.-.|");
      if(i=='D'|| i=='d') printf("-..|");
      if(i=='E'|| i=='e') printf(".|");
      if(i=='F'|| i=='f') printf("..-.|");
      if(i=='G'|| i=='g') printf("--.|");
      if(i=='H'|| i=='h') printf("....|");
      if(i=='I'|| i=='i') printf("..|");
      if(i=='J'|| i=='j') printf(".---|");
      if(i=='K'|| i=='k') printf("-.-|");
      if(i=='L'|| i=='l') printf(".-..|");
      if(i=='M'|| i=='m') printf("--|");
      if(i=='N'|| i=='n') printf("-.|");
      if(i=='O'|| i=='o') printf("---|");
      if(i=='P'|| i=='p') printf(".--.|");
      if(i=='Q'|| i=='q') printf("--.-|");
      if(i=='R'|| i=='r') printf(".-.|");
      if(i=='T'|| i=='t') printf("-|");
      if(i=='S'|| i=='s') printf("...|");
      if(i=='U'|| i=='u') printf("..-|");
      if(i=='V'|| i=='v') printf("...-|");
      if(i=='W'|| i=='w') printf(".--|");
      if(i=='X'|| i=='x') printf("-..-|");
      if(i=='Y'|| i=='y') printf("-.--|");
      if(i=='Z'|| i=='z') printf("--..|");
      if(i==' ')  printf("|:_..._:|");
      if(i=='0')  printf("-----|");
      if(i=='1')  printf(".----|");
      if(i=='2')  printf("..---|");
      if(i=='3')  printf("...--|");
      if(i=='4')  printf("....-|");
      if(i=='5')  printf(".....|");
      if(i=='6')  printf("-....|");
      if(i=='7')  printf("--...|");
      if(i=='8')  printf("---..|");
      if(i=='9')  printf("----.|");
    }
    printf("\n");

    return 0;
}
