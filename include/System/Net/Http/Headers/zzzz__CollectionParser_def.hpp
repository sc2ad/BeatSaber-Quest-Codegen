#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
template<typename T>
class ElementTryParser_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class CollectionParser;
}
// Type: System.Net.Http.Headers::CollectionParser
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14822))
// CS Name: System.Net.Http.Headers.CollectionParser
class CORDL_TYPE CollectionParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionParser", modifiers: " const&", def_value: None }]
constexpr CollectionParser(CollectionParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionParser", modifiers: "&&", def_value: None }]
constexpr CollectionParser(CollectionParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionParser& operator=(CollectionParser&& o) noexcept = default;
  constexpr CollectionParser& operator=(CollectionParser const& o) noexcept = default;
                


// Methods

/// @brief Method TryParse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool TryParse(::StringW input, int32_t minimalCount, System::Net::Http::Headers::ElementTryParser_1<T> parser, ByRef<System::Collections::Generic::List_1<T>> result) ;

/// @brief Method TryParse addr 0x26a5abc size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<::StringW>> result) ;

/// @brief Method TryParseStringElement addr 0x26a5b6c size 0xcc virtual false final false
static bool TryParseStringElement(System::Net::Http::Headers::Lexer lexer, ByRef<::StringW> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::CollectionParser);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::CollectionParser, "System.Net.Http.Headers", "CollectionParser");
