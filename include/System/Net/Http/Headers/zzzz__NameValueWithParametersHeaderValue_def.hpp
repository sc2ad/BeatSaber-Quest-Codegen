#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class NameValueWithParametersHeaderValue;
}
// Type: System.Net.Http.Headers::NameValueWithParametersHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14847))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14848))
// CS Name: System.Net.Http.Headers.NameValueWithParametersHeaderValue
class CORDL_TYPE NameValueWithParametersHeaderValue : public ::System::Net::Http::Headers::NameValueHeaderValue {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NameValueWithParametersHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueWithParametersHeaderValue", modifiers: " const&", def_value: None }]
constexpr NameValueWithParametersHeaderValue(NameValueWithParametersHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueWithParametersHeaderValue", modifiers: "&&", def_value: None }]
constexpr NameValueWithParametersHeaderValue(NameValueWithParametersHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameValueWithParametersHeaderValue(void* ptr) noexcept : ::System::Net::Http::Headers::NameValueHeaderValue(ptr) {
}


  constexpr NameValueWithParametersHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameValueWithParametersHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameValueWithParametersHeaderValue& operator=(NameValueWithParametersHeaderValue&& o) noexcept = default;
  constexpr NameValueWithParametersHeaderValue& operator=(NameValueWithParametersHeaderValue const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue> __get_parameters() const;


// Properties

 ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=get_Parameters))  Parameters;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Net::Http::Headers::NameValueWithParametersHeaderValue", modifiers: "", def_value: None }]
explicit NameValueWithParametersHeaderValue(::System::Net::Http::Headers::NameValueWithParametersHeaderValue source) ;

/// @brief Method .ctor addr 0x26ac84c size 0x1ec virtual false final false
 void _ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue source) ;

// Ctor Parameters []
explicit NameValueWithParametersHeaderValue() ;

/// @brief Method .ctor addr 0x26acab8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Parameters addr 0x26aca38 size 0x80 virtual false final false
 ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue> get_Parameters() ;

/// @brief Method System.ICloneable.Clone addr 0x26acac0 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26acb20 size 0xc0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26acbe0 size 0x60 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x26acc40 size 0x94 virtual true final false
 ::StringW ToString() ;

/// @brief Method TryParse addr 0x26accd4 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26acd84 size 0x1dc virtual false final false
static bool TryParseElement(::System::Net::Http::Headers::Lexer lexer, ByRef<::System::Net::Http::Headers::NameValueWithParametersHeaderValue> parsedValue, ByRef<::System::Net::Http::Headers::Token> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::NameValueWithParametersHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::NameValueWithParametersHeaderValue, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue");
