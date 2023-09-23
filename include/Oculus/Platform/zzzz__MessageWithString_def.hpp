#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
class MessageWithString;
}
// Type: Oculus.Platform::MessageWithString
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13281))
// CS Name: Oculus.Platform.MessageWithString
class CORDL_TYPE MessageWithString : public Oculus::Platform::Message_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithString() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithString", modifiers: " const&", def_value: None }]
constexpr MessageWithString(MessageWithString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithString", modifiers: "&&", def_value: None }]
constexpr MessageWithString(MessageWithString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithString(void* ptr) noexcept : Oculus::Platform::Message_1<::StringW>(ptr) {
}


  constexpr MessageWithString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithString& operator=(MessageWithString&& o) noexcept = default;
  constexpr MessageWithString& operator=(MessageWithString const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithString(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f2f0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetString addr 0x2583c90 size 0x3c virtual true final false
 ::StringW GetString() ;

/// @brief Method GetDataFromMessage addr 0x2583ccc size 0x54 virtual true final false
 ::StringW GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithString);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithString, "Oculus.Platform", "MessageWithString");
