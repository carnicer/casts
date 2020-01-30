
#include <stdio.h>

#include <cstdint>
#include <string>

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

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        for(int i = 1 ; i < argc ; ++i)
        {
            printf("%s\n", argv[i]);
            double d = std::stod(std::string(argv[i]));
            displayDouble(d);
            puts("====");
        }
    }
    else
    {
        puts("no parameters provided, using default test values");
        displayDouble(2.5e-4);
        displayDouble(2.5e+4);
    }
}

