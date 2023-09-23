#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/Headers/zzzz__TransferCodingHeaderValue_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class TransferCodingWithQualityHeaderValue;
}
// Type: System.Net.Http.Headers::TransferCodingWithQualityHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14868))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14869))
// CS Name: System.Net.Http.Headers.TransferCodingWithQualityHeaderValue
class CORDL_TYPE TransferCodingWithQualityHeaderValue : public System::Net::Http::Headers::TransferCodingHeaderValue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TransferCodingWithQualityHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransferCodingWithQualityHeaderValue", modifiers: " const&", def_value: None }]
constexpr TransferCodingWithQualityHeaderValue(TransferCodingWithQualityHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransferCodingWithQualityHeaderValue", modifiers: "&&", def_value: None }]
constexpr TransferCodingWithQualityHeaderValue(TransferCodingWithQualityHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransferCodingWithQualityHeaderValue(void* ptr) noexcept : System::Net::Http::Headers::TransferCodingHeaderValue(ptr) {
}


  constexpr TransferCodingWithQualityHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransferCodingWithQualityHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransferCodingWithQualityHeaderValue& operator=(TransferCodingWithQualityHeaderValue&& o) noexcept = default;
  constexpr TransferCodingWithQualityHeaderValue& operator=(TransferCodingWithQualityHeaderValue const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TransferCodingWithQualityHeaderValue() ;

/// @brief Method .ctor addr 0x26b0a8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method TryParse addr 0x26b0a94 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::TransferCodingWithQualityHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26b0b44 size 0x144 virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::TransferCodingWithQualityHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::TransferCodingWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::TransferCodingWithQualityHeaderValue, "System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue");
