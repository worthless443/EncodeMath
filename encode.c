#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#include "config.h"

int power(long v, int n) {
   if(n == 1) 
       return v;
   return v * power(v,n-1);
}

char *argv_cat(int argc, char **argv, int n_words) {
    int size = 0;
    char word[argc * n_words];
	memset(word, '\0',argc * 10);
	for(int a=1;a<argc;++a) {
        int len = strlen(argv[a]);
        int jump = !size ? len : size + len;
		memcpy(word + size ,argv[a], len);
        word[jump] = ' '; 
        size+=len + 1;
    }
    char *ret = malloc(sizeof(char) * size);
    memcpy(ret,word,size);
    return ret;
}

int main(int argc, char **argv) {
    char *word = malloc(sizeof(char));
    for(int i=0;fread(word + i,1,1,stdin);++i)
        word = realloc(word, sizeof(char) * (i + 5));

    int size = sizeof(charset)/sizeof(char);
	for(int i=2;i<strlen(word) + 2;++i) {
        if(word[i-2] != ' ')
            printf("%c", 
                    charset[ 
                        (int)F_e(word[i-2],size)
                    ]
            );
            if(i % 38 == 0)
                printf("\n");
    }

    if((strlen(word) + 2) % 38)
        printf("\n");

}
