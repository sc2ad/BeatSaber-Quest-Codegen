#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__HandleOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::HandleOrientation::HandleOrientation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::HandleOrientation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::HandleOrientation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::HandleOrientation  ::UnityEngine::ProBuilder::HandleOrientation::World{0};
constexpr ::UnityEngine::ProBuilder::HandleOrientation  ::UnityEngine::ProBuilder::HandleOrientation::ActiveObject{1};
constexpr ::UnityEngine::ProBuilder::HandleOrientation  ::UnityEngine::ProBuilder::HandleOrientation::ActiveElement{2};
} // end anonymous namespace
