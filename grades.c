  //
  // Created by yul on 2/3/2025.
  //

  #include <stdio.h>
  int main(){
    int grade1,grade2,grade3;

    int promedio;
    printf("Enter first grade: \n");


    scanf("%d", &grade1);

    printf("Enter second grade: \n");
    scanf("%d", &grade2);
    printf("Enter third grade: \n");
    scanf("%d", &grade3);

    promedio = (grade1 + grade2 + grade3) / 3;

    if (promedio >= 70) {
      printf("Grade A\n");
    }
    else {
      printf("Grade B\n");
    }
  }