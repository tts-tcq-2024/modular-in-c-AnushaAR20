#include <stdio.h>
#include <colour_sets.h>
#inlcude <colour_pair_to_string_convert.h>

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

