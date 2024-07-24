#include <stdio.h>
#include "colour.h"
#include "get_pairnumber_from_colour"

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
