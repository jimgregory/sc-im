int del_char(char * str, int posicion);
int del_range_chars(char * str, int d, int h);
int add_char(char * str, char c, int posicion);
void subst(char * s, char from, char to);
int is_idchar (int d);
int str_in_str(char * s, char * b);
char ** split(char *string, const char delimiter, int lastnull);
char * ltrim(char *string, char junk);
char * rtrim(char * string, char junk);
int isnumeric(char * string);
int clean_carrier(char * string);
char * xstrtok(char * line, char * delims);
int count_word_occurrences(char * s, char * word, int overlap);
char * str_replace ( const char * string, const char * substr, const char * replacement);
void uppercase(char * sPtr);
