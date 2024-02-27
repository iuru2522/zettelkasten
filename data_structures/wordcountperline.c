#include <stdio.h>

#define IN 1  // Inside a word
#define OUT 0 // Outside a word

int main() {
    int c, nl, nw, nc, state;  
    state = OUT;  
    nl = nw = nc = 0;  

    while ((c = getchar()) != EOF) {
        ++nc;  

        if (c == '\n') {
            ++nl;  
            // printf("Words per line: %d\n", nw);  // Print words per line
            nw = 0;  // Reset word count for the next line
            state = OUT;  // Reset state to OUT when encountering a newline
        } else if (c == ' ' || c == '\t') {
            state = OUT;  // Reset state to OUT when encountering a space or tab
        } else {
            if (state == OUT) {
                state = IN;  // Set state to IN if encountering a non-space/tab character after being OUT
                ++nw;  
            }
        }
    }

    printf("Total lines: %d\n", nl);  // Print total number of lines
    printf("Total characters: %d\n", nc);  // Print total number of characters
   
    return 0;  
}
