/*
    NAME:  
    CSE 3318, hw #10
    Fall 2025

    use the Wagner–Fischer algorithm to determine the edit distance between two song names
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 

int main(int argc, char* argv[]) {
    char* filename = "hw10-data.txt";
    int maxEditDistance;

    if(argc != 2) {
        printf("usage:    executableName  maxEditDistance\n");
        printf("example:  ./brezeale-hw05  5\n");
        exit(1);
    }
    else
        maxEditDistance = atoi( argv[1] );
     
    return 0;
}
