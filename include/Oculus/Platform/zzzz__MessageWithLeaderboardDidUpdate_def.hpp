#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardDidUpdate;
}
// Type: Oculus.Platform::MessageWithLeaderboardDidUpdate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13292))
// CS Name: Oculus.Platform.MessageWithLeaderboardDidUpdate
class CORDL_TYPE MessageWithLeaderboardDidUpdate : public Oculus::Platform::Message_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLeaderboardDidUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: " const&", def_value: None }]
constexpr MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: "&&", def_value: None }]
constexpr MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLeaderboardDidUpdate(void* ptr) noexcept : Oculus::Platform::Message_1<bool>(ptr) {
}


  constexpr MessageWithLeaderboardDidUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLeaderboardDidUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLeaderboardDidUpdate& operator=(MessageWithLeaderboardDidUpdate&& o) noexcept = default;
  constexpr MessageWithLeaderboardDidUpdate& operator=(MessageWithLeaderboardDidUpdate const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithLeaderboardDidUpdate New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e9a8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLeaderboardDidUpdate addr 0x2584674 size 0x3c virtual true final false
 bool GetLeaderboardDidUpdate() ;

/// @brief Method GetDataFromMessage addr 0x25846b0 size 0x5c virtual true final false
 bool GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLeaderboardDidUpdate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardDidUpdate, "Oculus.Platform", "MessageWithLeaderboardDidUpdate");
