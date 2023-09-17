#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuNeonLightsGenerator;
}
// Type: ::MenuNeonLightsGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4809))
// CS Name: MenuNeonLightsGenerator
class CORDL_TYPE MenuNeonLightsGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MenuNeonLightsGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: " const&", def_value: None }]
constexpr MenuNeonLightsGenerator(MenuNeonLightsGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: "&&", def_value: None }]
constexpr MenuNeonLightsGenerator(MenuNeonLightsGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuNeonLightsGenerator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MenuNeonLightsGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuNeonLightsGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuNeonLightsGenerator& operator=(MenuNeonLightsGenerator&& o) noexcept = default;
  constexpr MenuNeonLightsGenerator& operator=(MenuNeonLightsGenerator const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__generate, put=__set__generate))  _generate;

constexpr void __set__generate(bool value) ;

constexpr bool __get__generate() const;

 float_t __declspec(property(get=__get__radius, put=__set__radius))  _radius;

constexpr void __set__radius(float_t value) ;

constexpr float_t __get__radius() const;

 float_t __declspec(property(get=__get__angle, put=__set__angle))  _angle;

constexpr void __set__angle(float_t value) ;

constexpr float_t __get__angle() const;

 int32_t __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements))  _numberOfElements;

constexpr void __set__numberOfElements(int32_t value) ;

constexpr int32_t __get__numberOfElements() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__intensityCurve, put=__set__intensityCurve))  _intensityCurve;

constexpr void __set__intensityCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__intensityCurve() const;

 float_t __declspec(property(get=__get__intensityMultiplier, put=__set__intensityMultiplier))  _intensityMultiplier;

constexpr void __set__intensityMultiplier(float_t value) ;

constexpr float_t __get__intensityMultiplier() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__lengthCurve, put=__set__lengthCurve))  _lengthCurve;

constexpr void __set__lengthCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__lengthCurve() const;

 float_t __declspec(property(get=__get__lengthMultiplier, put=__set__lengthMultiplier))  _lengthMultiplier;

constexpr void __set__lengthMultiplier(float_t value) ;

constexpr float_t __get__lengthMultiplier() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__widthCurve, put=__set__widthCurve))  _widthCurve;

constexpr void __set__widthCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__widthCurve() const;

 float_t __declspec(property(get=__get__widthMultiplier, put=__set__widthMultiplier))  _widthMultiplier;

constexpr void __set__widthMultiplier(float_t value) ;

constexpr float_t __get__widthMultiplier() const;

 ::GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__neonLightPrefab, put=__set__neonLightPrefab))  _neonLightPrefab;

constexpr void __set__neonLightPrefab(::GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight __get__neonLightPrefab() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__afterSpawnRotation, put=__set__afterSpawnRotation))  _afterSpawnRotation;

constexpr void __set__afterSpawnRotation(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__afterSpawnRotation() const;


// Methods

// Ctor Parameters []
explicit MenuNeonLightsGenerator() ;

/// @brief Method .ctor addr 0x222cc58 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MenuNeonLightsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuNeonLightsGenerator, "", "MenuNeonLightsGenerator");
