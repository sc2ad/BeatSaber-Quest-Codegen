#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextAnchor::TextAnchor(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TextAnchor::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextAnchor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::UpperLeft{0};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::UpperCenter{1};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::UpperRight{2};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::MiddleLeft{3};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::MiddleCenter{4};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::MiddleRight{5};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::LowerLeft{6};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::LowerCenter{7};
constexpr ::UnityEngine::TextAnchor  ::UnityEngine::TextAnchor::LowerRight{8};
} // end anonymous namespace
