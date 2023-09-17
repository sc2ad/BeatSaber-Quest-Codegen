#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RoomJoinPolicy::RoomJoinPolicy(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::RoomJoinPolicy::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::RoomJoinPolicy::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::RoomJoinPolicy  ::Oculus::Platform::RoomJoinPolicy::None{0};
constexpr ::Oculus::Platform::RoomJoinPolicy  ::Oculus::Platform::RoomJoinPolicy::Everyone{1};
constexpr ::Oculus::Platform::RoomJoinPolicy  ::Oculus::Platform::RoomJoinPolicy::FriendsOfMembers{2};
constexpr ::Oculus::Platform::RoomJoinPolicy  ::Oculus::Platform::RoomJoinPolicy::FriendsOfOwner{3};
constexpr ::Oculus::Platform::RoomJoinPolicy  ::Oculus::Platform::RoomJoinPolicy::InvitedUsers{4};
constexpr ::Oculus::Platform::RoomJoinPolicy  ::Oculus::Platform::RoomJoinPolicy::Unknown{5};
} // end anonymous namespace
