#include "Std.h"

void CleanStringBuffer(char* buffer, int length)
{
    for (int i = 0; i < length; i++)
    {
        buffer[i] = '\0';
    }
}

void SubString(char* destination, char* source, int start, int end)
{
    int length = end - start;
    for (int i = 0; i <= length; i++)
    {
        destination[i] = source[start + i];
    }
}