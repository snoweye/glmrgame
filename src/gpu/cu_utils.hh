#ifndef _GLMRGAME_CU_UTILS_H_
#define _GLMRGAME_CU_UTILS_H_


#include <cuda_runtime.h>

#define TPB 512

#define PRINT_CUDA_ERROR() printf("%s\n", cudaGetErrorString(cudaGetLastError()));


#endif
