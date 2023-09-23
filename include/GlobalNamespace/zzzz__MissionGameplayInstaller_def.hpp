#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class MissionGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionGameplayInstaller;
}
// Type: ::MissionGameplayInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5483))
// CS Name: MissionGameplayInstaller
class CORDL_TYPE MissionGameplayInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MissionGameplayInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: " const&", def_value: None }]
constexpr MissionGameplayInstaller(MissionGameplayInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: "&&", def_value: None }]
constexpr MissionGameplayInstaller(MissionGameplayInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionGameplayInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MissionGameplayInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionGameplayInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionGameplayInstaller& operator=(MissionGameplayInstaller&& o) noexcept = default;
  constexpr MissionGameplayInstaller& operator=(MissionGameplayInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionGameplaySceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::MissionGameplaySceneSetupData value) ;

constexpr GlobalNamespace::MissionGameplaySceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x211a128 size 0x490 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MissionGameplayInstaller() ;

/// @brief Method .ctor addr 0x211a5b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionGameplayInstaller, "", "MissionGameplayInstaller");
