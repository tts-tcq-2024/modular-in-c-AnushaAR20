#ifndef COLOUR_H
#define COLOUR_H

const int MAX_COLORPAIR_NAME_CHARS = 16;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif
