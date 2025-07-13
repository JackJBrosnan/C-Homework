#include <stdio.h>


int main(void) {
    char input = 0;
    printf("Q1: John Quincy Adams was the son of A) John Adams, B) Thomas Jefferson");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'A':
            printf("Correct\n");
            break;
        case 'B':
            printf("Wrong\n");
            break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q2: John Quincy Adams was part of the political party A) Democrat Republicans, B) Federalist\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'A':
            printf("Correct\n");
        break;
        case 'B':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q3: John Quincy Adams was born A) July 11th 1767, B) June 10th 1768\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'A':
            printf("Correct\n");
        break;
        case 'B':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q3: Before he was president, John Quincy Adams was A) Secretary of the Treasury, B) Secretary of State\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'B':
            printf("Correct\n");
        break;
        case 'A':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q4: John Quincy Adams was assossiated with drafting the foreign policy of A) The Monroe Doctrine, B) The Good Neighbour Policy\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'A':
            printf("Correct\n");
        break;
        case 'B':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q5: John Quincy Adams became president through A) winning the popular vote and electoral vote, B) the decision of the House of Representatives\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'B':
            printf("Correct\n");
        break;
        case 'A':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q6: John Quincy Adams was the A) 6th US President, B) 12th US President\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'A':
            printf("Correct\n");
        break;
        case 'B':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q7: After serving as president, John Quincy Adams held the position of A) US Senator, B) US Congressman\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'B':
            printf("Correct\n");
        break;
        case 'A':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q8: John Quincy Adams was an advocator for A) women's suffrage, B) the abolishment of slavery\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'B':
            printf("Correct\n");
        break;
        case 'A':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q9: A key feature of John Quincy Adams' presidency was A) expanding voting rights, B) creating many roads and canals\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'B':
            printf("Correct\n");
        break;
        case 'A':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    printf("Q10: John Quincy Adams served as a US Diplomat in A) Spain, B) Russia\n");
    fflush(stdin);
    scanf("%c",&input);
    switch(toupper(input)) {
        case 'B':
            printf("Correct\n");
        break;
        case 'A':
            printf("Wrong\n");
        break;
        default:
            printf("Wrong: Not an answer\n");
    }
    return 0;
}