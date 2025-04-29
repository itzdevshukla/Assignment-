#include "strtoolkit.h"
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter String to Change in Uppercase :\n");
    fgets(str,sizeof(str),stdin);
    int i = 0;
    while(str[i]!='\0'){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        i++;
    }
    to_uppercase(str);
    printf("%s\n",str);
    
    char str2[100];
    printf("Enter String to Change in Lowercase :\n");
    fgets(str2,sizeof(str2),stdin);
    i = 0;
    while(str2[i]!='\0'){
        if(str2[i] == '\n'){
            str2[i] = '\0';
            break;
        }
        i++;
    }
    to_lowercase(str2);
    printf("%s\n",str2);

    char str3[100];
    printf("Enter String in which you want to count vowels :\n");
    fgets(str3,sizeof(str3),stdin);
    i = 0;
    while(str3[i]!='\0'){
        if(str3[i] == '\n'){
            str3[i] = '\0';
            break;
        }
        i++;
    }
    int count = vowelcounter(str3);
    printf("%d\n",count);

    char str4[100];
    printf("Enter String to reverse :\n");
    fgets(str4,sizeof(str4),stdin);
    i = 0;
    while(str4[i]!='\0'){
        if(str4[i] == '\n'){
            str4[i] = '\0';
            break;
        }
        i++;
    }
    reverse(str4);
    printf("%s\n",str4);

    char str5[100];
    printf("Enter String to sort :\n");
    fgets(str5,sizeof(str5),stdin);
    i = 0;
    while(str5[i]!='\0'){
        if(str5[i] == '\n'){
            str5[i] = '\0';
            break;
        }
        i++;
    }
    sort_strings(str5);
    printf("%s\n",str5);

    char str6[100];
    printf("Enter String to reverse words :\n");
    fgets(str6,sizeof(str6),stdin);
    i = 0;
    while(str6[i]!='\0'){
        if(str6[i] == '\n'){
            str6[i] = '\0';
            break;
        }
        i++;
    }
    reverse_words(str6);
    printf("%s\n",str6);
}