#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class TransferCodingHeaderValue;
}
// Type: System.Net.Http.Headers::TransferCodingHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14868))
// CS Name: System.Net.Http.Headers.TransferCodingHeaderValue
class CORDL_TYPE TransferCodingHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TransferCodingHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransferCodingHeaderValue", modifiers: " const&", def_value: None }]
constexpr TransferCodingHeaderValue(TransferCodingHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransferCodingHeaderValue", modifiers: "&&", def_value: None }]
constexpr TransferCodingHeaderValue(TransferCodingHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransferCodingHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TransferCodingHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransferCodingHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransferCodingHeaderValue& operator=(TransferCodingHeaderValue&& o) noexcept = default;
  constexpr TransferCodingHeaderValue& operator=(TransferCodingHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;

 ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue> __get_parameters() const;


// Properties

 ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=get_Parameters))  Parameters;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Net::Http::Headers::TransferCodingHeaderValue", modifiers: "", def_value: None }]
explicit TransferCodingHeaderValue(::System::Net::Http::Headers::TransferCodingHeaderValue source) ;

/// @brief Method .ctor addr 0x26b03d4 size 0x230 virtual false final false
 void _ctor(::System::Net::Http::Headers::TransferCodingHeaderValue source) ;

// Ctor Parameters []
explicit TransferCodingHeaderValue() ;

/// @brief Method .ctor addr 0x26b0684 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Parameters addr 0x26b0604 size 0x80 virtual false final false
 ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue> get_Parameters() ;

/// @brief Method get_Value addr 0x26b068c size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method System.ICloneable.Clone addr 0x26b0694 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26b06f4 size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26b07bc size 0x84 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x26b0840 size 0x58 virtual true final false
 ::StringW ToString() ;

/// @brief Method TryParse addr 0x26b0898 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26b0948 size 0x144 virtual false final false
static bool TryParseElement(::System::Net::Http::Headers::Lexer lexer, ByRef<::System::Net::Http::Headers::TransferCodingHeaderValue> parsedValue, ByRef<::System::Net::Http::Headers::Token> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::TransferCodingHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::TransferCodingHeaderValue, "System.Net.Http.Headers", "TransferCodingHeaderValue");
