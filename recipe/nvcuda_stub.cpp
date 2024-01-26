#include <cuda.h>

extern "C" {

CUresult CUDAAPI cuInit(unsigned int) {
  return CUDA_ERROR_STUB_LIBRARY;
}

CUresult CUDAAPI cuDeviceGet(CUdevice *, int) {
  return CUDA_ERROR_STUB_LIBRARY;
}

CUresult CUDAAPI cuDevicePrimaryCtxSetFlags(CUdevice, unsigned int) {
  return CUDA_ERROR_STUB_LIBRARY;
}

}
