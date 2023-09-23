#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class ProtectedPart;
}
// Type: Org.BouncyCastle.Asn1.Cmp::ProtectedPart
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(48))
// CS Name: Org.BouncyCastle.Asn1.Cmp.ProtectedPart
class CORDL_TYPE ProtectedPart : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ProtectedPart() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtectedPart", modifiers: " const&", def_value: None }]
constexpr ProtectedPart(ProtectedPart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtectedPart", modifiers: "&&", def_value: None }]
constexpr ProtectedPart(ProtectedPart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProtectedPart(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ProtectedPart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProtectedPart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProtectedPart& operator=(ProtectedPart&& o) noexcept = default;
  constexpr ProtectedPart& operator=(ProtectedPart const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiHeader __declspec(property(get=__get_header, put=__set_header))  header;

constexpr void __set_header(Org::BouncyCastle::Asn1::Cmp::PkiHeader value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiHeader __get_header() const;

 Org::BouncyCastle::Asn1::Cmp::PkiBody __declspec(property(get=__get_body, put=__set_body))  body;

constexpr void __set_body(Org::BouncyCastle::Asn1::Cmp::PkiBody value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiBody __get_body() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::PkiHeader __declspec(property(get=get_Header))  Header;

 Org::BouncyCastle::Asn1::Cmp::PkiBody __declspec(property(get=get_Body))  Body;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ProtectedPart(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde1070 size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde111c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::ProtectedPart GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "header", ty: "Org::BouncyCastle::Asn1::Cmp::PkiHeader", modifiers: "", def_value: None }, CppParam { name: "body", ty: "Org::BouncyCastle::Asn1::Cmp::PkiBody", modifiers: "", def_value: None }]
explicit ProtectedPart(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body) ;

/// @brief Method .ctor addr 0xde12a4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body) ;

/// @brief Method get_Header addr 0xde12d0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiHeader get_Header() ;

/// @brief Method get_Body addr 0xde12d8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiBody get_Body() ;

/// @brief Method ToAsn1Object addr 0xde12e0 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::ProtectedPart);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::ProtectedPart, "Org.BouncyCastle.Asn1.Cmp", "ProtectedPart");
