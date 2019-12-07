/* Copyright 2015 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// Common helper functions used for dealing with CUDA API datatypes.
//
// These are typically placed here for use by multiple source components (for
// example, BLAS and executor components).
#ifndef TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_HELPERS_H_
#define TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_HELPERS_H_

#include "tensorflow/stream_executor/gpu/gpu_helpers.h"

namespace stream_executor {
namespace cuda {

// A helper function to decide whether to enable deterministic cuDNN
// functionality.
bool RequireCuDNNDeterminism();

} // namespace cuda
} // namespace stream_executor

#endif  // TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_HELPERS_H_
