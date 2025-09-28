// #include "enums.c"
#include "functions.c"

int addAirplan(char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int index);
int getSearch(int *ids, char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int index);
void update(char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int currentIndex);
void delete(int *ids, char (*model)[100], int *capacity, int *status, char (*enterDate)[100], int currentIndex, int lastIndex);