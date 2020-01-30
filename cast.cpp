
#include <stdio.h>
#include <cstdint>

int main()
{
    int ret;
    double dNeg = 3.25e-9, dPos = 4.888;
    uint32_t uNegC = (uint32_t)dNeg, uPosC = (uint32_t)dPos;
    uint32_t uNeg = static_cast<uint32_t>(dNeg), uPos = static_cast<uint32_t>(dPos);

    ret = printf("original double. dNeg:%g, dPos:%g\n", dNeg, dPos);
    ret = printf("C-style uint32_t. uNegC:%u, uPosC:%u\n", uNegC, uPosC);
    ret = printf("C++-static uint32_t. uNeg:%u, uPos:%u\n", uNeg, uPos);

    return ret;
}
