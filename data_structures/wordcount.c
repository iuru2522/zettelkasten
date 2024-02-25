
// Include the standard input/output header file
#include <stdio.h>

// Define a constant IN with value 1 to represent being inside a word.
#define IN 1
// Define a constant OUT with value 0 to represent being outside a word
#define OUT 0

/* count lines, words, and characters in input */
// Main function, the entry point of the program
int main()
{
    // Declare variables for character, newline count, word count and state
    int c, nl, nw, nc, state;

    // Initialize state to OUT (outside a wordd)
    state = OUT;

    // Initialize newline count, word count, and character count to 0
    nl = nw = nc = 0;

    // Loop to read character from input until EOF is encountered
    while ((c = getchar() != EOF))
    {
        // Increment character count for each character read
        ++nc;

        // if the character is a newline
        if (c == '\n')

            // increment newline count
            ++nl;
     //if the character is a space, newline or tab
        if (c == ' ' || c == '\n' || c == '\t')

        //Change state to OUT (outside a word)
            state = OUT;
            //If the previus state was OUT
        else if (state == OUT)
        {
            //Change state to IN (inside a word)
            state = IN;
            //Increment word count
            ++nw;
        }
    }
    //Print the count of newlines, words, and characters
    printf("%d %d %d\n", nl, nw, nc);

//return 0 to indicate successful termination of the program
    return 0; 
}
