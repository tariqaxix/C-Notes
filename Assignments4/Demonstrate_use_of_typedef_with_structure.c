
#include <stdio.h>
#include <string.h>
typedef struct Cities
{
  char name[50];
  char country[50];
  float area;
  int population;
} Cities;
int main()
{
  Cities city1, city2;
  strcpy(city1.name, "Bishkek");
  strcpy(city1.country, "Kyrgyzstan");
  city1.area = 169.9;
  city1.population = 1012500;
  strcpy(city2.name, "Naryn");
  strcpy(city2.country, "Kyrgyzstan");
  city2.area = 84.0;
  city2.population = 40000;
  printf("The city %s is in %s\n", city1.name, city1.country);
  printf("The total area of %s is %f square kilometers\n", city1.name, city1.area);
  printf("The total population of %s is %d inhabitants\n", city1.name, city1.population);
  printf("The city %s is in %s\n", city2.name, city2.country);
  printf("The total area of %s is %f square kilometers\n", city2.name, city2.area);
  printf("The total population of %s is %d inhabitants\n", city2.name, city2.population);
  return 0;
}


