#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template<typename T>
class ElementTryParser_1;
}
namespace System::Net::Http::Headers {
template<::cordl_internals::il2cpp_reference_type T>
class ElementTryParser_1<T>;
}
// Type: System.Net.Http.Headers::ElementTryParser`1
// Type: System.Net.Http.Headers::ElementTryParser`1
namespace System::Net::Http::Headers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(14821))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14821), inst: 2 })
// CS Name: System.Net.Http.Headers.ElementTryParser`1
class CORDL_TYPE ElementTryParser_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ElementTryParser_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElementTryParser_1", modifiers: " const&", def_value: None }]
constexpr ElementTryParser_1(ElementTryParser_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElementTryParser_1", modifiers: "&&", def_value: None }]
constexpr ElementTryParser_1(ElementTryParser_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElementTryParser_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ElementTryParser_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElementTryParser_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElementTryParser_1& operator=(ElementTryParser_1&& o) noexcept = default;
  constexpr ElementTryParser_1& operator=(ElementTryParser_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ElementTryParser_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(::System::Net::Http::Headers::Lexer lexer, ByRef<T> parsedValue, ByRef<::System::Net::Http::Headers::Token> token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::ElementTryParser_1, "System.Net.Http.Headers", "ElementTryParser`1");
