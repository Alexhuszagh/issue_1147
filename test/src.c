#include "inc.h"

#ifdef __cplusplus
    extern "C" std::FILE* open_file(const char* path)
    {
        return std::fopen(path, "r");
    }
#else
    FILE* open_file(const char* path)
    {
        return fopen(path, "r");
    }
#endif

