#include <stdio.h>

int main() {
  int rollno[20], marks[20], i;

  for (i = 0; i < 20; i++) {
    printf("\n Enter roll no. of Student [%d]", i + 1);
    scanf("%d", & rollno[i]);
    printf("\n Enter marks of Student [%d]", i + 1);
    scanf("%d", & marks[i]);
  }

  for (i = 0; i < 20; i++) {
    printf("\n Roll No :  %d   Marks : %d", rollno[i], marks[i]);
  }

  return 0;
}