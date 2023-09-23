#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class MediaTypeWithQualityHeaderValue;
}
// Type: System.Net.Http.Headers::MediaTypeWithQualityHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14845))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14846))
// CS Name: System.Net.Http.Headers.MediaTypeWithQualityHeaderValue
class CORDL_TYPE MediaTypeWithQualityHeaderValue : public System::Net::Http::Headers::MediaTypeHeaderValue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MediaTypeWithQualityHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "MediaTypeWithQualityHeaderValue", modifiers: " const&", def_value: None }]
constexpr MediaTypeWithQualityHeaderValue(MediaTypeWithQualityHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MediaTypeWithQualityHeaderValue", modifiers: "&&", def_value: None }]
constexpr MediaTypeWithQualityHeaderValue(MediaTypeWithQualityHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MediaTypeWithQualityHeaderValue(void* ptr) noexcept : System::Net::Http::Headers::MediaTypeHeaderValue(ptr) {
}


  constexpr MediaTypeWithQualityHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MediaTypeWithQualityHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MediaTypeWithQualityHeaderValue& operator=(MediaTypeWithQualityHeaderValue&& o) noexcept = default;
  constexpr MediaTypeWithQualityHeaderValue& operator=(MediaTypeWithQualityHeaderValue const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MediaTypeWithQualityHeaderValue() ;

/// @brief Method .ctor addr 0x26ac1a4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method TryParseElement addr 0x26ac1ac size 0x168 virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

/// @brief Method TryParse addr 0x26ac314 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::MediaTypeWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::MediaTypeWithQualityHeaderValue, "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue");
