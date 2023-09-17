#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ntt {
class NttObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Ntt::NttObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Ntt {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(205))
// CS Name: Org.BouncyCastle.Asn1.Ntt.NttObjectIdentifiers
class CORDL_TYPE NttObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NttObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "NttObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr NttObjectIdentifiers(NttObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NttObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr NttObjectIdentifiers(NttObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NttObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NttObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NttObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NttObjectIdentifiers& operator=(NttObjectIdentifiers&& o) noexcept = default;
  constexpr NttObjectIdentifiers& operator=(NttObjectIdentifiers const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCamellia128Cbc, put=__set_IdCamellia128Cbc))  IdCamellia128Cbc;

static void __set_IdCamellia128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCamellia128Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCamellia192Cbc, put=__set_IdCamellia192Cbc))  IdCamellia192Cbc;

static void __set_IdCamellia192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCamellia192Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCamellia256Cbc, put=__set_IdCamellia256Cbc))  IdCamellia256Cbc;

static void __set_IdCamellia256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCamellia256Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCamellia128Wrap, put=__set_IdCamellia128Wrap))  IdCamellia128Wrap;

static void __set_IdCamellia128Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCamellia128Wrap() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCamellia192Wrap, put=__set_IdCamellia192Wrap))  IdCamellia192Wrap;

static void __set_IdCamellia192Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCamellia192Wrap() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCamellia256Wrap, put=__set_IdCamellia256Wrap))  IdCamellia256Wrap;

static void __set_IdCamellia256Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCamellia256Wrap() ;


// Methods

// Ctor Parameters []
explicit NttObjectIdentifiers() ;

/// @brief Method .ctor addr 0xef1228 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ntt
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers, "Org.BouncyCastle.Asn1.Ntt", "NttObjectIdentifiers");
