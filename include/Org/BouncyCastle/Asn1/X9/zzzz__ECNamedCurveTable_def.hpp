#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class ECNamedCurveTable;
}
// Type: Org.BouncyCastle.Asn1.X9::ECNamedCurveTable
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(414))
// CS Name: Org.BouncyCastle.Asn1.X9.ECNamedCurveTable
class CORDL_TYPE ECNamedCurveTable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ECNamedCurveTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: " const&", def_value: None }]
constexpr ECNamedCurveTable(ECNamedCurveTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: "&&", def_value: None }]
constexpr ECNamedCurveTable(ECNamedCurveTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECNamedCurveTable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECNamedCurveTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECNamedCurveTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECNamedCurveTable& operator=(ECNamedCurveTable&& o) noexcept = default;
  constexpr ECNamedCurveTable& operator=(ECNamedCurveTable const& o) noexcept = default;
                


// Properties

static ::System::Collections::IEnumerable __declspec(property(get=get_Names))  Names;


// Methods

/// @brief Method GetByName addr 0x111e9f4 size 0x19c virtual false final false
static ::Org::BouncyCastle::Asn1::X9::X9ECParameters GetByName(::StringW name) ;

/// @brief Method GetName addr 0x111eb90 size 0x19c virtual false final false
static ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetOid addr 0x111ed2c size 0x19c virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(::StringW name) ;

/// @brief Method GetByOid addr 0x111eec8 size 0x168 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::X9ECParameters GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Names addr 0x111f030 size 0x204 virtual false final false
static ::System::Collections::IEnumerable get_Names() ;

// Ctor Parameters []
explicit ECNamedCurveTable() ;

/// @brief Method .ctor addr 0x111f234 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable, "Org.BouncyCastle.Asn1.X9", "ECNamedCurveTable");
