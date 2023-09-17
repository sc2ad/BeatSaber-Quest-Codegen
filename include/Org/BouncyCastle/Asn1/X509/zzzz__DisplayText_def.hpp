#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
// Type: Org.BouncyCastle.Asn1.X509::DisplayText
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(356))
// CS Name: Org.BouncyCastle.Asn1.X509.DisplayText
class CORDL_TYPE DisplayText : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisplayText() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: " const&", def_value: None }]
constexpr DisplayText(DisplayText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisplayText", modifiers: "&&", def_value: None }]
constexpr DisplayText(DisplayText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisplayText(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DisplayText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisplayText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisplayText& operator=(DisplayText&& o) noexcept = default;
  constexpr DisplayText& operator=(DisplayText const& o) noexcept = default;
                


// Fields

/// @brief Field ContentTypeIA5String offset 0
static constexpr int32_t  ContentTypeIA5String{0};

/// @brief Field ContentTypeBmpString offset 0
static constexpr int32_t  ContentTypeBmpString{1};

/// @brief Field ContentTypeUtf8String offset 0
static constexpr int32_t  ContentTypeUtf8String{2};

/// @brief Field ContentTypeVisibleString offset 0
static constexpr int32_t  ContentTypeVisibleString{3};

/// @brief Field DisplayTextMaximumSize offset 0
static constexpr int32_t  DisplayTextMaximumSize{200};

 int32_t __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(int32_t value) ;

constexpr int32_t __get_contentType() const;

 ::Org::BouncyCastle::Asn1::IAsn1String __declspec(property(get=__get_contents, put=__set_contents))  contents;

constexpr void __set_contents(::Org::BouncyCastle::Asn1::IAsn1String value) ;

constexpr ::Org::BouncyCastle::Asn1::IAsn1String __get_contents() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }]
explicit DisplayText(int32_t type, ::StringW text) ;

/// @brief Method .ctor addr 0x1101798 size 0x16c virtual false final false
 void _ctor(int32_t type, ::StringW text) ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }]
explicit DisplayText(::StringW text) ;

/// @brief Method .ctor addr 0x1101904 size 0xa4 virtual false final false
 void _ctor(::StringW text) ;

// Ctor Parameters [CppParam { name: "contents", ty: "::Org::BouncyCastle::Asn1::IAsn1String", modifiers: "", def_value: None }]
explicit DisplayText(::Org::BouncyCastle::Asn1::IAsn1String contents) ;

/// @brief Method .ctor addr 0x11019a8 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::IAsn1String contents) ;

/// @brief Method GetInstance addr 0x11019d0 size 0x180 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::DisplayText GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToAsn1Object addr 0x1101b50 size 0x78 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method GetString addr 0x1101bc8 size 0xa0 virtual false final false
 ::StringW GetString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DisplayText);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DisplayText, "Org.BouncyCastle.Asn1.X509", "DisplayText");
