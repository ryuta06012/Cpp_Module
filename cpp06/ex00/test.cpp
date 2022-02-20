#include <iostream>
#include <limits>
#include <stdlib.h>
#include <errno.h>

#define IMAX std::numeric_limits<int>::max()
#define IMIN std::numeric_limits<int>::min()
#define FMAX std::numeric_limits<float>::max()
#define FMIN std::numeric_limits<float>::min()
#define CMAX std::numeric_limits<char>::max()
#define CMIN std::numeric_limits<char>::min()

void ftoc(float num) {
    if (num < CMIN || num > CMAX)
        throw std::exception();
    return putChar(static_cast<char>(num));
}

void ftoi(float num) {
    if (num < IMIN || num > IMAX)
        throw std::exception();
    return putInt(static_cast<int>(num));
}

void dtoc(double num) {
    if (num < CMIN || num > CMAX)
        throw std::exception();
    return putChar(static_cast<char>(num));
}

void dtof(double num) {
    if (num < FMIN || num > FMAX)
        throw std::exception();
    return putFloat(static_cast<float>(num));
}

void dtoi(double num) {
    if (num < IMIN || num > IMAX)
        throw std::exception();
    return putInt(static_cast<int>(num));
}

double ft_strtod(const char *str)
{
    char* end;
    errno = 0;
    double x = std::strtod(str, &end);
    if (end != NULL)
        printf("endp = %s\n", end);
    if (str == end) {
        std::cout << "p == end" << std::endl;
    }
    if (errno == ERANGE) {
        std::cout << errno << ":" << ERANGE << std::endl;
        std::cout << "out_of_range" << std::endl;
    }
    return x;
}

int ft_atoi(const char *str) {
    double num;

    num = ft_strtod(str);
    if (num < INT_MIN || num > INT_MAX)
        throw std::exception();
    return static_cast<int>(num);
}

float ft_atof(const char *str) {
    double num;

    num = ft_strtod(str);
    if (num < FMIN || num > FMAX)
        throw std::exception();
    return static_cast<float>(num);
}

int main(){
    
    /* DtoC(dnum);
    DtoF(dnum);
    DtoI(dnum);
    DtoD(dnum); */
    std::cout << "int_x = " << static_cast<int>(x) << std::endl;
    std::cout << "char_x = " << static_cast<char>(x) << std::endl;
    std::cout << "float_x = " << static_cast<float>(x) << std::endl;
    std::cout << "dnum = " << dnum << std::endl;

    return EXIT_SUCCESS;
}
