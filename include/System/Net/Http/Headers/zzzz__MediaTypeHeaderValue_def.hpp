#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__MediaTypeHeaderValue____c;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class MediaTypeHeaderValue;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__MediaTypeHeaderValue____c;
}
// Type: ::<>c
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14844))
// CS Name: System.Net.Http.Headers.MediaTypeHeaderValue::<>c
class CORDL_TYPE System__Net__Http__Headers__MediaTypeHeaderValue____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__MediaTypeHeaderValue____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__MediaTypeHeaderValue____c", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__MediaTypeHeaderValue____c(System__Net__Http__Headers__MediaTypeHeaderValue____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__MediaTypeHeaderValue____c", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__MediaTypeHeaderValue____c(System__Net__Http__Headers__MediaTypeHeaderValue____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__MediaTypeHeaderValue____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__MediaTypeHeaderValue____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__MediaTypeHeaderValue____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__MediaTypeHeaderValue____c& operator=(System__Net__Http__Headers__MediaTypeHeaderValue____c&& o) noexcept = default;
  constexpr System__Net__Http__Headers__MediaTypeHeaderValue____c& operator=(System__Net__Http__Headers__MediaTypeHeaderValue____c const& o) noexcept = default;
                


// Fields

static System::Net::Http::Headers::System__Net__Http__Headers__MediaTypeHeaderValue____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::Http::Headers::System__Net__Http__Headers__MediaTypeHeaderValue____c value) ;

static System::Net::Http::Headers::System__Net__Http__Headers__MediaTypeHeaderValue____c __get___9() ;

static System::Predicate_1<System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Predicate_1<System::Net::Http::Headers::NameValueHeaderValue> value) ;

static System::Predicate_1<System::Net::Http::Headers::NameValueHeaderValue> __get___9__6_0() ;


// Methods

static System::Net::Http::Headers::System__Net__Http__Headers__MediaTypeHeaderValue____c New_ctor() ;

/// @brief Method .ctor addr 0x26ac144 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_CharSet>b__6_0 addr 0x26ac14c size 0x58 virtual false final false
 bool _get_CharSet_b__6_0(System::Net::Http::Headers::NameValueHeaderValue l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::MediaTypeHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14845))
// CS Name: System.Net.Http.Headers.MediaTypeHeaderValue
class CORDL_TYPE MediaTypeHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::Net::Http::Headers::System__Net__Http__Headers__MediaTypeHeaderValue____c;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MediaTypeHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "MediaTypeHeaderValue", modifiers: " const&", def_value: None }]
constexpr MediaTypeHeaderValue(MediaTypeHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MediaTypeHeaderValue", modifiers: "&&", def_value: None }]
constexpr MediaTypeHeaderValue(MediaTypeHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MediaTypeHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MediaTypeHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MediaTypeHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MediaTypeHeaderValue& operator=(MediaTypeHeaderValue&& o) noexcept = default;
  constexpr MediaTypeHeaderValue& operator=(MediaTypeHeaderValue const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> value) ;

constexpr System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> __get_parameters() const;

 ::StringW __declspec(property(get=__get_media_type, put=__set_media_type))  media_type;

constexpr void __set_media_type(::StringW value) ;

constexpr ::StringW __get_media_type() const;


// Properties

 ::StringW __declspec(property(get=get_CharSet, put=set_CharSet))  CharSet;

 ::StringW __declspec(property(put=set_MediaType))  MediaType;

 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=get_Parameters))  Parameters;


// Methods

static System::Net::Http::Headers::MediaTypeHeaderValue New_ctor(::StringW mediaType) ;

/// @brief Method .ctor addr 0x26a2e60 size 0x2c virtual false final false
 void _ctor(::StringW mediaType) ;

static System::Net::Http::Headers::MediaTypeHeaderValue New_ctor(System::Net::Http::Headers::MediaTypeHeaderValue source) ;

/// @brief Method .ctor addr 0x26ab860 size 0x278 virtual false final false
 void _ctor(System::Net::Http::Headers::MediaTypeHeaderValue source) ;

static System::Net::Http::Headers::MediaTypeHeaderValue New_ctor() ;

/// @brief Method .ctor addr 0x26abb58 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_CharSet addr 0x26a1964 size 0x114 virtual false final false
 ::StringW get_CharSet() ;

/// @brief Method set_CharSet addr 0x26a2e8c size 0xa0 virtual false final false
 void set_CharSet(::StringW value) ;

/// @brief Method set_MediaType addr 0x26ab720 size 0x140 virtual false final false
 void set_MediaType(::StringW value) ;

/// @brief Method get_Parameters addr 0x26abad8 size 0x80 virtual false final false
 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue> get_Parameters() ;

/// @brief Method System.ICloneable.Clone addr 0x26abcf0 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26abd50 size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26abe18 size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Parse addr 0x26abe94 size 0x6c virtual false final false
static System::Net::Http::Headers::MediaTypeHeaderValue Parse(::StringW input) ;

/// @brief Method ToString addr 0x26ac074 size 0x6c virtual true final false
 ::StringW ToString() ;

/// @brief Method TryParse addr 0x26abf00 size 0x174 virtual false final false
static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::MediaTypeHeaderValue> parsedValue) ;

/// @brief Method TryParseMediaType addr 0x26abb60 size 0x190 virtual false final false
static System::Nullable_1<System::Net::Http::Headers::Token> TryParseMediaType(System::Net::Http::Headers::Lexer lexer, ByRef<::StringW> media) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::MediaTypeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::MediaTypeHeaderValue, "System.Net.Http.Headers", "MediaTypeHeaderValue");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__MediaTypeHeaderValue____c);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__MediaTypeHeaderValue____c, "System.Net.Http.Headers", "MediaTypeHeaderValue/<>c");
