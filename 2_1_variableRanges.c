#include <stdio.h>
#include <limits.h>
#include <float.h>

void print_range_of_char_type(char name[], char min, char max);
void print_range_of_uchar_type(char name[], unsigned char min, unsigned char max);
void print_range_of_int_type(char name[], int min, int max);
void print_range_of_long_type(char name[], long min, long max);
void print_range_of_short_type(char name[], short min, short max);
void print_range_of_uint_type(char name[], unsigned int min, unsigned int max);
void print_range_of_ulong_type(char name[], unsigned long min, unsigned long max);
void print_range_of_ushort_type(char name[], unsigned short min, unsigned short max);
void print_range_of_float_type(char name[], float min, float max);
void print_range_of_double_type(char name[], double min, double max);

int main() {
    printf("\n");
    print_range_of_char_type("char", CHAR_MIN, CHAR_MAX);   
    print_range_of_int_type("int", INT_MIN, INT_MAX);
    print_range_of_long_type("long", LONG_MIN, LONG_MAX);
    print_range_of_short_type("short", SHRT_MIN, SHRT_MAX);
    print_range_of_uchar_type("uchar", 0, UCHAR_MAX);
    print_range_of_uint_type("uint", 0, UINT_MAX);
    print_range_of_ulong_type("ulong", 0, ULONG_MAX);
    print_range_of_ushort_type("ushort", 0, USHRT_MAX);
    print_range_of_float_type("float", FLT_MIN, FLT_MAX);
    print_range_of_double_type("double", DBL_MIN, DBL_MAX);
}

void print_range_of_char_type(char name[], char min, char max) {
    printf("Type:%s\t Min: %d\t Max: %d\n", name, min, max);
}

void print_range_of_int_type(char name[], int min, int max) {
    printf("Type:%s\t Min: %d\t Max: %d\n", name, min, max);
}

void print_range_of_long_type(char name[], long min, long max) {
    printf("Type:%s\t Min: %ld\t Max: %ld\n", name, min, max);
}


void print_range_of_short_type(char name[], short min, short max) {
    printf("Type:%s\t Min: %hd\t Max: %hd\n", name, min, max);
}

void print_range_of_uchar_type(char name[], unsigned char min, unsigned char max) {
    printf("Type:%s\t Min:%u\t Max: %u\n", name, min, max);
}

void print_range_of_uint_type(char name[],unsigned int min, unsigned int max) {
    printf("Type:%s\t Min: %u\t Max: %u\n", name, min, max);
}


void print_range_of_ulong_type(char name[], unsigned long min, unsigned long max) {
    printf("Type:%s\t Min: %lu\t Max: %lu\n", name, min, max);
}


void print_range_of_ushort_type(char name[], unsigned short min, unsigned short max) {
    printf("Type:%s\t Min: %hu\t Max: %hu\n", name, min, max);
}

void print_range_of_float_type(char name[], float min, float max) {
    printf("Type:%s\t Min:%e\t Max: %e\n", name, min, max);
}

void print_range_of_double_type(char name[], double min, double max) {
    printf("Type:%s\t Min:%e\t Max: %e\n", name, min, max);
}

