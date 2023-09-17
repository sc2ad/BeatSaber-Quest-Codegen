#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
namespace Org::BouncyCastle::Asn1 {
class DerStringBase;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
// Type: Org.BouncyCastle.Asn1.X500::DirectoryString
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(325))
// CS Name: Org.BouncyCastle.Asn1.X500.DirectoryString
class CORDL_TYPE DirectoryString : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1String
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1String() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DirectoryString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryString", modifiers: " const&", def_value: None }]
constexpr DirectoryString(DirectoryString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryString", modifiers: "&&", def_value: None }]
constexpr DirectoryString(DirectoryString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectoryString(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DirectoryString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectoryString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectoryString& operator=(DirectoryString&& o) noexcept = default;
  constexpr DirectoryString& operator=(DirectoryString const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerStringBase __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::Org::BouncyCastle::Asn1::DerStringBase value) ;

constexpr ::Org::BouncyCastle::Asn1::DerStringBase __get_str() const;


// Methods

/// @brief Method GetInstance addr 0xff27b4 size 0x290 virtual false final false
static ::Org::BouncyCastle::Asn1::X500::DirectoryString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xff2a6c size 0x6c virtual false final false
static ::Org::BouncyCastle::Asn1::X500::DirectoryString GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "str", ty: "::Org::BouncyCastle::Asn1::DerStringBase", modifiers: "", def_value: None }]
explicit DirectoryString(::Org::BouncyCastle::Asn1::DerStringBase str) ;

/// @brief Method .ctor addr 0xff2a44 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerStringBase str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit DirectoryString(::StringW str) ;

/// @brief Method .ctor addr 0xff2ad8 size 0x7c virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method GetString addr 0xff2b54 size 0x20 virtual true final true
 ::StringW GetString() ;

/// @brief Method ToAsn1Object addr 0xff2b74 size 0x20 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X500
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X500::DirectoryString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X500::DirectoryString, "Org.BouncyCastle.Asn1.X500", "DirectoryString");
