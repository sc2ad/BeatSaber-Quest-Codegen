#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net {
class DigestHeaderParser;
}
// Type: System.Net::DigestHeaderParser
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8010))
// CS Name: System.Net.DigestHeaderParser
class CORDL_TYPE DigestHeaderParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DigestHeaderParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestHeaderParser", modifiers: " const&", def_value: None }]
constexpr DigestHeaderParser(DigestHeaderParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestHeaderParser", modifiers: "&&", def_value: None }]
constexpr DigestHeaderParser(DigestHeaderParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestHeaderParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DigestHeaderParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestHeaderParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestHeaderParser& operator=(DigestHeaderParser&& o) noexcept = default;
  constexpr DigestHeaderParser& operator=(DigestHeaderParser const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_header, put=__set_header))  header;

constexpr void __set_header(::StringW value) ;

constexpr ::StringW __get_header() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 int32_t __declspec(property(get=__get_pos, put=__set_pos))  pos;

constexpr void __set_pos(int32_t value) ;

constexpr int32_t __get_pos() const;

static ::ArrayW<::StringW> __declspec(property(get=__get_keywords, put=__set_keywords))  keywords;

static void __set_keywords(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_keywords() ;

 ::ArrayW<::StringW> __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_values() const;


// Properties

 ::StringW __declspec(property(get=get_Realm))  Realm;

 ::StringW __declspec(property(get=get_Opaque))  Opaque;

 ::StringW __declspec(property(get=get_Nonce))  Nonce;

 ::StringW __declspec(property(get=get_Algorithm))  Algorithm;

 ::StringW __declspec(property(get=get_QOP))  QOP;


// Methods

// Ctor Parameters [CppParam { name: "header", ty: "::StringW", modifiers: "", def_value: None }]
explicit DigestHeaderParser(::StringW header) ;

/// @brief Method .ctor addr 0x282ae84 size 0xb4 virtual false final false
 void _ctor(::StringW header) ;

/// @brief Method get_Realm addr 0x282af38 size 0x28 virtual false final false
 ::StringW get_Realm() ;

/// @brief Method get_Opaque addr 0x282af60 size 0x2c virtual false final false
 ::StringW get_Opaque() ;

/// @brief Method get_Nonce addr 0x282af8c size 0x2c virtual false final false
 ::StringW get_Nonce() ;

/// @brief Method get_Algorithm addr 0x282afb8 size 0x2c virtual false final false
 ::StringW get_Algorithm() ;

/// @brief Method get_QOP addr 0x282afe4 size 0x2c virtual false final false
 ::StringW get_QOP() ;

/// @brief Method Parse addr 0x282b010 size 0x1dc virtual false final false
 bool Parse() ;

/// @brief Method SkipWhitespace addr 0x282b37c size 0x80 virtual false final false
 void SkipWhitespace() ;

/// @brief Method GetKey addr 0x282b3fc size 0x90 virtual false final false
 ::StringW GetKey() ;

/// @brief Method GetKeywordAndValue addr 0x282b1ec size 0x190 virtual false final false
 bool GetKeywordAndValue(ByRef<::StringW> key, ByRef<::StringW> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::DigestHeaderParser);
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestHeaderParser, "System.Net", "DigestHeaderParser");
