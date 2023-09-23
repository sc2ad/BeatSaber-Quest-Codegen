#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct UnityEngine__Camera__StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRVignette__FalloffType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRVignette__MeshComplexityLevel;
}
namespace GlobalNamespace {
class OVRVignette;
}
// Type: ::MeshComplexityLevel
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8974))
// CS Name: OVRVignette::MeshComplexityLevel
struct CORDL_TYPE GlobalNamespace__OVRVignette__MeshComplexityLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRVignette__MeshComplexityLevel(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRVignette__MeshComplexityLevel(GlobalNamespace__OVRVignette__MeshComplexityLevel const&) = default;
                    constexpr GlobalNamespace__OVRVignette__MeshComplexityLevel(GlobalNamespace__OVRVignette__MeshComplexityLevel&&) = default;
                    constexpr GlobalNamespace__OVRVignette__MeshComplexityLevel& operator=(GlobalNamespace__OVRVignette__MeshComplexityLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRVignette__MeshComplexityLevel& operator=(GlobalNamespace__OVRVignette__MeshComplexityLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRVignette__MeshComplexityLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRVignette__MeshComplexityLevel_Unwrapped : int32_t {
__VerySimple = 0,
__Simple = 1,
__Normal = 2,
__Detailed = 3,
__VeryDetailed = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRVignette__MeshComplexityLevel_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRVignette__MeshComplexityLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VerySimple offset 0
static GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel const VerySimple;

/// @brief Field Simple offset 0
static GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel const Simple;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel const Normal;

/// @brief Field Detailed offset 0
static GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel const Detailed;

/// @brief Field VeryDetailed offset 0
static GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel const VeryDetailed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FalloffType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8975))
// CS Name: OVRVignette::FalloffType
struct CORDL_TYPE GlobalNamespace__OVRVignette__FalloffType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRVignette__FalloffType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRVignette__FalloffType(GlobalNamespace__OVRVignette__FalloffType const&) = default;
                    constexpr GlobalNamespace__OVRVignette__FalloffType(GlobalNamespace__OVRVignette__FalloffType&&) = default;
                    constexpr GlobalNamespace__OVRVignette__FalloffType& operator=(GlobalNamespace__OVRVignette__FalloffType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRVignette__FalloffType& operator=(GlobalNamespace__OVRVignette__FalloffType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRVignette__FalloffType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRVignette__FalloffType_Unwrapped : int32_t {
__Linear = 0,
__Quadratic = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRVignette__FalloffType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRVignette__FalloffType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Linear offset 0
static GlobalNamespace::GlobalNamespace__OVRVignette__FalloffType const Linear;

/// @brief Field Quadratic offset 0
static GlobalNamespace::GlobalNamespace__OVRVignette__FalloffType const Quadratic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRVignette
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8976))
// CS Name: OVRVignette
class CORDL_TYPE OVRVignette : public UnityEngine::MonoBehaviour {
public:
// Declarations
using FalloffType = GlobalNamespace::GlobalNamespace__OVRVignette__FalloffType;

using MeshComplexityLevel = GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~OVRVignette() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRVignette", modifiers: " const&", def_value: None }]
constexpr OVRVignette(OVRVignette const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRVignette", modifiers: "&&", def_value: None }]
constexpr OVRVignette(OVRVignette&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRVignette(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRVignette& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRVignette& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRVignette& operator=(OVRVignette&& o) noexcept = default;
  constexpr OVRVignette& operator=(OVRVignette const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_QUADRATIC_FALLOFF, put=__set_QUADRATIC_FALLOFF))  QUADRATIC_FALLOFF;

static void __set_QUADRATIC_FALLOFF(::StringW value) ;

static ::StringW __get_QUADRATIC_FALLOFF() ;

 UnityEngine::Shader __declspec(property(get=__get_VignetteShader, put=__set_VignetteShader))  VignetteShader;

constexpr void __set_VignetteShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_VignetteShader() const;

 GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel __declspec(property(get=__get_MeshComplexity, put=__set_MeshComplexity))  MeshComplexity;

constexpr void __set_MeshComplexity(GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel __get_MeshComplexity() const;

 GlobalNamespace::GlobalNamespace__OVRVignette__FalloffType __declspec(property(get=__get_Falloff, put=__set_Falloff))  Falloff;

constexpr void __set_Falloff(GlobalNamespace::GlobalNamespace__OVRVignette__FalloffType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRVignette__FalloffType __get_Falloff() const;

 float_t __declspec(property(get=__get_VignetteFieldOfView, put=__set_VignetteFieldOfView))  VignetteFieldOfView;

constexpr void __set_VignetteFieldOfView(float_t value) ;

constexpr float_t __get_VignetteFieldOfView() const;

 float_t __declspec(property(get=__get_VignetteAspectRatio, put=__set_VignetteAspectRatio))  VignetteAspectRatio;

constexpr void __set_VignetteAspectRatio(float_t value) ;

constexpr float_t __get_VignetteAspectRatio() const;

 float_t __declspec(property(get=__get_VignetteFalloffDegrees, put=__set_VignetteFalloffDegrees))  VignetteFalloffDegrees;

constexpr void __set_VignetteFalloffDegrees(float_t value) ;

constexpr float_t __get_VignetteFalloffDegrees() const;

 UnityEngine::Color __declspec(property(get=__get_VignetteColor, put=__set_VignetteColor))  VignetteColor;

constexpr void __set_VignetteColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_VignetteColor() const;

 UnityEngine::Camera __declspec(property(get=__get__Camera, put=__set__Camera))  _Camera;

constexpr void __set__Camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__Camera() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__OpaqueMeshFilter, put=__set__OpaqueMeshFilter))  _OpaqueMeshFilter;

constexpr void __set__OpaqueMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__OpaqueMeshFilter() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__TransparentMeshFilter, put=__set__TransparentMeshFilter))  _TransparentMeshFilter;

constexpr void __set__TransparentMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__TransparentMeshFilter() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__OpaqueMeshRenderer, put=__set__OpaqueMeshRenderer))  _OpaqueMeshRenderer;

constexpr void __set__OpaqueMeshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__OpaqueMeshRenderer() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__TransparentMeshRenderer, put=__set__TransparentMeshRenderer))  _TransparentMeshRenderer;

constexpr void __set__TransparentMeshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__TransparentMeshRenderer() const;

 UnityEngine::Mesh __declspec(property(get=__get__OpaqueMesh, put=__set__OpaqueMesh))  _OpaqueMesh;

constexpr void __set__OpaqueMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__OpaqueMesh() const;

 UnityEngine::Mesh __declspec(property(get=__get__TransparentMesh, put=__set__TransparentMesh))  _TransparentMesh;

constexpr void __set__TransparentMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__TransparentMesh() const;

 UnityEngine::Material __declspec(property(get=__get__OpaqueMaterial, put=__set__OpaqueMaterial))  _OpaqueMaterial;

constexpr void __set__OpaqueMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__OpaqueMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__TransparentMaterial, put=__set__TransparentMaterial))  _TransparentMaterial;

constexpr void __set__TransparentMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__TransparentMaterial() const;

 int32_t __declspec(property(get=__get__ShaderScaleAndOffset0Property, put=__set__ShaderScaleAndOffset0Property))  _ShaderScaleAndOffset0Property;

constexpr void __set__ShaderScaleAndOffset0Property(int32_t value) ;

constexpr int32_t __get__ShaderScaleAndOffset0Property() const;

 int32_t __declspec(property(get=__get__ShaderScaleAndOffset1Property, put=__set__ShaderScaleAndOffset1Property))  _ShaderScaleAndOffset1Property;

constexpr void __set__ShaderScaleAndOffset1Property(int32_t value) ;

constexpr int32_t __get__ShaderScaleAndOffset1Property() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__TransparentScaleAndOffset0, put=__set__TransparentScaleAndOffset0))  _TransparentScaleAndOffset0;

constexpr void __set__TransparentScaleAndOffset0(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__TransparentScaleAndOffset0() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__TransparentScaleAndOffset1, put=__set__TransparentScaleAndOffset1))  _TransparentScaleAndOffset1;

constexpr void __set__TransparentScaleAndOffset1(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__TransparentScaleAndOffset1() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__OpaqueScaleAndOffset0, put=__set__OpaqueScaleAndOffset0))  _OpaqueScaleAndOffset0;

constexpr void __set__OpaqueScaleAndOffset0(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__OpaqueScaleAndOffset0() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__OpaqueScaleAndOffset1, put=__set__OpaqueScaleAndOffset1))  _OpaqueScaleAndOffset1;

constexpr void __set__OpaqueScaleAndOffset1(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__OpaqueScaleAndOffset1() const;

 bool __declspec(property(get=__get__OpaqueVignetteVisible, put=__set__OpaqueVignetteVisible))  _OpaqueVignetteVisible;

constexpr void __set__OpaqueVignetteVisible(bool value) ;

constexpr bool __get__OpaqueVignetteVisible() const;

 bool __declspec(property(get=__get__TransparentVignetteVisible, put=__set__TransparentVignetteVisible))  _TransparentVignetteVisible;

constexpr void __set__TransparentVignetteVisible(bool value) ;

constexpr bool __get__TransparentVignetteVisible() const;


// Methods

/// @brief Method GetTriangleCount addr 0x26379bc size 0x24 virtual false final false
 int32_t GetTriangleCount() ;

/// @brief Method BuildMeshes addr 0x26379e0 size 0x688 virtual false final false
 void BuildMeshes() ;

/// @brief Method BuildMaterials addr 0x2638068 size 0x3a8 virtual false final false
 void BuildMaterials() ;

/// @brief Method OnEnable addr 0x2638410 size 0xa4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x26384b4 size 0xac virtual false final false
 void OnDisable() ;

/// @brief Method Awake addr 0x2638598 size 0x314 virtual false final false
 void Awake() ;

/// @brief Method GetTanFovAndOffsetForStereoEye addr 0x26388ac size 0x1f8 virtual false final false
 void GetTanFovAndOffsetForStereoEye(UnityEngine::UnityEngine__Camera__StereoscopicEye eye, ByRef<float_t> tanFovX, ByRef<float_t> tanFovY, ByRef<float_t> offsetX, ByRef<float_t> offsetY) ;

/// @brief Method GetTanFovAndOffsetForMonoEye addr 0x2638aa4 size 0x8c virtual false final false
 void GetTanFovAndOffsetForMonoEye(ByRef<float_t> tanFovX, ByRef<float_t> tanFovY, ByRef<float_t> offsetX, ByRef<float_t> offsetY) ;

/// @brief Method VisibilityTest addr 0x2638b30 size 0x34 virtual false final false
 bool VisibilityTest(float_t scaleX, float_t scaleY, float_t offsetX, float_t offsetY) ;

/// @brief Method Update addr 0x2638b64 size 0x370 virtual false final false
 void Update() ;

/// @brief Method EnableRenderers addr 0x2638ed4 size 0x38 virtual false final false
 void EnableRenderers() ;

/// @brief Method DisableRenderers addr 0x2638560 size 0x38 virtual false final false
 void DisableRenderers() ;

/// @brief Method OnPreCull addr 0x2638f0c size 0x4 virtual false final false
 void OnPreCull() ;

/// @brief Method OnPostRender addr 0x2638f10 size 0x4 virtual false final false
 void OnPostRender() ;

/// @brief Method OnBeginCameraRendering addr 0x2638f14 size 0x8c virtual false final false
 void OnBeginCameraRendering(UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine::Camera camera) ;

// Ctor Parameters []
explicit OVRVignette() ;

/// @brief Method .ctor addr 0x2638fa0 size 0xa4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRVignette__FalloffType, "", "OVRVignette/FalloffType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRVignette__MeshComplexityLevel, "", "OVRVignette/MeshComplexityLevel");
NEED_NO_BOX(GlobalNamespace::OVRVignette);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRVignette, "", "OVRVignette");
