#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
 
// if the number of command line arguments is 2
        if (argc != 2){
            printf("error\n");
            return 1;
        }
        
        else{
            int k = atoi(argv[1]); // changes string to int
            string p = GetString(); // gets string from user
            
                for (int i = 0, n = strlen(p); i < n; i++) {
                    int null = '\0';
                    int q = p[i];
                    
                        if (islower(p[i])) {
                            int a = 'a';
                            int c = (((q - (a- null)) + k) % 26) + (a- null);
                            printf("%c",c);
                        }
                        
                        else if (isupper(p[i])) {
                            int A = 'A';
                            int c = (((q - (A- null)) + k) % 26) + (A- null);
                            printf("%c",c);
                        }
                        
                        else {
                             printf("%c", p[i]);
                        }
                    }
            
            printf("\n");  
            return 0;
                }
             
}
        
         
