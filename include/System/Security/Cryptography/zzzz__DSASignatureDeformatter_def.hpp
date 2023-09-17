#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureDeformatter;
}
// Type: System.Security.Cryptography::DSASignatureDeformatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2915))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2928))
// CS Name: System.Security.Cryptography.DSASignatureDeformatter
class CORDL_TYPE DSASignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DSASignatureDeformatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureDeformatter", modifiers: " const&", def_value: None }]
constexpr DSASignatureDeformatter(DSASignatureDeformatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureDeformatter", modifiers: "&&", def_value: None }]
constexpr DSASignatureDeformatter(DSASignatureDeformatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DSASignatureDeformatter(void* ptr) noexcept : ::System::Security::Cryptography::AsymmetricSignatureDeformatter(ptr) {
}


  constexpr DSASignatureDeformatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DSASignatureDeformatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DSASignatureDeformatter& operator=(DSASignatureDeformatter&& o) noexcept = default;
  constexpr DSASignatureDeformatter& operator=(DSASignatureDeformatter const& o) noexcept = default;
                


// Fields

 ::System::Security::Cryptography::DSA __declspec(property(get=__get__dsaKey, put=__set__dsaKey))  _dsaKey;

constexpr void __set__dsaKey(::System::Security::Cryptography::DSA value) ;

constexpr ::System::Security::Cryptography::DSA __get__dsaKey() const;

 ::StringW __declspec(property(get=__get__oid, put=__set__oid))  _oid;

constexpr void __set__oid(::StringW value) ;

constexpr ::StringW __get__oid() const;


// Methods

// Ctor Parameters []
explicit DSASignatureDeformatter() ;

/// @brief Method .ctor addr 0x22f2b28 size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Security::Cryptography::AsymmetricAlgorithm", modifiers: "", def_value: None }]
explicit DSASignatureDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm key) ;

/// @brief Method .ctor addr 0x22f2ba8 size 0xf4 virtual false final false
 void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm key) ;

/// @brief Method SetKey addr 0x22f2c9c size 0xec virtual true final false
 void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm key) ;

/// @brief Method SetHashAlgorithm addr 0x22f2d88 size 0xd0 virtual true final false
 void SetHashAlgorithm(::StringW strName) ;

/// @brief Method VerifySignature addr 0x22f2e58 size 0xf4 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureDeformatter, "System.Security.Cryptography", "DSASignatureDeformatter");
