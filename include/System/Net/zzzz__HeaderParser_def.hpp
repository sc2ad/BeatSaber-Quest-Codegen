#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net {
class HeaderParser;
}
// Type: System.Net::HeaderParser
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7952))
// CS Name: System.Net.HeaderParser
class CORDL_TYPE HeaderParser : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HeaderParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderParser", modifiers: " const&", def_value: None }]
constexpr HeaderParser(HeaderParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderParser", modifiers: "&&", def_value: None }]
constexpr HeaderParser(HeaderParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeaderParser(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HeaderParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeaderParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeaderParser& operator=(HeaderParser&& o) noexcept = default;
  constexpr HeaderParser& operator=(HeaderParser const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HeaderParser(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2814754 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2814828 size 0x14 virtual true final false
 ::ArrayW<::StringW> Invoke(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HeaderParser);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HeaderParser, "System.Net", "HeaderParser");
