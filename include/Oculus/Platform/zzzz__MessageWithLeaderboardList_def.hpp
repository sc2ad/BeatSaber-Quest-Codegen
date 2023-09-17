#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class LeaderboardList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardList;
}
// Type: Oculus.Platform::MessageWithLeaderboardList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13428)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4451 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13245))
// CS Name: Oculus.Platform.MessageWithLeaderboardList
class CORDL_TYPE MessageWithLeaderboardList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLeaderboardList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardList", modifiers: " const&", def_value: None }]
constexpr MessageWithLeaderboardList(MessageWithLeaderboardList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardList", modifiers: "&&", def_value: None }]
constexpr MessageWithLeaderboardList(MessageWithLeaderboardList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLeaderboardList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardList>(ptr) {
}


  constexpr MessageWithLeaderboardList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLeaderboardList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLeaderboardList& operator=(MessageWithLeaderboardList&& o) noexcept = default;
  constexpr MessageWithLeaderboardList& operator=(MessageWithLeaderboardList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLeaderboardList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e8f8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLeaderboardList addr 0x2581b18 size 0x3c virtual true final false
 ::Oculus::Platform::Models::LeaderboardList GetLeaderboardList() ;

/// @brief Method GetDataFromMessage addr 0x2581b54 size 0x9c virtual true final false
 ::Oculus::Platform::Models::LeaderboardList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardList, "Oculus.Platform", "MessageWithLeaderboardList");
