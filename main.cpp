#include <iostream>

using namespace std;
void StringCopy(char destination[], char source[]);

int main()
{
    cout << "Hello World!" << endl;

   char man1[8] = "mariusz";
   char man2[8] = "tomasz";
   StringCopy(man1 , man2 );
   cout << "man1: " << man1 << endl;
   cout << "man2: " << man2 << endl;

    return 0;
}

void StringCopy(char destination[], char source[])
{
    int i =0;
    while(destination[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
}
