#include <stdio.h>

/**
1. Skapa ett program där användaren får upp fyra frågor om att mata in ett tal. 
  Spara alla talen i en array. Loopa igenom arrayen och ta fram det tal som är störst. 
  Skriv tillbaka resultatet på skärmen för användaren 
2. Utöka uppgift 2 med en inledande fråga där användaren får ange hur många tal den vill mata in. 
  Gör sedan samma sak för att ta fram det största talet. 
3. Skapa en array av 5 heltal och fyll den med värden. 
  Byt ut alla udda tal i arrayen mot talet 0. Skriv sedan efteråt ut innehållet i hela arrayen till skärmen. 
4. Skapa en array som skall innehålla temperaturmätningar. 
  Användaren får först upp en fråga om hur många mätningar som skall registreras. Sedan får denne ange värde för varje mätning. 
  Detta skall vara decimaltal. Skriv sedan ut alla mätningar och avsluta med att ange en max, en min och en medeltemperatur. 
5. Utöka uppgift 5 med att även ange mätdatum för varje mätvärde. 
  Skriv sedan ut varje mätvärde på samma sätt men tillsammans med mätdatum . Förenkla och låt datum = int ex 20230228
  - ett sätt att lösa är att ha TVÅ listor. En med datum och en med temperaturen. Så man lagrar tillhörande data på SAMMA INDEX I båda arrayerna! 
 */

void FourNumbers() {
  int numbers[4];
  for (int i = 0; i < 4; i++) {
    int num;
    printf("Insert number %d: ", i+1);
    scanf(" %d", &num);
    numbers[i] = num;
  }

  int largestSoFar = numbers[0];
  for (int i = 0; i <4; i++) {
    if (numbers[i] > largestSoFar ) {
      largestSoFar = numbers[i];
    }
  }
  printf("Largest: %d", largestSoFar);
}

void MoreNumbers() {
  int numbersLength;
  printf("Insert amount of numbers:");
  scanf(" %d", &numbersLength);

  int numbers[numbersLength];

  for (int i = 0; i < numbersLength; i++) {
    int num;
    printf("Insert number %d: ", i+1);
    scanf(" %d", &num);
    numbers[i] = num;
  }

  int largestSoFar = numbers[0];
  for (int i = 0; i < numbersLength; i++) {
    if (numbers[i] > largestSoFar) {
      largestSoFar = numbers[i];
    }
  }
  printf("Largest: %d", largestSoFar);
}

void TemperatureMeasurements() {
  int num;
  printf("How many measurements?");
  scanf(" %d", &num);
  float temps[num];

  for (int i = 0; i < num; i++) {
    float input;
    printf("Insert value %d: ", i+1);
    scanf(" %f", &input);
    temps[i] = input;
  }

  float max, min = temps[0];
  float sum = 0;
  for (int i = 0; i < num; i++) {
    if (temps[i] > max) {
      max = temps[i];
    }
    if (temps[i] < min) {
      min = temps[i];
    }
    sum = sum + temps[i];
  }
  float avg = sum / num;
  printf("Min: %f\n", min);
  printf("Max: %f\n", max);
  printf("Avg: %f\n", avg);

}

void ReplaceWithZero() {
  int array[5] = {4, 45, 24, 23, 11};
  for(int i = 0; i < 5; i++) {
    if (array[i] % 2 != 0) {
      array[i] = 0;
    }
  }
  for(int i = 0; i < 5; i++) {
    printf("%d\n", array[i]);
  }
}

void TempsWithDates() {
  int num;
  printf("How many measurements?");
  scanf(" %d", &num);
  float temps[num];
  int dates[num];

  for (int i = 0; i < num; i++) {
    float temp;
    int date;
    printf("Insert temperature value %d: ", i+1);
    scanf(" %f", &temp);
    printf("Insert date %d: ", i+1);
    scanf(" %d", &date);
    temps[i] = temp;
    dates[i] = date;
  }

  float max, min = temps[0];
  int maxDate, minDate;
  float sum = 0;
  for (int i = 0; i < num; i++) {
    if (temps[i] > max) {
      max = temps[i];
      maxDate = dates[i];
    }
    if (temps[i] < min) {
      min = temps[i];
      minDate = dates[i];
    }
    sum = sum + temps[i];
  }
  float avg = sum / num;
  printf("Min: %f on %d\n", min, minDate);
  printf("Max: %f on %d\n", max, maxDate);
  printf("Avg: %f\n", avg);
}

int main() {
  // FourNumbers();
  // MoreNumbers();
  // ReplaceWithZero();
  //TemperatureMeasurements();
  TempsWithDates();
}