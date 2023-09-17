#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__NodeStatePropertyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NodeStatePropertyType::NodeStatePropertyType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::NodeStatePropertyType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::NodeStatePropertyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::NodeStatePropertyType  ::GlobalNamespace::NodeStatePropertyType::Acceleration{0};
constexpr ::GlobalNamespace::NodeStatePropertyType  ::GlobalNamespace::NodeStatePropertyType::AngularAcceleration{1};
constexpr ::GlobalNamespace::NodeStatePropertyType  ::GlobalNamespace::NodeStatePropertyType::Velocity{2};
constexpr ::GlobalNamespace::NodeStatePropertyType  ::GlobalNamespace::NodeStatePropertyType::AngularVelocity{3};
constexpr ::GlobalNamespace::NodeStatePropertyType  ::GlobalNamespace::NodeStatePropertyType::Position{4};
constexpr ::GlobalNamespace::NodeStatePropertyType  ::GlobalNamespace::NodeStatePropertyType::Orientation{5};
} // end anonymous namespace
