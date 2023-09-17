#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiFreeText
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(36))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiFreeText
class CORDL_TYPE PkiFreeText : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkiFreeText() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiFreeText", modifiers: " const&", def_value: None }]
constexpr PkiFreeText(PkiFreeText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiFreeText", modifiers: "&&", def_value: None }]
constexpr PkiFreeText(PkiFreeText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiFreeText(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiFreeText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiFreeText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiFreeText& operator=(PkiFreeText&& o) noexcept = default;
  constexpr PkiFreeText& operator=(PkiFreeText const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_strings, put=__set_strings))  strings;

constexpr void __set_strings(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_strings() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;

 int32_t __declspec(property(get=get_Count))  Count;

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method GetInstance addr 0xdde2e0 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xdd9f2c size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PkiFreeText(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdde2f8 size 0x334 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }]
explicit PkiFreeText(::Org::BouncyCastle::Asn1::DerUtf8String p) ;

/// @brief Method .ctor addr 0xdde62c size 0x7c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String p) ;

/// @brief Method get_Size addr 0xdde6a8 size 0x24 virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Count addr 0xdde6cc size 0x24 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0xdde6f0 size 0x94 virtual false final false
 ::Org::BouncyCastle::Asn1::DerUtf8String get_Item(int32_t index) ;

/// @brief Method GetStringAt addr 0xdde784 size 0x4 virtual false final false
 ::Org::BouncyCastle::Asn1::DerUtf8String GetStringAt(int32_t index) ;

/// @brief Method ToAsn1Object addr 0xdde788 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText, "Org.BouncyCastle.Asn1.Cmp", "PkiFreeText");
