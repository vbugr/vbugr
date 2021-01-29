#pragma once

#include <stdlib.h>
#include "agent.h"

t_agent *mx_create_agent(char *name, int power, int strength);
char *mx_strdup(const char *str);
char *mx_strnew(int size);
int mx_strlen(const char *str);
char *mx_strcpy(char *dst, const char *src);

