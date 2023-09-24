#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class SpawnRotationChevron;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnChevronObjectPoolsInstaller;
}
// Type: ::SpawnChevronObjectPoolsInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5093))
// CS Name: SpawnChevronObjectPoolsInstaller
class CORDL_TYPE SpawnChevronObjectPoolsInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SpawnChevronObjectPoolsInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: " const&", def_value: None }]
constexpr SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: "&&", def_value: None }]
constexpr SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpawnChevronObjectPoolsInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr SpawnChevronObjectPoolsInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpawnChevronObjectPoolsInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpawnChevronObjectPoolsInstaller& operator=(SpawnChevronObjectPoolsInstaller&& o) noexcept = default;
  constexpr SpawnChevronObjectPoolsInstaller& operator=(SpawnChevronObjectPoolsInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SpawnRotationChevron __declspec(property(get=__get__spawnRotationChevronPrefab, put=__set__spawnRotationChevronPrefab))  _spawnRotationChevronPrefab;

constexpr void __set__spawnRotationChevronPrefab(GlobalNamespace::SpawnRotationChevron value) ;

constexpr GlobalNamespace::SpawnRotationChevron __get__spawnRotationChevronPrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x226a5e8 size 0x84 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::SpawnChevronObjectPoolsInstaller New_ctor() ;

/// @brief Method .ctor addr 0x226a66c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SpawnChevronObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnChevronObjectPoolsInstaller, "", "SpawnChevronObjectPoolsInstaller");
