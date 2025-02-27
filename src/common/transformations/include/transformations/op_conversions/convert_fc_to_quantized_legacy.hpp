// Copyright (C) 2018-2024 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/pass/matcher_pass.hpp"
#include "transformations_visibility.hpp"

namespace ov {
namespace pass {

class TRANSFORMATIONS_API ConvertFCToFCQuantizedLegacy;

}  // namespace pass
}  // namespace ov

class ov::pass::ConvertFCToFCQuantizedLegacy : public ov::pass::MatcherPass {
public:
    OPENVINO_MATCHER_PASS_RTTI("ConvertFCToFCQuantizedLegacy");
    ConvertFCToFCQuantizedLegacy();
};
