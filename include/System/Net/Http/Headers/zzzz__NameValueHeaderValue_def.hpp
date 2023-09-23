#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
// Type: System.Net.Http.Headers::NameValueHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14847))
// CS Name: System.Net.Http.Headers.NameValueHeaderValue
class CORDL_TYPE NameValueHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NameValueHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueHeaderValue", modifiers: " const&", def_value: None }]
constexpr NameValueHeaderValue(NameValueHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueHeaderValue", modifiers: "&&", def_value: None }]
constexpr NameValueHeaderValue(NameValueHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameValueHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NameValueHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameValueHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameValueHeaderValue& operator=(NameValueHeaderValue&& o) noexcept = default;
  constexpr NameValueHeaderValue& operator=(NameValueHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit NameValueHeaderValue(::StringW name, ::StringW value) ;

/// @brief Method .ctor addr 0x26a5a80 size 0x3c virtual false final false
 void _ctor(::StringW name, ::StringW value) ;

// Ctor Parameters [CppParam { name: "source", ty: "System::Net::Http::Headers::NameValueHeaderValue", modifiers: "", def_value: None }]
explicit NameValueHeaderValue(System::Net::Http::Headers::NameValueHeaderValue source) ;

/// @brief Method .ctor addr 0x26a5f38 size 0x34 virtual false final false
 void _ctor(System::Net::Http::Headers::NameValueHeaderValue source) ;

// Ctor Parameters []
explicit NameValueHeaderValue() ;

/// @brief Method .ctor addr 0x26ac3c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Name addr 0x26ac3cc size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x26ac3d4 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method get_Value addr 0x26ac3dc size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26a5924 size 0x15c virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method Create addr 0x26a5000 size 0x70 virtual false final false
static System::Net::Http::Headers::NameValueHeaderValue Create(::StringW name, ::StringW value) ;

/// @brief Method System.ICloneable.Clone addr 0x26ac3e4 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method GetHashCode addr 0x26ac444 size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x26ac4c0 size 0xe0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method TryParsePragma addr 0x26ac5a0 size 0xb0 virtual false final false
static bool TryParsePragma(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue>> result) ;

/// @brief Method TryParseParameters addr 0x26a62d8 size 0x2c0 virtual false final false
static bool TryParseParameters(System::Net::Http::Headers::Lexer lexer, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue>> result, ByRef<System::Net::Http::Headers::Token> t) ;

/// @brief Method ToString addr 0x26ac650 size 0x74 virtual true final false
 ::StringW ToString() ;

/// @brief Method TryParseElement addr 0x26ac6c4 size 0x188 virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::NameValueHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::NameValueHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::NameValueHeaderValue, "System.Net.Http.Headers", "NameValueHeaderValue");
