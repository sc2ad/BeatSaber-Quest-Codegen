#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class StringWithQualityHeaderValue;
}
// Type: System.Net.Http.Headers::StringWithQualityHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14867))
// CS Name: System.Net.Http.Headers.StringWithQualityHeaderValue
class CORDL_TYPE StringWithQualityHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StringWithQualityHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringWithQualityHeaderValue", modifiers: " const&", def_value: None }]
constexpr StringWithQualityHeaderValue(StringWithQualityHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringWithQualityHeaderValue", modifiers: "&&", def_value: None }]
constexpr StringWithQualityHeaderValue(StringWithQualityHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringWithQualityHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringWithQualityHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringWithQualityHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringWithQualityHeaderValue& operator=(StringWithQualityHeaderValue&& o) noexcept = default;
  constexpr StringWithQualityHeaderValue& operator=(StringWithQualityHeaderValue const& o) noexcept = default;
                


// Fields

 System::Nullable_1<double_t> __declspec(property(get=__get__Quality_k__BackingField, put=__set__Quality_k__BackingField))  _Quality_k__BackingField;

constexpr void __set__Quality_k__BackingField(System::Nullable_1<double_t> value) ;

constexpr System::Nullable_1<double_t> __get__Quality_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField))  _Value_k__BackingField;

constexpr void __set__Value_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Value_k__BackingField() const;


// Properties

 System::Nullable_1<double_t> __declspec(property(get=get_Quality, put=set_Quality))  Quality;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters []
explicit StringWithQualityHeaderValue() ;

/// @brief Method .ctor addr 0x26afe08 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Quality addr 0x26afe10 size 0xc virtual false final false
 System::Nullable_1<double_t> get_Quality() ;

/// @brief Method set_Quality addr 0x26afe1c size 0x8 virtual false final false
 void set_Quality(System::Nullable_1<double_t> value) ;

/// @brief Method get_Value addr 0x26afe24 size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26afe2c size 0x8 virtual false final false
 void set_Value(::StringW value) ;

/// @brief Method System.ICloneable.Clone addr 0x26afe34 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26afe3c size 0xe8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26aff24 size 0x8c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26affb0 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::StringWithQualityHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26b0060 size 0x268 virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::StringWithQualityHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

/// @brief Method ToString addr 0x26b02c8 size 0x10c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::StringWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::StringWithQualityHeaderValue, "System.Net.Http.Headers", "StringWithQualityHeaderValue");
