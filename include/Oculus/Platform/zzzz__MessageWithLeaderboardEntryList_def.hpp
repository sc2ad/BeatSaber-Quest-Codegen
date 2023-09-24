#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardEntryList;
}
// Type: Oculus.Platform::MessageWithLeaderboardEntryList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 944 }), TypeDefinitionIndex(TypeDefinitionIndex(13430))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13246))
// CS Name: Oculus.Platform.MessageWithLeaderboardEntryList
class CORDL_TYPE MessageWithLeaderboardEntryList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLeaderboardEntryList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardEntryList", modifiers: " const&", def_value: None }]
constexpr MessageWithLeaderboardEntryList(MessageWithLeaderboardEntryList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardEntryList", modifiers: "&&", def_value: None }]
constexpr MessageWithLeaderboardEntryList(MessageWithLeaderboardEntryList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLeaderboardEntryList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList>(ptr) {
}


  constexpr MessageWithLeaderboardEntryList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLeaderboardEntryList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLeaderboardEntryList& operator=(MessageWithLeaderboardEntryList&& o) noexcept = default;
  constexpr MessageWithLeaderboardEntryList& operator=(MessageWithLeaderboardEntryList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithLeaderboardEntryList New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e950 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLeaderboardEntryList addr 0x2581bf0 size 0x3c virtual true final false
 Oculus::Platform::Models::LeaderboardEntryList GetLeaderboardEntryList() ;

/// @brief Method GetDataFromMessage addr 0x2581c2c size 0x9c virtual true final false
 Oculus::Platform::Models::LeaderboardEntryList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLeaderboardEntryList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardEntryList, "Oculus.Platform", "MessageWithLeaderboardEntryList");
