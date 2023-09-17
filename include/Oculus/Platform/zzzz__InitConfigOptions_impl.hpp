#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__InitConfigOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::InitConfigOptions::InitConfigOptions(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::InitConfigOptions::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Oculus::Platform::InitConfigOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::InitConfigOptions  ::Oculus::Platform::InitConfigOptions::DisableP2pNetworking{484335070u};
} // end anonymous namespace
