#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // Integer Data Type
    printf("\nSize of int = %zu bytes", sizeof(int)); // Size of integer type
    printf("\nMinimum int value = %d", INT_MIN);      // Smallest possible int value
    printf("\nMaximum int value = %d", INT_MAX);      // Largest possible int value
    printf("\nMaximum unsigned int value = %u", UINT_MAX); // Largest unsigned int (0 to UINT_MAX)

    // Character Data Type
    printf("\n\nSize of char = %zu byte", sizeof(char)); // Size of char (usually 1 byte)
    printf("\nMinimum char value = %d", CHAR_MIN);      // Smallest signed char (-128 on most systems)
    printf("\nMaximum char value = %d", CHAR_MAX);      // Largest signed char (127 on most systems)
    printf("\nMaximum unsigned char value = %d", UCHAR_MAX); // Largest unsigned char (0 to 255)

    // Floating-Point Data Type
    printf("\n\nSize of float = %zu bytes", sizeof(float)); // Size of float (usually 4 bytes)
    printf("\nMinimum float value = %e", FLT_MIN);    // Smallest positive normal float
    printf("\nMaximum float value = %e", FLT_MAX);    // Largest float value

    // Double Data Type
    printf("\n\nSize of double = %zu bytes", sizeof(double)); // Size of double (usually 8 bytes)
    printf("\nMinimum double value = %e", DBL_MIN);  // Smallest positive normal double
    printf("\nMaximum double value = %e", DBL_MAX);  // Largest double value

    // Short Integer Data Type
    printf("\n\nSize of short = %zu bytes", sizeof(short)); // Size of short integer (usually 2 bytes)
    printf("\nMinimum short value = %d", SHRT_MIN);   // Smallest short integer (-32,768 on most systems)
    printf("\nMaximum short value = %d", SHRT_MAX);   // Largest short integer (32,767 on most systems)
    printf("\nMaximum unsigned short value = %u", USHRT_MAX); // Largest unsigned short (0 to 65,535)

    // Long Integer Data Type
    printf("\n\nSize of long = %zu bytes", sizeof(long)); // Size of long integer (usually 4 or 8 bytes)
    printf("\nMinimum long value = %ld", LONG_MIN);   // Smallest long integer
    printf("\nMaximum long value = %ld", LONG_MAX);   // Largest long integer
    printf("\nMaximum unsigned long value = %lu", ULONG_MAX); // Largest unsigned long (0 to ULONG_MAX)

    // Long Double Data Type
    printf("\n\nSize of long double = %zu bytes", sizeof(long double)); // Size of long double (varies: 10, 12, or 16 bytes)
    printf("\nMinimum long double value = %Le", LDBL_MIN); // Smallest long double value
    printf("\nMaximum long double value = %Le", LDBL_MAX); // Largest long double value

    return 0;
}
