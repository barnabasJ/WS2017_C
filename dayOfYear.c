/*
 * Day of Year
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLeapYear(int);
int compareString(char *, char *);

int main(int argc, char *argv[]) {
  if (argc > 3) {
    char *endptr, *month;
    int day, year, leapYear, monthN;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    month = argv[2];

    day = (int)strtol(argv[1], &endptr, 10);
    year = (int)strtol(argv[3], &endptr, 10);
    leapYear = isLeapYear(year);

    if (leapYear)
      days[1] = 29;

    monthN = -1;
    if (compareString(month, "JAN")) {
      monthN = 0;
    } else if (compareString(month, "FEB")) {
      monthN = 1;
    } else if (compareString(month, "APR")) {
      monthN = 2;
    } else if (compareString(month, "MAE")) {
      monthN = 3;
    } else if (compareString(month, "MAI")) {
      monthN = 4;
    } else if (compareString(month, "JUN")) {
      monthN = 5;
    } else if (compareString(month, "JUL")) {
      monthN = 6;
    } else if (compareString(month, "AUG")) {
      monthN = 7;
    } else if (compareString(month, "SEP")) {
      monthN = 8;
    } else if (compareString(month, "OKT")) {
      monthN = 9;
    } else if (compareString(month, "NOV")) {
      monthN = 10;
    } else if (compareString(month, "DEZ")) {
      monthN = 11;
    }
    if ((year > 0) && (monthN >= 0)) {
      if ((day > 0) && (day <= days[monthN])) {
        int dayOfYear = 0;
        int i;
        for (i = 0; i < monthN; i++) {
          dayOfYear += days[i];
        }
        dayOfYear += day;

        printf("It's the %d. day of the Year\n", dayOfYear);
        return 1;
      }
    }
    printf("Fehler");
    return 0;
  }
}

int compareString(char *string1, char *string2) {
  if (strlen(string1) == strlen(string2)) {
    int len = (int)strlen(string1);
    int i;
    for (i = 0; i < len; i++) {
      if (string1[i] != string2[i])
        return 0;
    }
    return 1;
  }
  return 0;
}

int isLeapYear(int year) {
  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    return 1;
  return 0;
}
