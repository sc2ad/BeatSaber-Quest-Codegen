#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct RevocationKeyTag;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class RevocationKey;
}
// Type: Org.BouncyCastle.Bcpg::RevocationKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(542))
// CS Name: Org.BouncyCastle.Bcpg.RevocationKey
class CORDL_TYPE RevocationKey : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RevocationKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationKey", modifiers: " const&", def_value: None }]
constexpr RevocationKey(RevocationKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevocationKey", modifiers: "&&", def_value: None }]
constexpr RevocationKey(RevocationKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevocationKey(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr RevocationKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevocationKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevocationKey& operator=(RevocationKey&& o) noexcept = default;
  constexpr RevocationKey& operator=(RevocationKey const& o) noexcept = default;
                


// Properties

 Org::BouncyCastle::Bcpg::RevocationKeyTag __declspec(property(get=get_SignatureClass))  SignatureClass;

 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_Algorithm))  Algorithm;


// Methods

// Ctor Parameters [CppParam { name: "isCritical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit RevocationKey(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113e62c size 0x48 virtual false final false
 void _ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "isCritical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "signatureClass", ty: "Org::BouncyCastle::Bcpg::RevocationKeyTag", modifiers: "", def_value: None }, CppParam { name: "keyAlgorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "fingerprint", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit RevocationKey(bool isCritical, Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::ArrayW<uint8_t> fingerprint) ;

/// @brief Method .ctor addr 0x113e674 size 0x54 virtual false final false
 void _ctor(bool isCritical, Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::ArrayW<uint8_t> fingerprint) ;

/// @brief Method CreateData addr 0x113e6c8 size 0xac virtual false final false
static ::ArrayW<uint8_t> CreateData(Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::ArrayW<uint8_t> fingerprint) ;

/// @brief Method get_SignatureClass addr 0x113e774 size 0x28 virtual true final false
 Org::BouncyCastle::Bcpg::RevocationKeyTag get_SignatureClass() ;

/// @brief Method get_Algorithm addr 0x113e79c size 0x2c virtual true final false
 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm() ;

/// @brief Method GetFingerprint addr 0x113e7c8 size 0x8c virtual true final false
 ::ArrayW<uint8_t> GetFingerprint() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::RevocationKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::RevocationKey, "Org.BouncyCastle.Bcpg", "RevocationKey");
