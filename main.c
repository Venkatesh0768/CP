#include <stdio.h>
#include <string.h>

int main() {
    char stack[20], ip[20], opt[10][10][1], ter[10];
    int i, j, k, n, top = 0, row, col;
    int len;

    for (i = 0; i < 20; i++) {
        stack[i] = '\0';  
    }
    ip[0] = '\0';  


    for (j = 0; j < 10; j++) {
        for (k = 0; k < 10; k++) {
            opt[j][k][0] = '\0';
        }
    }

    
    printf("Enter the number of terminals: ");
    scanf("%d", &n);

    printf("\nEnter the terminals: ");
    scanf("%s", ter);

    
    printf("\nEnter the table values:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value for %c %c: ", ter[i], ter[j]);
            scanf(" %s", opt[i][j]);  
    }
    printf("\nOPERATOR PRECEDENCE TABLE:\n");
    for (i = 0; i < n; i++) {
        printf("\t%c", ter[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        printf("\n%c |", ter[i]);
        for (j = 0; j < n; j++) {
            printf("\t%c", opt[i][j][0]);
        }
    }

    stack[top] = '$';
    printf("\n\nEnter the input string (append with $): ");
    scanf("%s", ip);

    i = 0;

    printf("\nSTACK\t\t\tINPUT STRING\t\t\tACTION\n");
    printf("\n%s\t\t\t%s\t\t\t", stack, ip);
    len = strlen(ip);

    while (i <= len) {
        for (k = 0; k < n; k++) {
            if (stack[top] == ter[k]) {
                row = k;
            }
            if (ip[i] == ter[k]) {
                col = k;
            }
        }

        
        if ((stack[top] == '$') && (ip[i] == '$')) {
            printf("String is ACCEPTED\n");
            break;
        }
        else if ((opt[row][col][0] == '<') || (opt[row][col][0] == '=')) {
            stack[++top] = ip[i]; 
            i++;
            printf("Shift %c\n", stack[top]);
        }
        
        else if (opt[row][col][0] == '>') {
            while (stack[top] != '$' && stack[top] != '<') {  
                --top;
            }
            top--;  
            printf("Reduce\n");
        }
        else {
            printf("\nString is not accepted\n");
            break;
        }
        printf("%s\t\t\t%s\t\t\t", stack, ip);
    }
    return 0;
}