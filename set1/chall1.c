//RFC: https://datatracker.ietf.org/doc/html/rfc4648
// strol https://android.googlesource.com/platform/bionic.git/+/eclair-release/libc/stdlib/strtol.c

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char input[96] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
char output[64] = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";

char b16Alphabet[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int check_hex_non_aphabetical(char* hex) {
    // Placeholder implementation: return 1 for valid input
    // You can add logic to validate the hex string here
    return 1;
}

void convert_hex_to_octet(char* hex) {
    if (!check_hex_non_aphabetical(hex)) {
        printf("Hex Non-aphalbet caracter on the string.");
        return;
    }

    //go to every number in the input array and call hex_to_binary
    //ever 2 caracters have an space

    while (*hex != '\0') {
        
    }
    return;
}

char* hex_to_binary(char hexCaracter) {
    //converter o caracter hex para seu valor de 4bits (0-15)
    //a cada 2 caracteres hex - temos um octet
    int digit;

    if (hexCaracter >= '0' && hexCaracter <= '9') {
        digit = hexCaracter - '0'; // subtraindo do caracter Hex o valor do 0 na tabela ASCII - para ter o seu valor 
    } else if (hexCaracter >= 'A' && hexCaracter <= 'F') {
        digit = hexCaracter - 'A' + 10;
    } else if (hexCaracter >= 'a' && hexCaracter <= 'f') {
        digit = hexCaracter - 'a' + 10;
    } else {
        printf("\nError <hex_to_binary>: Invalid hex digit '%c'\n", digit);
        return;
    }

    //converter digit to 4-bit binary
    static char HexInBinary[5];
    if (digit <= 0 || digit > 15) {
        strcpy(HexInBinary, "0000");
        return HexInBinary;
    }

    HexInBinary[4] = '\0';
    
    for (int j = 3; j >= 0; j--) {
        HexInBinary[j] = (digit % 2) + '0'; // Convert to ASCII '0' or '1'
        digit /= 2;
    }

    return HexInBinary;
}



void convert_octet_to_6bits() {

}

void convert_6bits_to_base64() {

}

void base64_padding() {

}

void main() {
    

}