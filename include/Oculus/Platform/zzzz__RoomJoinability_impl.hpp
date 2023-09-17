#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__RoomJoinability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RoomJoinability::RoomJoinability(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::RoomJoinability::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::RoomJoinability::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::RoomJoinability  ::Oculus::Platform::RoomJoinability::Unknown{0};
constexpr ::Oculus::Platform::RoomJoinability  ::Oculus::Platform::RoomJoinability::AreIn{1};
constexpr ::Oculus::Platform::RoomJoinability  ::Oculus::Platform::RoomJoinability::AreKicked{2};
constexpr ::Oculus::Platform::RoomJoinability  ::Oculus::Platform::RoomJoinability::CanJoin{3};
constexpr ::Oculus::Platform::RoomJoinability  ::Oculus::Platform::RoomJoinability::IsFull{4};
constexpr ::Oculus::Platform::RoomJoinability  ::Oculus::Platform::RoomJoinability::NoViewer{5};
constexpr ::Oculus::Platform::RoomJoinability  ::Oculus::Platform::RoomJoinability::PolicyPrevents{6};
} // end anonymous namespace
