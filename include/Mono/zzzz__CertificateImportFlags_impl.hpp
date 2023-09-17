#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::CertificateImportFlags::CertificateImportFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::CertificateImportFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::CertificateImportFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Mono::CertificateImportFlags  ::Mono::CertificateImportFlags::None{0};
constexpr ::Mono::CertificateImportFlags  ::Mono::CertificateImportFlags::DisableNativeBackend{1};
constexpr ::Mono::CertificateImportFlags  ::Mono::CertificateImportFlags::DisableAutomaticFallback{2};
} // end anonymous namespace
