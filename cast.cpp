
#include <stdio.h>
#include <cstdint>

int displayDouble(double d)
{
    int ret;
    uint32_t uCc = (uint32_t)d;
    uint32_t uSc = static_cast<uint32_t>(d);

    ret = printf("original double:%g\n", d);
    ret = printf("C-style uint32_t:     %u\n", uCc);
    ret = printf("C++-static uint32_t:  %u\n", uSc);
    puts("====");

    return ret;
}

int main()
{
    displayDouble(2.5e-4);
    displayDouble(2.5e+4);
}

