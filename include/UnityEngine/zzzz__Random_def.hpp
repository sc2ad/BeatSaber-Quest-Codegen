#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
// Type: UnityEngine::Random
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10082))
// CS Name: UnityEngine.Random
class CORDL_TYPE Random : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Random() = default;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: " const&", def_value: None }]
constexpr Random(Random const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
constexpr Random(Random&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Random(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Random& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Random& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Random& operator=(Random&& o) noexcept = default;
  constexpr Random& operator=(Random const& o) noexcept = default;
                


// Properties

static float_t __declspec(property(get=get_value))  value;

static ::UnityEngine::Vector3 __declspec(property(get=get_insideUnitSphere))  insideUnitSphere;

static ::UnityEngine::Vector3 __declspec(property(get=get_onUnitSphere))  onUnitSphere;

static ::UnityEngine::Quaternion __declspec(property(get=get_rotation))  rotation;


// Methods

/// @brief Method InitState addr 0x2b4df08 size 0x3c virtual false final false
static void InitState(int32_t seed) ;

/// @brief Method Range addr 0x2b4df44 size 0x40 virtual false final false
static float_t Range(float_t minInclusive, float_t maxInclusive) ;

/// @brief Method Range addr 0x2b4df84 size 0x44 virtual false final false
static int32_t Range(int32_t minInclusive, int32_t maxExclusive) ;

/// @brief Method RandomRangeInt addr 0x2b4dfc8 size 0x44 virtual false final false
static int32_t RandomRangeInt(int32_t minInclusive, int32_t maxExclusive) ;

/// @brief Method get_value addr 0x2b4e00c size 0x28 virtual false final false
static float_t get_value() ;

/// @brief Method get_insideUnitSphere addr 0x2b4e034 size 0x4c virtual false final false
static ::UnityEngine::Vector3 get_insideUnitSphere() ;

/// @brief Method get_onUnitSphere addr 0x2b4e0bc size 0x4c virtual false final false
static ::UnityEngine::Vector3 get_onUnitSphere() ;

/// @brief Method get_rotation addr 0x2b4e144 size 0x48 virtual false final false
static ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method ColorHSV addr 0x2b4e1c8 size 0x24 virtual false final false
static ::UnityEngine::Color ColorHSV() ;

/// @brief Method ColorHSV addr 0x2b4e1ec size 0x164 virtual false final false
static ::UnityEngine::Color ColorHSV(float_t hueMin, float_t hueMax, float_t saturationMin, float_t saturationMax, float_t valueMin, float_t valueMax, float_t alphaMin, float_t alphaMax) ;

/// @brief Method get_insideUnitSphere_Injected addr 0x2b4e080 size 0x3c virtual false final false
static void get_insideUnitSphere_Injected(ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method get_onUnitSphere_Injected addr 0x2b4e108 size 0x3c virtual false final false
static void get_onUnitSphere_Injected(ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method get_rotation_Injected addr 0x2b4e18c size 0x3c virtual false final false
static void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Random);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Random, "UnityEngine", "Random");
