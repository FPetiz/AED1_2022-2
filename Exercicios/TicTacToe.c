# include <stdio.h>
void grid (char squares2[3][3]);

int main () {

    char squares[3][3] = { {'1', '2', '3'},
                         {'4', '5', '6'}, 
                         {'a', 'b', 'c'} };
    char answer;
    
    grid(squares);

    do {
        printf("\nDo you wanna play again? [Y-N]");
        scanf("%s", &answer);
    } while (answer == 's' || answer == 'S');
    return 0;
}

void grid (char squares2[3][3]) {
    printf("\t %c | %c | %c \n", squares2[0][0], squares2[0][1], squares2[0][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c \n", squares2[1][0], squares2[1][1], squares2[1][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c \n", squares2[2][0], squares2[2][1], squares2[2][2]);
}
// terminar