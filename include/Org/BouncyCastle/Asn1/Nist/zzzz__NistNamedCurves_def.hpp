#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Nist {
class NistNamedCurves;
}
// Type: Org.BouncyCastle.Asn1.Nist::NistNamedCurves
namespace Org::BouncyCastle::Asn1::Nist {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(203))
// CS Name: Org.BouncyCastle.Asn1.Nist.NistNamedCurves
class CORDL_TYPE NistNamedCurves : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NistNamedCurves() = default;

// Ctor Parameters [CppParam { name: "", ty: "NistNamedCurves", modifiers: " const&", def_value: None }]
constexpr NistNamedCurves(NistNamedCurves const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NistNamedCurves", modifiers: "&&", def_value: None }]
constexpr NistNamedCurves(NistNamedCurves&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NistNamedCurves(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NistNamedCurves& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NistNamedCurves& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NistNamedCurves& operator=(NistNamedCurves&& o) noexcept = default;
  constexpr NistNamedCurves& operator=(NistNamedCurves const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_objIds, put=__set_objIds))  objIds;

static void __set_objIds(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_objIds() ;

static System::Collections::IDictionary __declspec(property(get=__get_names, put=__set_names))  names;

static void __set_names(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_names() ;


// Properties

static System::Collections::IEnumerable __declspec(property(get=get_Names))  Names;


// Methods

static Org::BouncyCastle::Asn1::Nist::NistNamedCurves New_ctor() ;

/// @brief Method .ctor addr 0xeef5c8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method DefineCurveAlias addr 0xeef5d0 size 0x198 virtual false final false
static void DefineCurveAlias(::StringW name, Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetByName addr 0xeefa88 size 0x80 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByName(::StringW name) ;

/// @brief Method GetByOid addr 0xeefc5c size 0x58 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetOid addr 0xeefb08 size 0x154 virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(::StringW name) ;

/// @brief Method GetName addr 0xeefcb4 size 0x100 virtual false final false
static ::StringW GetName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Names addr 0xeefdb4 size 0x10c virtual false final false
static System::Collections::IEnumerable get_Names() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Nist
NEED_NO_BOX(Org::BouncyCastle::Asn1::Nist::NistNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Nist::NistNamedCurves, "Org.BouncyCastle.Asn1.Nist", "NistNamedCurves");
