#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__ChallengeVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ChallengeVisibility::ChallengeVisibility(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::ChallengeVisibility::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::ChallengeVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::ChallengeVisibility  ::Oculus::Platform::ChallengeVisibility::Unknown{0};
constexpr ::Oculus::Platform::ChallengeVisibility  ::Oculus::Platform::ChallengeVisibility::InviteOnly{1};
constexpr ::Oculus::Platform::ChallengeVisibility  ::Oculus::Platform::ChallengeVisibility::Public{2};
constexpr ::Oculus::Platform::ChallengeVisibility  ::Oculus::Platform::ChallengeVisibility::Private{3};
} // end anonymous namespace
