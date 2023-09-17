#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class PS4LeaderboardIdsModelSO;
}
// Type: ::PS4LeaderboardIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4672))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4637))
// CS Name: PS4LeaderboardIdsModelSO
class CORDL_TYPE PS4LeaderboardIdsModelSO : public ::GlobalNamespace::SonyLeaderboardIdsModelSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PS4LeaderboardIdsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4LeaderboardIdsModelSO", modifiers: " const&", def_value: None }]
constexpr PS4LeaderboardIdsModelSO(PS4LeaderboardIdsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4LeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
constexpr PS4LeaderboardIdsModelSO(PS4LeaderboardIdsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4LeaderboardIdsModelSO(void* ptr) noexcept : ::GlobalNamespace::SonyLeaderboardIdsModelSO(ptr) {
}


  constexpr PS4LeaderboardIdsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4LeaderboardIdsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4LeaderboardIdsModelSO& operator=(PS4LeaderboardIdsModelSO&& o) noexcept = default;
  constexpr PS4LeaderboardIdsModelSO& operator=(PS4LeaderboardIdsModelSO const& o) noexcept = default;
                


// Methods

/// @brief Method DoesSupport360 addr 0x221a40c size 0x8 virtual true final false
 bool DoesSupport360() ;

// Ctor Parameters []
explicit PS4LeaderboardIdsModelSO() ;

/// @brief Method .ctor addr 0x221a414 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS4LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4LeaderboardIdsModelSO, "", "PS4LeaderboardIdsModelSO");
