#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__HandleAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::HandleAxis::HandleAxis(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::HandleAxis::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::HandleAxis::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::HandleAxis  ::UnityEngine::ProBuilder::HandleAxis::X{1};
constexpr ::UnityEngine::ProBuilder::HandleAxis  ::UnityEngine::ProBuilder::HandleAxis::Y{2};
constexpr ::UnityEngine::ProBuilder::HandleAxis  ::UnityEngine::ProBuilder::HandleAxis::Z{4};
constexpr ::UnityEngine::ProBuilder::HandleAxis  ::UnityEngine::ProBuilder::HandleAxis::Free{8};
} // end anonymous namespace
