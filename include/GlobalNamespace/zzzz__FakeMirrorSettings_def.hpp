#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FakeMirrorSettings;
}
// Type: ::FakeMirrorSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15307))
// CS Name: FakeMirrorSettings
class CORDL_TYPE FakeMirrorSettings : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FakeMirrorSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: " const&", def_value: None }]
constexpr FakeMirrorSettings(FakeMirrorSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: "&&", def_value: None }]
constexpr FakeMirrorSettings(FakeMirrorSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FakeMirrorSettings(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FakeMirrorSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FakeMirrorSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FakeMirrorSettings& operator=(FakeMirrorSettings&& o) noexcept = default;
  constexpr FakeMirrorSettings& operator=(FakeMirrorSettings const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fakeMirrorTransparency, put=__set__fakeMirrorTransparency))  _fakeMirrorTransparency;

constexpr void __set__fakeMirrorTransparency(float_t value) ;

constexpr float_t __get__fakeMirrorTransparency() const;

 bool __declspec(property(get=__get__useVertexDistortion, put=__set__useVertexDistortion))  _useVertexDistortion;

constexpr void __set__useVertexDistortion(bool value) ;

constexpr bool __get__useVertexDistortion() const;

 float_t __declspec(property(get=__get__vertexDistortionNoiseScale, put=__set__vertexDistortionNoiseScale))  _vertexDistortionNoiseScale;

constexpr void __set__vertexDistortionNoiseScale(float_t value) ;

constexpr float_t __get__vertexDistortionNoiseScale() const;

 float_t __declspec(property(get=__get__vertexDistortionStrength, put=__set__vertexDistortionStrength))  _vertexDistortionStrength;

constexpr void __set__vertexDistortionStrength(float_t value) ;

constexpr float_t __get__vertexDistortionStrength() const;

 UnityEngine::Vector3 __declspec(property(get=__get__vertexDistortionDirectionality, put=__set__vertexDistortionDirectionality))  _vertexDistortionDirectionality;

constexpr void __set__vertexDistortionDirectionality(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__vertexDistortionDirectionality() const;

 float_t __declspec(property(get=__get__vertexDistortionZposMultiplier, put=__set__vertexDistortionZposMultiplier))  _vertexDistortionZposMultiplier;

constexpr void __set__vertexDistortionZposMultiplier(float_t value) ;

constexpr float_t __get__vertexDistortionZposMultiplier() const;

static int32_t __declspec(property(get=__get__fakeMirrorTransparencyId, put=__set__fakeMirrorTransparencyId))  _fakeMirrorTransparencyId;

static void __set__fakeMirrorTransparencyId(int32_t value) ;

static int32_t __get__fakeMirrorTransparencyId() ;

static int32_t __declspec(property(get=__get__vertexDistortionNoiseScaleId, put=__set__vertexDistortionNoiseScaleId))  _vertexDistortionNoiseScaleId;

static void __set__vertexDistortionNoiseScaleId(int32_t value) ;

static int32_t __get__vertexDistortionNoiseScaleId() ;

static int32_t __declspec(property(get=__get__vertexDistortionStrengthId, put=__set__vertexDistortionStrengthId))  _vertexDistortionStrengthId;

static void __set__vertexDistortionStrengthId(int32_t value) ;

static int32_t __get__vertexDistortionStrengthId() ;

static int32_t __declspec(property(get=__get__vertexDistortionDirectionalityId, put=__set__vertexDistortionDirectionalityId))  _vertexDistortionDirectionalityId;

static void __set__vertexDistortionDirectionalityId(int32_t value) ;

static int32_t __get__vertexDistortionDirectionalityId() ;

static int32_t __declspec(property(get=__get__vertexDistortionZposMultiplierId, put=__set__vertexDistortionZposMultiplierId))  _vertexDistortionZposMultiplierId;

static void __set__vertexDistortionZposMultiplierId(int32_t value) ;

static int32_t __get__vertexDistortionZposMultiplierId() ;


// Properties

 float_t __declspec(property(get=get_fakeMirrorTransparency, put=set_fakeMirrorTransparency))  fakeMirrorTransparency;


// Methods

/// @brief Method get_fakeMirrorTransparency addr 0x26764c0 size 0x8 virtual false final false
 float_t get_fakeMirrorTransparency() ;

/// @brief Method set_fakeMirrorTransparency addr 0x26764c8 size 0x8 virtual false final false
 void set_fakeMirrorTransparency(float_t value) ;

/// @brief Method Start addr 0x26764d0 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x26765e4 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnValidate addr 0x26765e8 size 0x4 virtual false final false
 void OnValidate() ;

/// @brief Method SetGlobalParameters addr 0x26764d4 size 0x110 virtual false final false
 void SetGlobalParameters() ;

// Ctor Parameters []
explicit FakeMirrorSettings() ;

/// @brief Method .ctor addr 0x26765ec size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FakeMirrorSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FakeMirrorSettings, "", "FakeMirrorSettings");
