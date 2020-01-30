
#include <stdio.h>

#include <cstdint>
#include <string>
#include <stdexcept>

int displayDouble(double d)
{
    int ret;
    uint32_t uCc = (uint32_t)d;
    uint32_t uSc = static_cast<uint32_t>(d);

    ret = printf("original double:%g\n", d);
    ret = printf("C-style uint32_t:     %u\n", uCc);
    ret = printf("C++-static uint32_t:  %u\n", uSc);

    return ret;
}

int displaySeparator()
{
    return puts("====");
}

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        for(int i = 1 ; i < argc ; ++i)
        {
            double d;
            printf("%s\n", argv[i]);
            try{
                d = std::stod(std::string(argv[i]));
            }
            catch(const std::invalid_argument& exception_IA)
            {
                printf("wrong double format\n");
                displaySeparator();
                continue;
            }
            displayDouble(d);
            displaySeparator();
        }
    }
    else
    {
        puts("no parameters provided, using default test values");

        displayDouble(2.5e-4);
        displaySeparator();

        displayDouble(2.5e+4);
        displaySeparator();
    }
}

