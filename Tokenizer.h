#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetSizeOf(char *line, const char sep[], int size);
void GetTokens(char line[],const char set[], int *toks);

#endif