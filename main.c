#include <stdio.h>
#include <assert.h> 
#include "colour.h"
#include "get_color_from_pairnumber.h"
#include "colour_pair_to_string_convert.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
