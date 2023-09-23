#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardViewController;
}
// Type: ::LeaderboardViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5745))
// CS Name: LeaderboardViewController
class CORDL_TYPE LeaderboardViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~LeaderboardViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardViewController", modifiers: " const&", def_value: None }]
constexpr LeaderboardViewController(LeaderboardViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardViewController", modifiers: "&&", def_value: None }]
constexpr LeaderboardViewController(LeaderboardViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr LeaderboardViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardViewController& operator=(LeaderboardViewController&& o) noexcept = default;
  constexpr LeaderboardViewController& operator=(LeaderboardViewController const& o) noexcept = default;
                


// Methods

/// @brief Method SetData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method RefreshLevelStats addr 0x2160020 size 0x4 virtual true final false
 void RefreshLevelStats() ;

// Ctor Parameters []
explicit LeaderboardViewController() ;

/// @brief Method .ctor addr 0x2160024 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardViewController, "", "LeaderboardViewController");
