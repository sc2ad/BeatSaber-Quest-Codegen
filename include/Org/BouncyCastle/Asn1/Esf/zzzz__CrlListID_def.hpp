#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Esf {
class CrlValidatedID;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlListID;
}
// Type: Org.BouncyCastle.Asn1.Esf::CrlListID
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(141))
// CS Name: Org.BouncyCastle.Asn1.Esf.CrlListID
class CORDL_TYPE CrlListID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CrlListID() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlListID", modifiers: " const&", def_value: None }]
constexpr CrlListID(CrlListID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlListID", modifiers: "&&", def_value: None }]
constexpr CrlListID(CrlListID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlListID(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlListID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlListID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlListID& operator=(CrlListID&& o) noexcept = default;
  constexpr CrlListID& operator=(CrlListID const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_crls, put=__set_crls))  crls;

constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_crls() const;


// Methods

/// @brief Method GetInstance addr 0xe038d4 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::CrlListID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CrlListID(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe03a5c size 0x480 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "crls", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID>", modifiers: "", def_value: None }]
explicit CrlListID(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID> crls) ;

/// @brief Method .ctor addr 0xe04064 size 0xc4 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID> crls) ;

// Ctor Parameters [CppParam { name: "crls", ty: "::System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit CrlListID(::System::Collections::IEnumerable crls) ;

/// @brief Method .ctor addr 0xe04128 size 0x1a4 virtual false final false
 void _ctor(::System::Collections::IEnumerable crls) ;

/// @brief Method GetCrls addr 0xe042cc size 0x120 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID> GetCrls() ;

/// @brief Method ToAsn1Object addr 0xe043ec size 0x68 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlListID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlListID, "Org.BouncyCastle.Asn1.Esf", "CrlListID");
