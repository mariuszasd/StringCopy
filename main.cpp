#include <iostream>
#include <stdio.h>

using namespace std;

/* brief: Copy C style string from source to destination */
void StringCopy(char source[], char destination[]);

int main()
{
    cout << "Hello World!" << endl;

   char sour[100], desti[100] = "What can I say about my programics skills";

   printf("Input a string to copy: ");
   //gets(source);
   cin >> sour;
   StringCopy(sour , desti );
   cout << "source: " << sour << endl;
   cout << "destination: " << desti << endl;

    return 0;
}

void StringCopy(char source[], char destination[])
{
    int i =0;
    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;

    }
    destination[i] = '\0';
}
