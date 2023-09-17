#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__LightType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightType::LightType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::LightType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::LightType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::LightType  ::UnityEngine::LightType::Spot{0};
constexpr ::UnityEngine::LightType  ::UnityEngine::LightType::Directional{1};
constexpr ::UnityEngine::LightType  ::UnityEngine::LightType::Point{2};
constexpr ::UnityEngine::LightType  ::UnityEngine::LightType::Area{3};
constexpr ::UnityEngine::LightType  ::UnityEngine::LightType::Rectangle{3};
constexpr ::UnityEngine::LightType  ::UnityEngine::LightType::Disc{4};
} // end anonymous namespace
