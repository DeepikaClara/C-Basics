// pointer & malloc
#include <stdio.h>

int main() {
   int* marks;
   int students;
   char gender;
   scanf("%d",&students);
   marks = (int*) malloc(students * sizeof(int));
}