#pragma once

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <ncurses.h>

#define SECOND 1000000

typedef struct s_tear {
  int max_len;
  int col;
  int wait_time;
  int tail_row;
  int curr_row;
}              t_tear;

int mx_atoi(const char *str);

bool mx_isalpha(int c);

bool mx_isdigit(int c);

bool mx_islower(int c);

bool mx_isspace(char c);

bool mx_isupper(int c);

int mx_max(int a, int b, int c);

int mx_mid(int a, int b, int c);

void mx_printchar(char c);

void mx_printint(int n);

void mx_printstr(const char *s);

int mx_strcmp(const char *s1, const char *s2);

char *mx_strcpy(char *dst, const char *src);

char *mx_strjoin(char const *s1, char const *s2);

int mx_strlen(const char *s);

char *mx_strnew(const int size);

char **mx_strsplit(char const *s, char delim);

char *mx_strtrim(const char *str);

int mx_tolower(int c);

int mx_toupper(int c);
