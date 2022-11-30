#ifdef __cplusplus
#   include <cstdlib>
#   include <cstdio>
#else
#   include <stdlib.h>
#   include <stdio.h>
#endif

#ifdef __cplusplus
    extern "C" std::FILE* open_file(const char* path);
#else
    FILE* open_file(const char* path);
#endif
