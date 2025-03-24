/* Copyright 2024 The JAX Authors

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

#ifndef TENSORFLOW_COMPILER_XLA_PYTHON_CONFIG_H_
#define TENSORFLOW_COMPILER_XLA_PYTHON_CONFIG_H_

#include <vector>

// placeholder for index annotation headers
#include "nanobind/nanobind.h"

namespace jax {

// Returns the set of configuration values that should be included in the JIT
// cache key.
std::vector<nanobind::object> JitConfigs();

void BuildConfigSubmodule(nanobind::module_& m);

}  // namespace jax

#endif  // TENSORFLOW_COMPILER_XLA_PYTHON_CONFIG_H_
