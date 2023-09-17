#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__RoomType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RoomType::RoomType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::RoomType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::RoomType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::RoomType  ::Oculus::Platform::RoomType::Unknown{0};
constexpr ::Oculus::Platform::RoomType  ::Oculus::Platform::RoomType::Matchmaking{1};
constexpr ::Oculus::Platform::RoomType  ::Oculus::Platform::RoomType::Moderated{2};
constexpr ::Oculus::Platform::RoomType  ::Oculus::Platform::RoomType::Private{3};
constexpr ::Oculus::Platform::RoomType  ::Oculus::Platform::RoomType::Solo{4};
} // end anonymous namespace
