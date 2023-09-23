#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsProtocol;
}
// Type: Org.BouncyCastle.Crypto.Tls::DtlsProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1222))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsProtocol
class CORDL_TYPE DtlsProtocol : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DtlsProtocol() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsProtocol", modifiers: " const&", def_value: None }]
constexpr DtlsProtocol(DtlsProtocol const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsProtocol", modifiers: "&&", def_value: None }]
constexpr DtlsProtocol(DtlsProtocol&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsProtocol(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtlsProtocol& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsProtocol& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsProtocol& operator=(DtlsProtocol&& o) noexcept = default;
  constexpr DtlsProtocol& operator=(DtlsProtocol const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mSecureRandom, put=__set_mSecureRandom))  mSecureRandom;

constexpr void __set_mSecureRandom(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mSecureRandom() const;


// Methods

// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit DtlsProtocol(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xed9888 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method ProcessFinished addr 0xed9900 size 0x130 virtual true final false
 void ProcessFinished(::ArrayW<uint8_t> body, ::ArrayW<uint8_t> expected_verify_data) ;

/// @brief Method ApplyMaxFragmentLengthExtension addr 0xed9a30 size 0xa0 virtual false final false
static void ApplyMaxFragmentLengthExtension(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer, int16_t maxFragmentLength) ;

/// @brief Method EvaluateMaxFragmentLengthExtension addr 0xed9ad0 size 0xac virtual false final false
static int16_t EvaluateMaxFragmentLengthExtension(bool resumedSession, System::Collections::IDictionary clientExtensions, System::Collections::IDictionary serverExtensions, uint8_t alertDescription) ;

/// @brief Method GenerateCertificate addr 0xed9b7c size 0x84 virtual false final false
static ::ArrayW<uint8_t> GenerateCertificate(Org::BouncyCastle::Crypto::Tls::Certificate certificate) ;

/// @brief Method GenerateSupplementalData addr 0xed9c00 size 0x7c virtual false final false
static ::ArrayW<uint8_t> GenerateSupplementalData(System::Collections::IList supplementalData) ;

/// @brief Method ValidateSelectedCipherSuite addr 0xed9c7c size 0xb4 virtual false final false
static void ValidateSelectedCipherSuite(int32_t selectedCipherSuite, uint8_t alertDescription) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DtlsProtocol);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DtlsProtocol, "Org.BouncyCastle.Crypto.Tls", "DtlsProtocol");
