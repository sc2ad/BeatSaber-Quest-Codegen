#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
struct UnityEngine__ParticleSystem__Particle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MainModule;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemLightWithIds;
}
// Type: ::ParticleSystemLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14713))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14709))
// CS Name: ParticleSystemLightWithIds
class CORDL_TYPE ParticleSystemLightWithIds : public GlobalNamespace::RuntimeLightWithIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~ParticleSystemLightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithIds", modifiers: " const&", def_value: None }]
constexpr ParticleSystemLightWithIds(ParticleSystemLightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithIds", modifiers: "&&", def_value: None }]
constexpr ParticleSystemLightWithIds(ParticleSystemLightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemLightWithIds(void* ptr) noexcept : GlobalNamespace::RuntimeLightWithIds(ptr) {
}


  constexpr ParticleSystemLightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemLightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemLightWithIds& operator=(ParticleSystemLightWithIds&& o) noexcept = default;
  constexpr ParticleSystemLightWithIds& operator=(ParticleSystemLightWithIds const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 bool __declspec(property(get=__get__setOnlyOnce, put=__set__setOnlyOnce))  _setOnlyOnce;

constexpr void __set__setOnlyOnce(bool value) ;

constexpr bool __get__setOnlyOnce() const;

 bool __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly))  _setColorOnly;

constexpr void __set__setColorOnly(bool value) ;

constexpr bool __get__setColorOnly() const;

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;

 UnityEngine::UnityEngine__ParticleSystem__MainModule __declspec(property(get=__get__mainModule, put=__set__mainModule))  _mainModule;

constexpr void __set__mainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule __get__mainModule() const;

 ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> __declspec(property(get=__get__particles, put=__set__particles))  _particles;

constexpr void __set__particles(::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> value) ;

constexpr ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> __get__particles() const;


// Methods

/// @brief Method Awake addr 0x1f9fab8 size 0x80 virtual true final false
 void Awake() ;

/// @brief Method ColorWasSet addr 0x1f9fb38 size 0x460 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

static GlobalNamespace::ParticleSystemLightWithIds New_ctor() ;

/// @brief Method .ctor addr 0x1f9ff98 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ParticleSystemLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemLightWithIds, "", "ParticleSystemLightWithIds");
