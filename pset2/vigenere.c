#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// some global vars
int null = '\0'; // don't want to hardcode so i define some vars
int a = 'a'; // don't want to hardcode so i define some vars
int A = 'A'; // don't want to hardcode so i define some vars
//

int GetKey(char keyword);
int main(int argc, string argv[]) {
    
//check to see if 2 args otherwise give error message
       if (argc != 2){
            printf("error1\n");
            return 1;
        }
//check to see if arg is alphabetical otherwise give error message
        
    string key = argv[1];     //string key
    int k = strlen(key);
    
        for ( int i = 0; i < k; i++) {
            if (!isalpha(key[i])){
                printf("error2\n");
                return 1;
            }
        }
            
    int keycounter = 0; // counter for key
    
    string input = GetString(); // get string from user
        
        for ( int j = 0, m =  strlen(input); j < m; j++) { //for each letter in word 
            int p = input[j]; // p is each letter in input
            int i = keycounter % k; // set new counter for key
                
                if (islower(p)) {
                    int c = (((p - (a- null)) + (GetKey(key[i]))) % 26) + (a- null);
                    printf("%c",c);
                    keycounter++;
                }
                
                else if (isupper(p)) {
                    int c = (((p - (A- null)) + (GetKey(key[i]))) % 26) + (A- null);
                    printf("%c",c);
                    keycounter++;
                }
                
                else {
                     printf("%c", p );
                }
        }
     printf("\n");       
    return 0;
}                   

int GetKey( char keyword){
     
        if (islower(keyword)) {
            int k = keyword - (a- null);
            return k;
        }
        
        else {
            int k = keyword - (A- null);
            return k;
        }
        }