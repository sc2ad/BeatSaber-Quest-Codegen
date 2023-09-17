#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ServiceProvider::ServiceProvider(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::ServiceProvider::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::ServiceProvider::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::ServiceProvider  ::Oculus::Platform::ServiceProvider::Unknown{0};
constexpr ::Oculus::Platform::ServiceProvider  ::Oculus::Platform::ServiceProvider::Dropbox{1};
constexpr ::Oculus::Platform::ServiceProvider  ::Oculus::Platform::ServiceProvider::Facebook{2};
constexpr ::Oculus::Platform::ServiceProvider  ::Oculus::Platform::ServiceProvider::Google{3};
constexpr ::Oculus::Platform::ServiceProvider  ::Oculus::Platform::ServiceProvider::Instagram{4};
constexpr ::Oculus::Platform::ServiceProvider  ::Oculus::Platform::ServiceProvider::RemoteMedia{5};
} // end anonymous namespace
