#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelNoTransitionInstaller;
}
// Type: ::MultiplayerLevelNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11118))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6093))
// CS Name: MultiplayerLevelNoTransitionInstaller
class CORDL_TYPE MultiplayerLevelNoTransitionInstaller : public Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MultiplayerLevelNoTransitionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelNoTransitionInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerLevelNoTransitionInstaller(MultiplayerLevelNoTransitionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerLevelNoTransitionInstaller(MultiplayerLevelNoTransitionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLevelNoTransitionInstaller(void* ptr) noexcept : Zenject::NoTransitionInstaller(ptr) {
}


  constexpr MultiplayerLevelNoTransitionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLevelNoTransitionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLevelNoTransitionInstaller& operator=(MultiplayerLevelNoTransitionInstaller&& o) noexcept = default;
  constexpr MultiplayerLevelNoTransitionInstaller& operator=(MultiplayerLevelNoTransitionInstaller const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MultiplayerLevelNoTransitionInstaller() ;

/// @brief Method .ctor addr 0x21b66bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelNoTransitionInstaller, "", "MultiplayerLevelNoTransitionInstaller");
