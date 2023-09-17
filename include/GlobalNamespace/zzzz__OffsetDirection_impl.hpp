#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OffsetDirection::OffsetDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::OffsetDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OffsetDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::Up{0};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::Down{1};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::Left{2};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::Right{3};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::UpLeft{4};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::UpRight{5};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::DownLeft{6};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::DownRight{7};
constexpr ::GlobalNamespace::OffsetDirection  ::GlobalNamespace::OffsetDirection::None{9};
} // end anonymous namespace
