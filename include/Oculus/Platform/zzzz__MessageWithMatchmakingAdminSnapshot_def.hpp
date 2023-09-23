#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingAdminSnapshot;
}
// Type: Oculus.Platform::MessageWithMatchmakingAdminSnapshot
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4456 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13437))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13252))
// CS Name: Oculus.Platform.MessageWithMatchmakingAdminSnapshot
class CORDL_TYPE MessageWithMatchmakingAdminSnapshot : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingAdminSnapshot> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithMatchmakingAdminSnapshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingAdminSnapshot", modifiers: " const&", def_value: None }]
constexpr MessageWithMatchmakingAdminSnapshot(MessageWithMatchmakingAdminSnapshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingAdminSnapshot", modifiers: "&&", def_value: None }]
constexpr MessageWithMatchmakingAdminSnapshot(MessageWithMatchmakingAdminSnapshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithMatchmakingAdminSnapshot(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingAdminSnapshot>(ptr) {
}


  constexpr MessageWithMatchmakingAdminSnapshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithMatchmakingAdminSnapshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithMatchmakingAdminSnapshot& operator=(MessageWithMatchmakingAdminSnapshot&& o) noexcept = default;
  constexpr MessageWithMatchmakingAdminSnapshot& operator=(MessageWithMatchmakingAdminSnapshot const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithMatchmakingAdminSnapshot(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ea58 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetMatchmakingAdminSnapshot addr 0x2582260 size 0x3c virtual true final false
 Oculus::Platform::Models::MatchmakingAdminSnapshot GetMatchmakingAdminSnapshot() ;

/// @brief Method GetDataFromMessage addr 0x258229c size 0x9c virtual true final false
 Oculus::Platform::Models::MatchmakingAdminSnapshot GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithMatchmakingAdminSnapshot);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingAdminSnapshot, "Oculus.Platform", "MessageWithMatchmakingAdminSnapshot");
