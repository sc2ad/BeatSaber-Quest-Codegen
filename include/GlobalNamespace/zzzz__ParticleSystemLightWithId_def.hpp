#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
struct UnityEngine__ParticleSystem__Particle;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MainModule;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemLightWithId;
}
// Type: ::ParticleSystemLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14708))
// CS Name: ParticleSystemLightWithId
class CORDL_TYPE ParticleSystemLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ParticleSystemLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: " const&", def_value: None }]
constexpr ParticleSystemLightWithId(ParticleSystemLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemLightWithId", modifiers: "&&", def_value: None }]
constexpr ParticleSystemLightWithId(ParticleSystemLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemLightWithId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr ParticleSystemLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemLightWithId& operator=(ParticleSystemLightWithId&& o) noexcept = default;
  constexpr ParticleSystemLightWithId& operator=(ParticleSystemLightWithId const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 bool __declspec(property(get=__get_setOnlyOnce, put=__set_setOnlyOnce))  setOnlyOnce;

constexpr void __set_setOnlyOnce(bool value) ;

constexpr bool __get_setOnlyOnce() const;

 bool __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly))  _setColorOnly;

constexpr void __set__setColorOnly(bool value) ;

constexpr bool __get__setColorOnly() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;

 UnityEngine::UnityEngine__ParticleSystem__MainModule __declspec(property(get=__get__mainModule, put=__set__mainModule))  _mainModule;

constexpr void __set__mainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule __get__mainModule() const;

 ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> __declspec(property(get=__get__particles, put=__set__particles))  _particles;

constexpr void __set__particles(::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> value) ;

constexpr ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> __get__particles() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x1f9f568 size 0x5c virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method Awake addr 0x1f9f5c4 size 0x78 virtual false final false
 void Awake() ;

/// @brief Method ColorWasSet addr 0x1f9f63c size 0x464 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

static GlobalNamespace::ParticleSystemLightWithId New_ctor() ;

/// @brief Method .ctor addr 0x1f9faa0 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ParticleSystemLightWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemLightWithId, "", "ParticleSystemLightWithId");
