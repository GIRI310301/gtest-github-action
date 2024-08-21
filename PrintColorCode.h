
//While having error
//int printColorMap();

//After refactoring
int printColorMap(void(*printer)(int colorCode,const char* majorColor,const char* mincorColor));
