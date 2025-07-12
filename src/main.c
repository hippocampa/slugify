#include "stdio.h"
#include "string.h"

void show_help(){
    puts("Slugify");
    puts("turning-string-to-slug\n");
    puts("Usage:");
    puts("slugify <string>\tTurn string to slug");
    puts("slugify help\t\tShow help\n\n");
    puts("Source: hippocampa.github.io");
}

int main(int argc, char *argv[]) {
    if (argc == 1 || argc > 2){
        show_help();
    } else {
        if (strcmp("help", argv[1]) == 0){
            show_help();
        }
    }
    return 0;

}