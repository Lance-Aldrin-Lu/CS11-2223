#include <stdio.h>

int main() {
    
    // Variable Initialization
    int n;
    int upper, lower;
    
    // Get number of strings
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++)
    {
        // Refresh the Array
        char string[1000];
        
        // Get string
        fgets(string, sizeof(string), stdin);
        
        upper = 0;
        lower = 0;

	    for (int j = 0; string[j] != '\0'; j++)
	    {
            // Compare where letter value in range

            // Upper Case Char -> Vals 65 to 90
            if ('A' <= string[j] && string[j] <= 'Z')
            {
                upper += 1;
            }
                
            // Lower Case Char -> Vals 97 to 112
            if ('a' <= string[j] && string[j] <= 'z')
            {
                lower += 1;
            }
                

        }

        // Output
	    printf("%d %d\n", upper, lower);

    }
	
   return 0;
}