#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "sysendian.h"

#include "ar2/argon2.h"
#include "ar2/core.h"

void argon2d_uis_hash(const unsigned char* input, unsigned char* output, unsigned int len)
{
	argon2d_hash_raw(1, 4096, 1, input, 80, input, 80, output, 32);
}

