#include <stdio.h>



int main() {

    int studentId;

    int marks1, marks2, marks3, marks4, marks5;

    int totalMarks;

    float percentage;



    printf("Enter Student ID: ");

    scanf("%d", &studentId);



    printf("Enter marks for 5 subjects (out of 100 each):\n");

    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);



    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    percentage = (float)totalMarks / 500.0f * 100.0f;



    printf("\n--- Student Report ---\n");

    printf("Student ID: %d\n", studentId);

    printf("Total Marks: %d / 500\n", totalMarks);

    printf("Percentage: %.2f%%\n", percentage);

    printf("Grade: ");



    if (percentage > 90) {

        printf("O\n");

    } else if (percentage > 90) {

        printf("O\n");

    } else if (percentage >= 80) {

        printf("A\n");

    } else if (percentage >= 70) {

        printf("B\n");

    } else if (percentage >= 60) {

        printf("B+\n");

    } else if (percentage >= 50) {

        printf("C\n");

    } else {

        printf("Fail\n");

    }



    return 0;

}