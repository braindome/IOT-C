#include <stdio.h>


// Skapa en struktur för att lagra information om studenter. 
// FirstName 50 tecken, LastName 50 tecken, City 50 tecken, Birthyear ska lagras för varje
// Skapa en funktion, InputStudent(Student *), som matar in information om en Student
// Anropa funktionen två gånger, en med variabel student1 och en med student2 
// Skapa en funktion, PrintStudent(const Student *), skriver ut informationen
// Anropa den för både student1 och student2

typedef struct {
  char FirstName[50];
  char LastName[50];
  char City[50];
  int BirthYear;
} Student;

void InputStudent(Student *s) {
  printf("Insert first name: ");
  scanf(" %s", s->FirstName);
  printf("Insert last name: ");
  scanf(" %s", s->LastName);
  printf("Insert city: ");
  scanf(" %s", s->City);
  printf("Insert birth year: "); 
  scanf(" %d", &s->BirthYear);
}

void PrintStudent(const Student *s) {
  printf("Student information:\n");
  printf("%s %s\n",s->FirstName, s->LastName);
  printf("%s Birth year:%d\n",s->City, s->BirthYear);
}

int main() {
  Student students[10];
  Student s1 = {"Leopoldo", "Mastelloni", "Corato", 1945};
  Student s3 = {"Maria", "Rossi", "Roma", 1985};
  Student s4 = {"Giuseppe", "Verdi", "Milano", 1978};
  Student s5 = {"Anna", "Bianchi", "Napoli", 1992};
  Student s6 = {"Marco", "Ferrari", "Torino", 1988};
  Student s7 = {"Sofia", "Romano", "Firenze", 1995};
  Student s8 = {"Alessandro", "Conti", "Bologna", 1983};
  Student s9 = {"Giulia", "Ricci", "Venezia", 1990};
  Student s10 = {"Matteo", "Greco", "Bari", 1987};
  Student s2 = { "Pippo", "Baudo", "Palermo", 1932 };
  InputStudent(&s1);
  InputStudent(&s2);
  PrintStudent(&s1);
  PrintStudent(&s2);
}