#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class MatchmakingStats;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMatchmakingStatsUnderMatchmakingStats;
}
// Type: Oculus.Platform::MessageWithMatchmakingStatsUnderMatchmakingStats
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4460 }), TypeDefinitionIndex(TypeDefinitionIndex(13445))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13255))
// CS Name: Oculus.Platform.MessageWithMatchmakingStatsUnderMatchmakingStats
class CORDL_TYPE MessageWithMatchmakingStatsUnderMatchmakingStats : public Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingStats> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithMatchmakingStatsUnderMatchmakingStats() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingStatsUnderMatchmakingStats", modifiers: " const&", def_value: None }]
constexpr MessageWithMatchmakingStatsUnderMatchmakingStats(MessageWithMatchmakingStatsUnderMatchmakingStats const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMatchmakingStatsUnderMatchmakingStats", modifiers: "&&", def_value: None }]
constexpr MessageWithMatchmakingStatsUnderMatchmakingStats(MessageWithMatchmakingStatsUnderMatchmakingStats&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithMatchmakingStatsUnderMatchmakingStats(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingStats>(ptr) {
}


  constexpr MessageWithMatchmakingStatsUnderMatchmakingStats& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithMatchmakingStatsUnderMatchmakingStats& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithMatchmakingStatsUnderMatchmakingStats& operator=(MessageWithMatchmakingStatsUnderMatchmakingStats&& o) noexcept = default;
  constexpr MessageWithMatchmakingStatsUnderMatchmakingStats& operator=(MessageWithMatchmakingStatsUnderMatchmakingStats const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithMatchmakingStatsUnderMatchmakingStats(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ebb8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetMatchmakingStats addr 0x25824e8 size 0x3c virtual true final false
 Oculus::Platform::Models::MatchmakingStats GetMatchmakingStats() ;

/// @brief Method GetDataFromMessage addr 0x2582524 size 0x9c virtual true final false
 Oculus::Platform::Models::MatchmakingStats GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats, "Oculus.Platform", "MessageWithMatchmakingStatsUnderMatchmakingStats");
