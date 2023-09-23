#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::ArcVisibilityType::ArcVisibilityType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::ArcVisibilityType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::ArcVisibilityType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::ArcVisibilityType  GlobalNamespace::ArcVisibilityType::None{0};
constexpr GlobalNamespace::ArcVisibilityType  GlobalNamespace::ArcVisibilityType::Low{1};
constexpr GlobalNamespace::ArcVisibilityType  GlobalNamespace::ArcVisibilityType::Standard{2};
constexpr GlobalNamespace::ArcVisibilityType  GlobalNamespace::ArcVisibilityType::High{3};
