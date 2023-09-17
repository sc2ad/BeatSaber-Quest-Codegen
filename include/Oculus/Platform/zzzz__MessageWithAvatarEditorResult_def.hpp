#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAvatarEditorResult;
}
// Type: Oculus.Platform::MessageWithAvatarEditorResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13394)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4433 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13220))
// CS Name: Oculus.Platform.MessageWithAvatarEditorResult
class CORDL_TYPE MessageWithAvatarEditorResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AvatarEditorResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAvatarEditorResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAvatarEditorResult", modifiers: " const&", def_value: None }]
constexpr MessageWithAvatarEditorResult(MessageWithAvatarEditorResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAvatarEditorResult", modifiers: "&&", def_value: None }]
constexpr MessageWithAvatarEditorResult(MessageWithAvatarEditorResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAvatarEditorResult(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AvatarEditorResult>(ptr) {
}


  constexpr MessageWithAvatarEditorResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAvatarEditorResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAvatarEditorResult& operator=(MessageWithAvatarEditorResult&& o) noexcept = default;
  constexpr MessageWithAvatarEditorResult& operator=(MessageWithAvatarEditorResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAvatarEditorResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e168 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAvatarEditorResult addr 0x2580578 size 0x3c virtual true final false
 ::Oculus::Platform::Models::AvatarEditorResult GetAvatarEditorResult() ;

/// @brief Method GetDataFromMessage addr 0x25805b4 size 0x9c virtual true final false
 ::Oculus::Platform::Models::AvatarEditorResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithAvatarEditorResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAvatarEditorResult, "Oculus.Platform", "MessageWithAvatarEditorResult");
