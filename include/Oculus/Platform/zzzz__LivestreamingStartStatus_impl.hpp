#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::LivestreamingStartStatus::LivestreamingStartStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::LivestreamingStartStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::LivestreamingStartStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::Success{1};
constexpr Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::Unknown{0};
constexpr Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::NoPackageSet{-1};
constexpr Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::NoFbConnect{-2};
constexpr Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::NoSessionId{-3};
constexpr Oculus::Platform::LivestreamingStartStatus  Oculus::Platform::LivestreamingStartStatus::MissingParameters{-4};
