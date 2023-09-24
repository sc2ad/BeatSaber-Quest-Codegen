#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class CertificateStatus;
}
// Type: Org.BouncyCastle.Ocsp::CertificateStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1611))
// CS Name: Org.BouncyCastle.Ocsp.CertificateStatus
class CORDL_TYPE CertificateStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CertificateStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: " const&", def_value: None }]
constexpr CertificateStatus(CertificateStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
constexpr CertificateStatus(CertificateStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateStatus& operator=(CertificateStatus&& o) noexcept = default;
  constexpr CertificateStatus& operator=(CertificateStatus const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Ocsp::CertificateStatus __declspec(property(get=__get_Good, put=__set_Good))  Good;

static void __set_Good(Org::BouncyCastle::Ocsp::CertificateStatus value) ;

static Org::BouncyCastle::Ocsp::CertificateStatus __get_Good() ;


// Methods

static Org::BouncyCastle::Ocsp::CertificateStatus New_ctor() ;

/// @brief Method .ctor addr 0x10133d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::CertificateStatus, "Org.BouncyCastle.Ocsp", "CertificateStatus");
