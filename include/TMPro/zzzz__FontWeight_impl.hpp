#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__FontWeight_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontWeight::FontWeight(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::FontWeight::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::FontWeight::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::Thin{100};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::ExtraLight{200};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::Light{300};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::Regular{400};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::Medium{500};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::SemiBold{600};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::Bold{700};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::Heavy{800};
constexpr ::TMPro::FontWeight  ::TMPro::FontWeight::Black{900};
} // end anonymous namespace
