#include <stdio.h>
#include <string.h>

void StringOchInt1() {
  char name[10] = "Antonio";
  int age = 42;

  printf("Hej, jag heter %s och är %d år gammal.", name, age);
}

void FirstnameLastname() {
  char firstName[20];
  char lastName[20];
  printf("Insert your first name:");
  scanf(" %s", firstName);
  printf("Insert your last name:");
  scanf(" %s", lastName);
  printf("You are %s %s\n", firstName, lastName);

}

void StringAdder() {
  char txt1[50], txt2[50], txt3[50];
  char added[200] = "";
  printf("Insert text 1:");
  scanf(" %s", txt1);
  printf("Insert text 2:");
  scanf(" %s", txt2);
  printf("Insert text 3:");
  scanf(" %s", txt3);
  strcpy(added, txt1);
  strcat(added, " ");
  strcat(added, txt2);
  strcat(added, " ");
  strcat(added, txt3);
  printf("Result is %s and it's %zu chars", added, strlen(added));

}

void StringOchInt2() {
  char name[20];
  int age;

  printf("Vad heter du?");
  scanf(" %s", name);
  printf("Hur gammal är du?");
  scanf(" %d", &age);
  printf("Hej %s du är %d år gammal", name, age);
  if (age > 50) {
    printf("Oj vad gammal\n");
  }
}

int main() {
  StringAdder();
}