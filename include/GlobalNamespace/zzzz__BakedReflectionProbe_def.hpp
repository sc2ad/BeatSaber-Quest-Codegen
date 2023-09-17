#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class ReflectionProbeDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedReflectionProbe;
}
// Type: ::BakedReflectionProbe
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5941))
// CS Name: BakedReflectionProbe
class CORDL_TYPE BakedReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BakedReflectionProbe() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: " const&", def_value: None }]
constexpr BakedReflectionProbe(BakedReflectionProbe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: "&&", def_value: None }]
constexpr BakedReflectionProbe(BakedReflectionProbe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakedReflectionProbe(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BakedReflectionProbe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakedReflectionProbe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakedReflectionProbe& operator=(BakedReflectionProbe&& o) noexcept = default;
  constexpr BakedReflectionProbe& operator=(BakedReflectionProbe const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__resolutionBeforeDownsample, put=__set__resolutionBeforeDownsample))  _resolutionBeforeDownsample;

constexpr void __set__resolutionBeforeDownsample(int32_t value) ;

constexpr int32_t __get__resolutionBeforeDownsample() const;

 int32_t __declspec(property(get=__get__downsampleByHalfCount, put=__set__downsampleByHalfCount))  _downsampleByHalfCount;

constexpr void __set__downsampleByHalfCount(int32_t value) ;

constexpr int32_t __get__downsampleByHalfCount() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__size() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__offset() const;

 ::GlobalNamespace::ReflectionProbeDataSO __declspec(property(get=__get__reflectionProbeData, put=__set__reflectionProbeData))  _reflectionProbeData;

constexpr void __set__reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO value) ;

constexpr ::GlobalNamespace::ReflectionProbeDataSO __get__reflectionProbeData() const;

static int32_t __declspec(property(get=__get__reflectionProbeBoundsMinPropertyId, put=__set__reflectionProbeBoundsMinPropertyId))  _reflectionProbeBoundsMinPropertyId;

static void __set__reflectionProbeBoundsMinPropertyId(int32_t value) ;

static int32_t __get__reflectionProbeBoundsMinPropertyId() ;

static int32_t __declspec(property(get=__get__reflectionProbeBoundsMaxPropertyId, put=__set__reflectionProbeBoundsMaxPropertyId))  _reflectionProbeBoundsMaxPropertyId;

static void __set__reflectionProbeBoundsMaxPropertyId(int32_t value) ;

static int32_t __get__reflectionProbeBoundsMaxPropertyId() ;

static int32_t __declspec(property(get=__get__reflectionProbePositionPropertyId, put=__set__reflectionProbePositionPropertyId))  _reflectionProbePositionPropertyId;

static void __set__reflectionProbePositionPropertyId(int32_t value) ;

static int32_t __get__reflectionProbePositionPropertyId() ;

static int32_t __declspec(property(get=__get__reflectionProbeTexture1PropertyId, put=__set__reflectionProbeTexture1PropertyId))  _reflectionProbeTexture1PropertyId;

static void __set__reflectionProbeTexture1PropertyId(int32_t value) ;

static int32_t __get__reflectionProbeTexture1PropertyId() ;

static int32_t __declspec(property(get=__get__reflectionProbeTexture2PropertyId, put=__set__reflectionProbeTexture2PropertyId))  _reflectionProbeTexture2PropertyId;

static void __set__reflectionProbeTexture2PropertyId(int32_t value) ;

static int32_t __get__reflectionProbeTexture2PropertyId() ;

 ::UnityEngine::Cubemap __declspec(property(get=__get__blackCubemap, put=__set__blackCubemap))  _blackCubemap;

constexpr void __set__blackCubemap(::UnityEngine::Cubemap value) ;

constexpr ::UnityEngine::Cubemap __get__blackCubemap() const;


// Properties

 ::GlobalNamespace::ReflectionProbeDataSO __declspec(property(get=get_reflectionProbeData, put=set_reflectionProbeData))  reflectionProbeData;

 ::UnityEngine::Vector3 __declspec(property(get=get_position))  position;

 int32_t __declspec(property(get=get_resolutionBeforeDownsample))  resolutionBeforeDownsample;

 int32_t __declspec(property(get=get_downsampleByHalfCount))  downsampleByHalfCount;


// Methods

/// @brief Method get_reflectionProbeData addr 0x219b1d4 size 0x8 virtual false final false
 ::GlobalNamespace::ReflectionProbeDataSO get_reflectionProbeData() ;

/// @brief Method set_reflectionProbeData addr 0x219b1dc size 0x8 virtual false final false
 void set_reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO value) ;

/// @brief Method get_position addr 0x219b1e4 size 0x20 virtual false final false
 ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_resolutionBeforeDownsample addr 0x219b204 size 0x8 virtual false final false
 int32_t get_resolutionBeforeDownsample() ;

/// @brief Method get_downsampleByHalfCount addr 0x219b20c size 0x8 virtual false final false
 int32_t get_downsampleByHalfCount() ;

/// @brief Method Start addr 0x219b214 size 0xb8 virtual false final false
 void Start() ;

/// @brief Method SendDataToShaders addr 0x219b2cc size 0x22c virtual false final false
 void SendDataToShaders() ;

// Ctor Parameters []
explicit BakedReflectionProbe() ;

/// @brief Method .ctor addr 0x219b4f8 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BakedReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedReflectionProbe, "", "BakedReflectionProbe");
