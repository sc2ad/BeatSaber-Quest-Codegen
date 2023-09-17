#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithApplicationVersion;
}
// Type: Oculus.Platform::MessageWithApplicationVersion
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13387)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4428 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13213))
// CS Name: Oculus.Platform.MessageWithApplicationVersion
class CORDL_TYPE MessageWithApplicationVersion : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithApplicationVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationVersion", modifiers: " const&", def_value: None }]
constexpr MessageWithApplicationVersion(MessageWithApplicationVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationVersion", modifiers: "&&", def_value: None }]
constexpr MessageWithApplicationVersion(MessageWithApplicationVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithApplicationVersion(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion>(ptr) {
}


  constexpr MessageWithApplicationVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithApplicationVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithApplicationVersion& operator=(MessageWithApplicationVersion&& o) noexcept = default;
  constexpr MessageWithApplicationVersion& operator=(MessageWithApplicationVersion const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithApplicationVersion(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257df00 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetApplicationVersion addr 0x257ff90 size 0x3c virtual true final false
 ::Oculus::Platform::Models::ApplicationVersion GetApplicationVersion() ;

/// @brief Method GetDataFromMessage addr 0x257ffcc size 0x9c virtual true final false
 ::Oculus::Platform::Models::ApplicationVersion GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationVersion, "Oculus.Platform", "MessageWithApplicationVersion");
