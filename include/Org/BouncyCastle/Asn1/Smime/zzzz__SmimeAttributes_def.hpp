#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeAttributes;
}
// Type: Org.BouncyCastle.Asn1.Smime::SmimeAttributes
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(291))
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeAttributes
class CORDL_TYPE SmimeAttributes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SmimeAttributes() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeAttributes", modifiers: " const&", def_value: None }]
constexpr SmimeAttributes(SmimeAttributes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeAttributes", modifiers: "&&", def_value: None }]
constexpr SmimeAttributes(SmimeAttributes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmimeAttributes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SmimeAttributes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmimeAttributes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmimeAttributes& operator=(SmimeAttributes&& o) noexcept = default;
  constexpr SmimeAttributes& operator=(SmimeAttributes const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SmimeCapabilities, put=__set_SmimeCapabilities))  SmimeCapabilities;

static void __set_SmimeCapabilities(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SmimeCapabilities() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EncrypKeyPref, put=__set_EncrypKeyPref))  EncrypKeyPref;

static void __set_EncrypKeyPref(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EncrypKeyPref() ;


// Methods

// Ctor Parameters []
explicit SmimeAttributes() ;

/// @brief Method .ctor addr 0xfe61a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(Org::BouncyCastle::Asn1::Smime::SmimeAttributes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Smime::SmimeAttributes, "Org.BouncyCastle.Asn1.Smime", "SmimeAttributes");
