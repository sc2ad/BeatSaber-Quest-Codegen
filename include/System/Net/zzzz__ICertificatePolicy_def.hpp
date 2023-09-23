#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System::Net {
class ServicePoint;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace System::Net {
class ICertificatePolicy;
}
// Type: System.Net::ICertificatePolicy
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7920))
// CS Name: System.Net.ICertificatePolicy
class CORDL_TYPE ICertificatePolicy : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICertificatePolicy() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICertificatePolicy(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CheckValidationResult addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CheckValidationResult(System::Net::ServicePoint srvPoint, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Net::WebRequest request, int32_t certificateProblem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ICertificatePolicy);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ICertificatePolicy, "System.Net", "ICertificatePolicy");
