#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace {
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInstaller;
}
// Type: ::MultiplayerLocalActivePlayerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5255))
// CS Name: MultiplayerLocalActivePlayerInstaller
class CORDL_TYPE MultiplayerLocalActivePlayerInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerLocalActivePlayerInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActivePlayerInstaller(MultiplayerLocalActivePlayerInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActivePlayerInstaller(MultiplayerLocalActivePlayerInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActivePlayerInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerLocalActivePlayerInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerInstaller& operator=(MultiplayerLocalActivePlayerInstaller&& o) noexcept = default;
  constexpr MultiplayerLocalActivePlayerInstaller& operator=(MultiplayerLocalActivePlayerInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x20e8044 size 0x100 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerLocalActivePlayerInstaller() ;

/// @brief Method .ctor addr 0x20e8144 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInstaller, "", "MultiplayerLocalActivePlayerInstaller");
