#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__VerticalAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::VerticalAlignmentOptions::VerticalAlignmentOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::VerticalAlignmentOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::VerticalAlignmentOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::VerticalAlignmentOptions  ::TMPro::VerticalAlignmentOptions::Top{256};
constexpr ::TMPro::VerticalAlignmentOptions  ::TMPro::VerticalAlignmentOptions::Middle{512};
constexpr ::TMPro::VerticalAlignmentOptions  ::TMPro::VerticalAlignmentOptions::Bottom{1024};
constexpr ::TMPro::VerticalAlignmentOptions  ::TMPro::VerticalAlignmentOptions::Baseline{2048};
constexpr ::TMPro::VerticalAlignmentOptions  ::TMPro::VerticalAlignmentOptions::Geometry{4096};
constexpr ::TMPro::VerticalAlignmentOptions  ::TMPro::VerticalAlignmentOptions::Capline{8192};
} // end anonymous namespace
