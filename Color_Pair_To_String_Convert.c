#include <stdio.h>
#include<Colour_Sets.h>
#inlcude<Color_Pair_To_String_Convert.h>

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

