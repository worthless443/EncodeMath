#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

char charset[] = {
        '!', '"', '#', '$', '%', '&', '(', ')', '*', '+', ',', '-', '.', '/',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
        '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
        'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', ']', '^', '_',
        '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~'
};

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
        //printf("%d ", (int)(1/power(word[i],1) * power(size,2)));
        if(word[i-2] != ' ')
            printf("%c", 
                    charset[ 
                        (int)(power(size,2) * (word[i-2] + 10)/power(word[i-2],2))
                    ]
            );
            if(i % 38 == 0)
                printf("\n");
    }

    if((strlen(word) + 2) % 38)
        printf("\n");

}
