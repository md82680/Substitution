#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Check command line arguments
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    // Validate key length
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Validate alphabetic characters
    for (size_t i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must contain only alphabetic characters.\n");
            return 1;
        }
    }

    // Check for duplicate characters (case-insensitive)
    for (size_t i = 0; i < strlen(key); i++)
    {
        for (size_t j = i + 1; j < strlen(key); j++)
        {
            if (tolower(key[i]) == tolower(key[j]))
            {
                printf("Key must contain each letter exactly once.\n");
                return 1;
            }
        }
    }

    printf("Key is valid.\n");

    // Get plaintext from user
    string plaintext = get_string("plaintext: ");

    // Convert plaintext to ciphertext
    printf("ciphertext: ");
    for (size_t i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            // Determine if character is uppercase
            bool is_upper = isupper(plaintext[i]);
            
            // Get position in alphabet (0-25)
            int position = tolower(plaintext[i]) - 'a';
            
            // Get substitution character and maintain case
            char sub = key[position];
            printf("%c", is_upper ? toupper(sub) : tolower(sub));
        }
        else
        {
            // Print non-alphabetic characters unchanged
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;
}