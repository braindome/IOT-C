int main() {
  HockeyPlayer foppa;
  foppa.JerseyNumber = 21;
  foppa.Age = 53;
  PrintPlayer(&foppa);
  PrintPlayer2(foppa);
  printf( "%lu",sizeof(foppa));
  printf("%lu", sizeof(&foppa));

}