#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureDeformatter;
}
// Type: System.Security.Cryptography::RSAPKCS1SignatureDeformatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2915))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2979))
// CS Name: System.Security.Cryptography.RSAPKCS1SignatureDeformatter
class CORDL_TYPE RSAPKCS1SignatureDeformatter : public System::Security::Cryptography::AsymmetricSignatureDeformatter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RSAPKCS1SignatureDeformatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDeformatter", modifiers: " const&", def_value: None }]
constexpr RSAPKCS1SignatureDeformatter(RSAPKCS1SignatureDeformatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDeformatter", modifiers: "&&", def_value: None }]
constexpr RSAPKCS1SignatureDeformatter(RSAPKCS1SignatureDeformatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSAPKCS1SignatureDeformatter(void* ptr) noexcept : System::Security::Cryptography::AsymmetricSignatureDeformatter(ptr) {
}


  constexpr RSAPKCS1SignatureDeformatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSAPKCS1SignatureDeformatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSAPKCS1SignatureDeformatter& operator=(RSAPKCS1SignatureDeformatter&& o) noexcept = default;
  constexpr RSAPKCS1SignatureDeformatter& operator=(RSAPKCS1SignatureDeformatter const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::RSA __declspec(property(get=__get_rsa, put=__set_rsa))  rsa;

constexpr void __set_rsa(System::Security::Cryptography::RSA value) ;

constexpr System::Security::Cryptography::RSA __get_rsa() const;

 ::StringW __declspec(property(get=__get_hashName, put=__set_hashName))  hashName;

constexpr void __set_hashName(::StringW value) ;

constexpr ::StringW __get_hashName() const;


// Methods

// Ctor Parameters []
explicit RSAPKCS1SignatureDeformatter() ;

/// @brief Method .ctor addr 0x2303284 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "key", ty: "System::Security::Cryptography::AsymmetricAlgorithm", modifiers: "", def_value: None }]
explicit RSAPKCS1SignatureDeformatter(System::Security::Cryptography::AsymmetricAlgorithm key) ;

/// @brief Method .ctor addr 0x2307f14 size 0x34 virtual false final false
 void _ctor(System::Security::Cryptography::AsymmetricAlgorithm key) ;

/// @brief Method SetHashAlgorithm addr 0x2307f48 size 0x60 virtual true final false
 void SetHashAlgorithm(::StringW strName) ;

/// @brief Method SetKey addr 0x2307fa8 size 0xec virtual true final false
 void SetKey(System::Security::Cryptography::AsymmetricAlgorithm key) ;

/// @brief Method VerifySignature addr 0x2308094 size 0x160 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RSAPKCS1SignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SignatureDeformatter, "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
