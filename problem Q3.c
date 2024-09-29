#include<stdio.h>
int main(){
    char plainText, cipherText, decryptedText;

    printf("Enter a character: ");
    scanf(" %c", &plainText);

    
    cipherText = plainText;
    printf("Encrypted character: %c\n", cipherText);

   
    decryptedText = cipherText;
    printf("Decrypted character: %c\n", decryptedText);

    return 0;
}


