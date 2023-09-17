#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMenuInstaller;
}
// Type: ::MultiplayerMenuInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5487))
// CS Name: MultiplayerMenuInstaller
class CORDL_TYPE MultiplayerMenuInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerMenuInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerMenuInstaller(MultiplayerMenuInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerMenuInstaller(MultiplayerMenuInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerMenuInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerMenuInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerMenuInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerMenuInstaller& operator=(MultiplayerMenuInstaller&& o) noexcept = default;
  constexpr MultiplayerMenuInstaller& operator=(MultiplayerMenuInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x211af18 size 0x8c virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerMenuInstaller() ;

/// @brief Method .ctor addr 0x211afa4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMenuInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMenuInstaller, "", "MultiplayerMenuInstaller");
