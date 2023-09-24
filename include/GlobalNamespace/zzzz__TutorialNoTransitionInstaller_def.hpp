#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialNoTransitionInstaller;
}
// Type: ::TutorialNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11118))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6097))
// CS Name: TutorialNoTransitionInstaller
class CORDL_TYPE TutorialNoTransitionInstaller : public Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TutorialNoTransitionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoTransitionInstaller", modifiers: " const&", def_value: None }]
constexpr TutorialNoTransitionInstaller(TutorialNoTransitionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoTransitionInstaller", modifiers: "&&", def_value: None }]
constexpr TutorialNoTransitionInstaller(TutorialNoTransitionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialNoTransitionInstaller(void* ptr) noexcept : Zenject::NoTransitionInstaller(ptr) {
}


  constexpr TutorialNoTransitionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialNoTransitionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialNoTransitionInstaller& operator=(TutorialNoTransitionInstaller&& o) noexcept = default;
  constexpr TutorialNoTransitionInstaller& operator=(TutorialNoTransitionInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TutorialScenesTransitionSetupDataSO __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData))  _scenesTransitionSetupData;

constexpr void __set__scenesTransitionSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO __get__scenesTransitionSetupData() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get__playerSpecificSettings, put=__set__playerSpecificSettings))  _playerSpecificSettings;

constexpr void __set__playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get__playerSpecificSettings() const;


// Methods

/// @brief Method InstallBindings addr 0x21b691c size 0x44 virtual true final false
 void InstallBindings(Zenject::DiContainer container) ;

static GlobalNamespace::TutorialNoTransitionInstaller New_ctor() ;

/// @brief Method .ctor addr 0x21b6960 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TutorialNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialNoTransitionInstaller, "", "TutorialNoTransitionInstaller");
