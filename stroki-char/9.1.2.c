#include <stdio.h>

int main()
{
  int n; char c=0;int b=0;
  scanf("%d", &n);
  int arr[26]={0};

  for(int i=0; i<2*n; i++)		//2*n --> учет пробелов
  {
    scanf("%c", &c);
    if(c=='A' || c=='a') arr[0]++;
    if(c=='B' || c=='b') arr[1]++;
    if(c=='C' || c=='c') arr[2]++;
    if(c=='D' || c=='d') arr[3]++;
    if(c=='E' || c=='e') arr[4]++;
    if(c=='F' || c=='f') arr[5]++;
    if(c=='G' || c=='g') arr[6]++;
    if(c=='H' || c=='h') arr[7]++;
    if(c=='I' || c=='i') arr[8]++;
    if(c=='J' || c=='j') arr[9]++;
    if(c=='K' || c=='k') arr[10]++;
    if(c=='L' || c=='l') arr[11]++;
    if(c=='M' || c=='m') arr[12]++;
    if(c=='N' || c=='n') arr[13]++;
    if(c=='O' || c=='o') arr[14]++;
    if(c=='P' || c=='p') arr[15]++;
    if(c=='Q' || c=='q') arr[16]++;
    if(c=='R' || c=='r') arr[17]++;
    if(c=='S' || c=='s') arr[18]++;
    if(c=='T' || c=='t') arr[19]++;
    if(c=='U' || c=='u') arr[20]++;
    if(c=='V' || c=='v') arr[21]++;
    if(c=='W' || c=='w') arr[22]++;
    if(c=='W' || c=='w') arr[22]++;
    if(c=='X' || c=='x') arr[23]++;
    if(c=='Y' || c=='y') arr[24]++;
    if(c=='Z' || c=='z') arr[25]++;
  }
  for(int i=0; i<26; i++)
  {
    printf("%d ", arr[i]);
  }
 printf("\n");
}

