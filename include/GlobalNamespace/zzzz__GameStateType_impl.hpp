#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameStateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameStateType::GameStateType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::GameStateType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::GameStateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::GameStateType  ::GlobalNamespace::GameStateType::EmptyServer{0};
constexpr ::GlobalNamespace::GameStateType  ::GlobalNamespace::GameStateType::SelectingLevel{1};
constexpr ::GlobalNamespace::GameStateType  ::GlobalNamespace::GameStateType::StartingLevel{2};
constexpr ::GlobalNamespace::GameStateType  ::GlobalNamespace::GameStateType::RunningLevel{3};
} // end anonymous namespace
