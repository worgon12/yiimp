#ifndef PHICHOX_H
#define PHICHOX_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

void phichox_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif