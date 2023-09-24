#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardGameplayInstaller;
}
// Type: ::StandardGameplayInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5489))
// CS Name: StandardGameplayInstaller
class CORDL_TYPE StandardGameplayInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StandardGameplayInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: " const&", def_value: None }]
constexpr StandardGameplayInstaller(StandardGameplayInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: "&&", def_value: None }]
constexpr StandardGameplayInstaller(StandardGameplayInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardGameplayInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr StandardGameplayInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardGameplayInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardGameplayInstaller& operator=(StandardGameplayInstaller&& o) noexcept = default;
  constexpr StandardGameplayInstaller& operator=(StandardGameplayInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StandardGameplaySceneSetupData __declspec(property(get=__get__standardSceneSetupData, put=__set__standardSceneSetupData))  _standardSceneSetupData;

constexpr void __set__standardSceneSetupData(GlobalNamespace::StandardGameplaySceneSetupData value) ;

constexpr GlobalNamespace::StandardGameplaySceneSetupData __get__standardSceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x211b1e8 size 0x370 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::StandardGameplayInstaller New_ctor() ;

/// @brief Method .ctor addr 0x211b558 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StandardGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardGameplayInstaller, "", "StandardGameplayInstaller");
