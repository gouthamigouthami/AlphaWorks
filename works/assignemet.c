#include <stdio.h>
#include<math.h>

unsigned char reverseBits(unsigned char num, unsigned char no_bits) {
    unsigned char reversed = 0;
    for (int i = 0; i < no_bits; i++) {
        reversed <<= 1;
        reversed |= (num & 1);
        num >>= 1;
    }
    return reversed;
}

int arrayProcess(int size, unsigned char *ptr, unsigned char no_bits) {
    if (size <= 0 || ptr == NULL || no_bits < 0 || no_bits > 8) {
        // Handle invalid input parameters
       
        return 0; // Not successful
    }

    for (int i = 0; i < size; i++) {
         //Reverse only the specified number of bits
        
           unsigned int mask=(pow(2,no_bits))-1;
           unsigned int value;
           //unsigned int mask1=(pow(2,size))-1;
          
          ptr[i] = (ptr[i] &   (~mask)) | reverseBits(ptr[i], no_bits);
          
           //ptr[i] = (ptr[i] &   (mask1<<no_bits)) | reverseBits(ptr[i], no_bits);
           
        
    }
    

    return 1; // Successful
}

int main() {
    int array_size;
    printf("enter the size of an array : ");
    scanf("%d",&array_size);
    
    unsigned char inputArray[array_size];
    for(int start=0;start<array_size;start++)
    {
        scanf("%hhd",&inputArray[start]);
    }
    int size = sizeof(inputArray) / sizeof(inputArray[0]);
    unsigned char no_bits ;
    printf("enter number of bits you want to change: ");
    scanf("%hhd",&no_bits);

    printf("Input Array (binary):\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", inputArray[i]);
    }

   if (arrayProcess(size, inputArray, no_bits)) {
        printf("\n\nOutput Array (binary):\n");
        for (int i = 0; i < size; i++) {
            printf("%d\t", inputArray[i]);
        }
        printf("\n");
    } else {
        printf("\n\nProcessing not successful\n");
    }
   

    return 0;
}

