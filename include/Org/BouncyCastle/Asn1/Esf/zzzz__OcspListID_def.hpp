#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Esf {
class OcspResponsesID;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspListID;
}
// Type: Org.BouncyCastle.Asn1.Esf::OcspListID
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(146))
// CS Name: Org.BouncyCastle.Asn1.Esf.OcspListID
class CORDL_TYPE OcspListID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OcspListID() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: " const&", def_value: None }]
constexpr OcspListID(OcspListID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: "&&", def_value: None }]
constexpr OcspListID(OcspListID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspListID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OcspListID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspListID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspListID& operator=(OcspListID&& o) noexcept = default;
  constexpr OcspListID& operator=(OcspListID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_ocspResponses, put=__set_ocspResponses))  ocspResponses;

constexpr void __set_ocspResponses(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_ocspResponses() const;


// Methods

/// @brief Method GetInstance addr 0xe04838 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::OcspListID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OcspListID(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0587c size 0x480 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "ocspResponses", ty: "::ArrayW<Org::BouncyCastle::Asn1::Esf::OcspResponsesID>", modifiers: "", def_value: None }]
explicit OcspListID(::ArrayW<Org::BouncyCastle::Asn1::Esf::OcspResponsesID> ocspResponses) ;

/// @brief Method .ctor addr 0xe05e84 size 0xc4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Esf::OcspResponsesID> ocspResponses) ;

// Ctor Parameters [CppParam { name: "ocspResponses", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit OcspListID(System::Collections::IEnumerable ocspResponses) ;

/// @brief Method .ctor addr 0xe05f48 size 0x1a4 virtual false final false
 void _ctor(System::Collections::IEnumerable ocspResponses) ;

/// @brief Method GetOcspResponses addr 0xe060ec size 0x120 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Esf::OcspResponsesID> GetOcspResponses() ;

/// @brief Method ToAsn1Object addr 0xe0620c size 0x68 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::OcspListID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::OcspListID, "Org.BouncyCastle.Asn1.Esf", "OcspListID");
