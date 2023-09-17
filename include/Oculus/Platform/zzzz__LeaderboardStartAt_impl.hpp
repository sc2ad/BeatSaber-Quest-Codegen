#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__LeaderboardStartAt_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LeaderboardStartAt::LeaderboardStartAt(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::LeaderboardStartAt::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::LeaderboardStartAt::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::LeaderboardStartAt  ::Oculus::Platform::LeaderboardStartAt::Top{0};
constexpr ::Oculus::Platform::LeaderboardStartAt  ::Oculus::Platform::LeaderboardStartAt::CenteredOnViewer{1};
constexpr ::Oculus::Platform::LeaderboardStartAt  ::Oculus::Platform::LeaderboardStartAt::CenteredOnViewerOrTop{2};
constexpr ::Oculus::Platform::LeaderboardStartAt  ::Oculus::Platform::LeaderboardStartAt::Unknown{3};
} // end anonymous namespace
