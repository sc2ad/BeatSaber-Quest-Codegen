#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class LeaderboardList;
}
// Type: Oculus.Platform.Models::LeaderboardList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13427)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1138 }), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13428))
// CS Name: Oculus.Platform.Models.LeaderboardList
class CORDL_TYPE LeaderboardList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Leaderboard> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LeaderboardList() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardList", modifiers: " const&", def_value: None }]
constexpr LeaderboardList(LeaderboardList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardList", modifiers: "&&", def_value: None }]
constexpr LeaderboardList(LeaderboardList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Leaderboard>(ptr) {
}


  constexpr LeaderboardList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardList& operator=(LeaderboardList&& o) noexcept = default;
  constexpr LeaderboardList& operator=(LeaderboardList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LeaderboardList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259f5a0 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LeaderboardList, "Oculus.Platform.Models", "LeaderboardList");
