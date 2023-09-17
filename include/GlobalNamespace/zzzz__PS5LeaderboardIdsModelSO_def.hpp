#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class PS5LeaderboardIdsModelSO;
}
// Type: ::PS5LeaderboardIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4672))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4649))
// CS Name: PS5LeaderboardIdsModelSO
class CORDL_TYPE PS5LeaderboardIdsModelSO : public ::GlobalNamespace::SonyLeaderboardIdsModelSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PS5LeaderboardIdsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5LeaderboardIdsModelSO", modifiers: " const&", def_value: None }]
constexpr PS5LeaderboardIdsModelSO(PS5LeaderboardIdsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5LeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
constexpr PS5LeaderboardIdsModelSO(PS5LeaderboardIdsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5LeaderboardIdsModelSO(void* ptr) noexcept : ::GlobalNamespace::SonyLeaderboardIdsModelSO(ptr) {
}


  constexpr PS5LeaderboardIdsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5LeaderboardIdsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5LeaderboardIdsModelSO& operator=(PS5LeaderboardIdsModelSO&& o) noexcept = default;
  constexpr PS5LeaderboardIdsModelSO& operator=(PS5LeaderboardIdsModelSO const& o) noexcept = default;
                


// Methods

/// @brief Method DoesSupport360 addr 0x221a7e4 size 0x8 virtual true final false
 bool DoesSupport360() ;

// Ctor Parameters []
explicit PS5LeaderboardIdsModelSO() ;

/// @brief Method .ctor addr 0x221a7ec size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS5LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5LeaderboardIdsModelSO, "", "PS5LeaderboardIdsModelSO");
