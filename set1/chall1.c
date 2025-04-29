//RFC: https://datatracker.ietf.org/doc/html/rfc4648

#include <stdlib.h>
#include <stdio.h>

char b16Alphabet[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

void check_hex_non_aphabetical(hex) {

}

void convert_hex_to_octet(hex) {
    if (!check_hex_non_aphabetical(hex)) {
        printf("Non-aphalbet caracter on the Hex string.");
        return;
    }



}

void convert_octet_to_6bits(){

}

void convert_6bits_to_base64(){

}

void base64_padding() {

}

void main() {
    

}