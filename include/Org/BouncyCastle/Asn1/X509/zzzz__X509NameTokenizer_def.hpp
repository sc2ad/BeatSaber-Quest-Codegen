#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509NameTokenizer;
}
// Type: Org.BouncyCastle.Asn1.X509::X509NameTokenizer
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(409))
// CS Name: Org.BouncyCastle.Asn1.X509.X509NameTokenizer
class CORDL_TYPE X509NameTokenizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509NameTokenizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509NameTokenizer", modifiers: " const&", def_value: None }]
constexpr X509NameTokenizer(X509NameTokenizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509NameTokenizer", modifiers: "&&", def_value: None }]
constexpr X509NameTokenizer(X509NameTokenizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509NameTokenizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509NameTokenizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509NameTokenizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509NameTokenizer& operator=(X509NameTokenizer&& o) noexcept = default;
  constexpr X509NameTokenizer& operator=(X509NameTokenizer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 char16_t __declspec(property(get=__get_separator, put=__set_separator))  separator;

constexpr void __set_separator(char16_t value) ;

constexpr char16_t __get_separator() const;

 System::Text::StringBuilder __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_buffer() const;


// Methods

// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }]
explicit X509NameTokenizer(::StringW oid) ;

/// @brief Method .ctor addr 0x111b34c size 0x8 virtual false final false
 void _ctor(::StringW oid) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "separator", ty: "char16_t", modifiers: "", def_value: None }]
explicit X509NameTokenizer(::StringW oid, char16_t separator) ;

/// @brief Method .ctor addr 0x111b520 size 0x8c virtual false final false
 void _ctor(::StringW oid, char16_t separator) ;

/// @brief Method HasMoreTokens addr 0x111b5ac size 0x28 virtual false final false
 bool HasMoreTokens() ;

/// @brief Method NextToken addr 0x111b354 size 0x1cc virtual false final false
 ::StringW NextToken() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::X509NameTokenizer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509NameTokenizer, "Org.BouncyCastle.Asn1.X509", "X509NameTokenizer");
