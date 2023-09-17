#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__PlatformInitializeResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PlatformInitializeResult::PlatformInitializeResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::PlatformInitializeResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::PlatformInitializeResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::Success{0};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::Uninitialized{-1};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::PreLoaded{-2};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::FileInvalid{-3};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::SignatureInvalid{-4};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::UnableToVerify{-5};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::VersionMismatch{-6};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::Unknown{-7};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::InvalidCredentials{-8};
constexpr ::Oculus::Platform::PlatformInitializeResult  ::Oculus::Platform::PlatformInitializeResult::NotEntitled{-9};
} // end anonymous namespace
