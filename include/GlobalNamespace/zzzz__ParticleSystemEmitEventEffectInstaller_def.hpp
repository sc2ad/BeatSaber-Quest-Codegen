#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ParticleSystemEventController;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEmitEventEffectInstaller;
}
// Type: ::ParticleSystemEmitEventEffectInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5064))
// CS Name: ParticleSystemEmitEventEffectInstaller
class CORDL_TYPE ParticleSystemEmitEventEffectInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ParticleSystemEmitEventEffectInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: " const&", def_value: None }]
constexpr ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: "&&", def_value: None }]
constexpr ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemEmitEventEffectInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr ParticleSystemEmitEventEffectInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemEmitEventEffectInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemEmitEventEffectInstaller& operator=(ParticleSystemEmitEventEffectInstaller&& o) noexcept = default;
  constexpr ParticleSystemEmitEventEffectInstaller& operator=(ParticleSystemEmitEventEffectInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ParticleSystemEventController __declspec(property(get=__get__particleSystemEventControllerPrefab, put=__set__particleSystemEventControllerPrefab))  _particleSystemEventControllerPrefab;

constexpr void __set__particleSystemEventControllerPrefab(::GlobalNamespace::ParticleSystemEventController value) ;

constexpr ::GlobalNamespace::ParticleSystemEventController __get__particleSystemEventControllerPrefab() const;

 int32_t __declspec(property(get=__get__particleSystemEventControllerInitialSize, put=__set__particleSystemEventControllerInitialSize))  _particleSystemEventControllerInitialSize;

constexpr void __set__particleSystemEventControllerInitialSize(int32_t value) ;

constexpr int32_t __get__particleSystemEventControllerInitialSize() const;


// Methods

/// @brief Method InstallBindings addr 0x2266238 size 0xa8 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit ParticleSystemEmitEventEffectInstaller() ;

/// @brief Method .ctor addr 0x22662e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, "", "ParticleSystemEmitEventEffectInstaller");
