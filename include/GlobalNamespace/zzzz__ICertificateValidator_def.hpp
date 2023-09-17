#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace GlobalNamespace {
class DnsEndPoint;
}
// Forward declare root types
namespace GlobalNamespace {
class ICertificateValidator;
}
// Type: ::ICertificateValidator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12719))
// CS Name: ICertificateValidator
class CORDL_TYPE ICertificateValidator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICertificateValidator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICertificateValidator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ValidateCertificateChain addr 0x0 size 0xffffffffffffffff virtual true final false
 void ValidateCertificateChain(::GlobalNamespace::DnsEndPoint endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ICertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICertificateValidator, "", "ICertificateValidator");
