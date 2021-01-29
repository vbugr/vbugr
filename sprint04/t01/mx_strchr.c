char *mx_strchr(const char *s, int c) {
   while(*s != '\0')
      if(*s++ == c)
         return (char *) s -1;
      return 0;
}