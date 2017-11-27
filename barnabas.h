int strlength(char *);

int strlength(char *str) {
  int len = 0;
  while(str[len]) {
    len++;
  }
  return len;
}
