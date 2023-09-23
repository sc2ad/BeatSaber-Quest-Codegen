#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerObjectInstaller;
}
// Type: ::MultiplayerObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5317))
// CS Name: MultiplayerObjectInstaller
class CORDL_TYPE MultiplayerObjectInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerObjectInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerObjectInstaller(MultiplayerObjectInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerObjectInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerObjectInstaller(MultiplayerObjectInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerObjectInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerObjectInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerObjectInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerObjectInstaller& operator=(MultiplayerObjectInstaller&& o) noexcept = default;
  constexpr MultiplayerObjectInstaller& operator=(MultiplayerObjectInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerScoreRingItem __declspec(property(get=__get__inEnvironmentTextsPrefab, put=__set__inEnvironmentTextsPrefab))  _inEnvironmentTextsPrefab;

constexpr void __set__inEnvironmentTextsPrefab(GlobalNamespace::MultiplayerScoreRingItem value) ;

constexpr GlobalNamespace::MultiplayerScoreRingItem __get__inEnvironmentTextsPrefab() const;

 GlobalNamespace::FireworkItemController __declspec(property(get=__get__fireworkItemControllerPrefab, put=__set__fireworkItemControllerPrefab))  _fireworkItemControllerPrefab;

constexpr void __set__fireworkItemControllerPrefab(GlobalNamespace::FireworkItemController value) ;

constexpr GlobalNamespace::FireworkItemController __get__fireworkItemControllerPrefab() const;

 GlobalNamespace::MultiplayerResultsPyramidViewAvatar __declspec(property(get=__get__multiplayerResultsPyramidViewAvatarPrefab, put=__set__multiplayerResultsPyramidViewAvatarPrefab))  _multiplayerResultsPyramidViewAvatarPrefab;

constexpr void __set__multiplayerResultsPyramidViewAvatarPrefab(GlobalNamespace::MultiplayerResultsPyramidViewAvatar value) ;

constexpr GlobalNamespace::MultiplayerResultsPyramidViewAvatar __get__multiplayerResultsPyramidViewAvatarPrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x20fb304 size 0x144 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerObjectInstaller() ;

/// @brief Method .ctor addr 0x20fb448 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerObjectInstaller, "", "MultiplayerObjectInstaller");
