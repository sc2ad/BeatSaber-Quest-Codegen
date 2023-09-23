#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Kisa {
class KisaObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Kisa::KisaObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Kisa {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(193))
// CS Name: Org.BouncyCastle.Asn1.Kisa.KisaObjectIdentifiers
class CORDL_TYPE KisaObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KisaObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "KisaObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr KisaObjectIdentifiers(KisaObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KisaObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr KisaObjectIdentifiers(KisaObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KisaObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KisaObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KisaObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KisaObjectIdentifiers& operator=(KisaObjectIdentifiers&& o) noexcept = default;
  constexpr KisaObjectIdentifiers& operator=(KisaObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSeedCbc, put=__set_IdSeedCbc))  IdSeedCbc;

static void __set_IdSeedCbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSeedCbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdNpkiAppCmsSeedWrap, put=__set_IdNpkiAppCmsSeedWrap))  IdNpkiAppCmsSeedWrap;

static void __set_IdNpkiAppCmsSeedWrap(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdNpkiAppCmsSeedWrap() ;


// Methods

// Ctor Parameters []
explicit KisaObjectIdentifiers() ;

/// @brief Method .ctor addr 0xeed990 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Kisa
NEED_NO_BOX(Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers, "Org.BouncyCastle.Asn1.Kisa", "KisaObjectIdentifiers");
