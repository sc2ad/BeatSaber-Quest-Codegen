#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class OVRBoneCapsule;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData;
}
// Type: ::IOVRSkeletonRendererDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8962))
// CS Name: OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider
class CORDL_TYPE ____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetSkeletonRendererData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData GetSkeletonRendererData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SkeletonRendererData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8963))
// CS Name: OVRSkeletonRenderer::SkeletonRendererData
struct CORDL_TYPE ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData(float_t _RootScale_k__BackingField, bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField, bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;


                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData(____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData const&) = default;
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData(____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData&&) = default;
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData& operator=(____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData& operator=(____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get__RootScale_k__BackingField, put=__set__RootScale_k__BackingField))  _RootScale_k__BackingField;

constexpr void __set__RootScale_k__BackingField(float_t value) ;

constexpr float_t __get__RootScale_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField))  _ShouldUseSystemGestureMaterial_k__BackingField;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool value) ;

constexpr bool __get__ShouldUseSystemGestureMaterial_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_RootScale, put=set_RootScale))  RootScale;

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 bool __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial))  ShouldUseSystemGestureMaterial;


// Methods

/// @brief Method get_RootScale addr 0x2634c94 size 0x8 virtual false final false
 float_t get_RootScale() ;

/// @brief Method set_RootScale addr 0x2634c9c size 0x8 virtual false final false
 void set_RootScale(float_t value) ;

/// @brief Method get_IsDataValid addr 0x2634ca4 size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x2634cac size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x2634cb8 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x2634cc0 size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x2634ccc size 0x8 virtual false final false
 bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x2634cd4 size 0xc virtual false final false
 void set_ShouldUseSystemGestureMaterial(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConfidenceBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8964))
// CS Name: OVRSkeletonRenderer::ConfidenceBehavior
struct CORDL_TYPE ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior(____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior const&) = default;
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior(____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior&&) = default;
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior& operator=(____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior& operator=(____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped : int32_t {
__None = 0,
__ToggleRenderer = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior const None;

/// @brief Field ToggleRenderer offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior const ToggleRenderer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SystemGestureBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8965))
// CS Name: OVRSkeletonRenderer::SystemGestureBehavior
struct CORDL_TYPE ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior(____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior const&) = default;
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior(____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior&&) = default;
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior& operator=(____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior& operator=(____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped : int32_t {
__None = 0,
__SwapMaterial = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior const None;

/// @brief Field SwapMaterial offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior const SwapMaterial;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BoneVisualization
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8966))
// CS Name: OVRSkeletonRenderer::BoneVisualization
class CORDL_TYPE ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization(____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization(____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization& operator=(____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization& operator=(____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_BoneGO, put=__set_BoneGO))  BoneGO;

constexpr void __set_BoneGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_BoneGO() const;

 ::UnityEngine::Transform __declspec(property(get=__get_BoneBegin, put=__set_BoneBegin))  BoneBegin;

constexpr void __set_BoneBegin(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_BoneBegin() const;

 ::UnityEngine::Transform __declspec(property(get=__get_BoneEnd, put=__set_BoneEnd))  BoneEnd;

constexpr void __set_BoneEnd(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_BoneEnd() const;

 ::UnityEngine::LineRenderer __declspec(property(get=__get_Line, put=__set_Line))  Line;

constexpr void __set_Line(::UnityEngine::LineRenderer value) ;

constexpr ::UnityEngine::LineRenderer __get_Line() const;

 ::UnityEngine::Material __declspec(property(get=__get_RenderMaterial, put=__set_RenderMaterial))  RenderMaterial;

constexpr void __set_RenderMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_RenderMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get_SystemGestureMaterial, put=__set_SystemGestureMaterial))  SystemGestureMaterial;

constexpr void __set_SystemGestureMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_SystemGestureMaterial() const;


// Methods

// Ctor Parameters [CppParam { name: "rootGO", ty: "::UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "renderMat", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "systemGestureMat", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "begin", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "end", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization(::UnityEngine::GameObject rootGO, ::UnityEngine::Material renderMat, ::UnityEngine::Material systemGestureMat, float_t scale, ::UnityEngine::Transform begin, ::UnityEngine::Transform end) ;

/// @brief Method .ctor addr 0x26340b4 size 0x1d8 virtual false final false
 void _ctor(::UnityEngine::GameObject rootGO, ::UnityEngine::Material renderMat, ::UnityEngine::Material systemGestureMat, float_t scale, ::UnityEngine::Transform begin, ::UnityEngine::Transform end) ;

/// @brief Method Update addr 0x2634614 size 0x1d0 virtual false final false
 void Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial, ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior confidenceBehavior, ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior systemGestureBehavior) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CapsuleVisualization
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8967))
// CS Name: OVRSkeletonRenderer::CapsuleVisualization
class CORDL_TYPE ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization(____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization(____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization& operator=(____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization& operator=(____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_CapsuleGO, put=__set_CapsuleGO))  CapsuleGO;

constexpr void __set_CapsuleGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_CapsuleGO() const;

 ::GlobalNamespace::OVRBoneCapsule __declspec(property(get=__get_BoneCapsule, put=__set_BoneCapsule))  BoneCapsule;

constexpr void __set_BoneCapsule(::GlobalNamespace::OVRBoneCapsule value) ;

constexpr ::GlobalNamespace::OVRBoneCapsule __get_BoneCapsule() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_capsuleScale, put=__set_capsuleScale))  capsuleScale;

constexpr void __set_capsuleScale(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_capsuleScale() const;

 ::UnityEngine::MeshRenderer __declspec(property(get=__get_Renderer, put=__set_Renderer))  Renderer;

constexpr void __set_Renderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get_Renderer() const;

 ::UnityEngine::Material __declspec(property(get=__get_RenderMaterial, put=__set_RenderMaterial))  RenderMaterial;

constexpr void __set_RenderMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_RenderMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get_SystemGestureMaterial, put=__set_SystemGestureMaterial))  SystemGestureMaterial;

constexpr void __set_SystemGestureMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_SystemGestureMaterial() const;


// Methods

// Ctor Parameters [CppParam { name: "rootGO", ty: "::UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "renderMat", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "systemGestureMat", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "boneCapsule", ty: "::GlobalNamespace::OVRBoneCapsule", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization(::UnityEngine::GameObject rootGO, ::UnityEngine::Material renderMat, ::UnityEngine::Material systemGestureMat, float_t scale, ::GlobalNamespace::OVRBoneCapsule boneCapsule) ;

/// @brief Method .ctor addr 0x263428c size 0x1c0 virtual false final false
 void _ctor(::UnityEngine::GameObject rootGO, ::UnityEngine::Material renderMat, ::UnityEngine::Material systemGestureMat, float_t scale, ::GlobalNamespace::OVRBoneCapsule boneCapsule) ;

/// @brief Method Update addr 0x26347e4 size 0x310 virtual false final false
 void Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial, ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior confidenceBehavior, ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior systemGestureBehavior) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSkeletonRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8968))
// CS Name: OVRSkeletonRenderer
class CORDL_TYPE OVRSkeletonRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CapsuleVisualization = ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization;

using BoneVisualization = ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization;

using SystemGestureBehavior = ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior;

using ConfidenceBehavior = ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior;

using SkeletonRendererData = ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData;

using IOVRSkeletonRendererDataProvider = ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~OVRSkeletonRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer", modifiers: " const&", def_value: None }]
constexpr OVRSkeletonRenderer(OVRSkeletonRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer", modifiers: "&&", def_value: None }]
constexpr OVRSkeletonRenderer(OVRSkeletonRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSkeletonRenderer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSkeletonRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSkeletonRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSkeletonRenderer& operator=(OVRSkeletonRenderer&& o) noexcept = default;
  constexpr OVRSkeletonRenderer& operator=(OVRSkeletonRenderer const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider __declspec(property(get=__get__dataProvider, put=__set__dataProvider))  _dataProvider;

constexpr void __set__dataProvider(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider __get__dataProvider() const;

 ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior __declspec(property(get=__get__confidenceBehavior, put=__set__confidenceBehavior))  _confidenceBehavior;

constexpr void __set__confidenceBehavior(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior __get__confidenceBehavior() const;

 ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior __declspec(property(get=__get__systemGestureBehavior, put=__set__systemGestureBehavior))  _systemGestureBehavior;

constexpr void __set__systemGestureBehavior(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior __get__systemGestureBehavior() const;

 bool __declspec(property(get=__get__renderPhysicsCapsules, put=__set__renderPhysicsCapsules))  _renderPhysicsCapsules;

constexpr void __set__renderPhysicsCapsules(bool value) ;

constexpr bool __get__renderPhysicsCapsules() const;

 ::UnityEngine::Material __declspec(property(get=__get__skeletonMaterial, put=__set__skeletonMaterial))  _skeletonMaterial;

constexpr void __set__skeletonMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__skeletonMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get__skeletonDefaultMaterial, put=__set__skeletonDefaultMaterial))  _skeletonDefaultMaterial;

constexpr void __set__skeletonDefaultMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__skeletonDefaultMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get__capsuleMaterial, put=__set__capsuleMaterial))  _capsuleMaterial;

constexpr void __set__capsuleMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__capsuleMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get__capsuleDefaultMaterial, put=__set__capsuleDefaultMaterial))  _capsuleDefaultMaterial;

constexpr void __set__capsuleDefaultMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__capsuleDefaultMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get__systemGestureMaterial, put=__set__systemGestureMaterial))  _systemGestureMaterial;

constexpr void __set__systemGestureMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__systemGestureMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get__systemGestureDefaultMaterial, put=__set__systemGestureDefaultMaterial))  _systemGestureDefaultMaterial;

constexpr void __set__systemGestureDefaultMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__systemGestureDefaultMaterial() const;

/// @brief Field LINE_RENDERER_WIDTH offset 0
static constexpr float_t  LINE_RENDERER_WIDTH{0.005};

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization> __declspec(property(get=__get__boneVisualizations, put=__set__boneVisualizations))  _boneVisualizations;

constexpr void __set__boneVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization> __get__boneVisualizations() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization> __declspec(property(get=__get__capsuleVisualizations, put=__set__capsuleVisualizations))  _capsuleVisualizations;

constexpr void __set__capsuleVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization> __get__capsuleVisualizations() const;

 ::GlobalNamespace::OVRSkeleton __declspec(property(get=__get__ovrSkeleton, put=__set__ovrSkeleton))  _ovrSkeleton;

constexpr void __set__ovrSkeleton(::GlobalNamespace::OVRSkeleton value) ;

constexpr ::GlobalNamespace::OVRSkeleton __get__ovrSkeleton() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__skeletonGO, put=__set__skeletonGO))  _skeletonGO;

constexpr void __set__skeletonGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__skeletonGO() const;

 float_t __declspec(property(get=__get__scale, put=__set__scale))  _scale;

constexpr void __set__scale(float_t value) ;

constexpr float_t __get__scale() const;

static ::UnityEngine::Quaternion __declspec(property(get=__get__capsuleRotationOffset, put=__set__capsuleRotationOffset))  _capsuleRotationOffset;

static void __set__capsuleRotationOffset(::UnityEngine::Quaternion value) ;

static ::UnityEngine::Quaternion __get__capsuleRotationOffset() ;

 bool __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField))  _IsInitialized_k__BackingField;

constexpr void __set__IsInitialized_k__BackingField(bool value) ;

constexpr bool __get__IsInitialized_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField))  _ShouldUseSystemGestureMaterial_k__BackingField;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool value) ;

constexpr bool __get__ShouldUseSystemGestureMaterial_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsInitialized, put=set_IsInitialized))  IsInitialized;

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 bool __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial))  ShouldUseSystemGestureMaterial;


// Methods

/// @brief Method get_IsInitialized addr 0x2633780 size 0x8 virtual false final false
 bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x2633788 size 0xc virtual false final false
 void set_IsInitialized(bool value) ;

/// @brief Method get_IsDataValid addr 0x2633794 size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x263379c size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x26337a8 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x26337b0 size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x26337bc size 0x8 virtual false final false
 bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x26337c4 size 0xc virtual false final false
 void set_ShouldUseSystemGestureMaterial(bool value) ;

/// @brief Method Awake addr 0x26337d0 size 0xb8 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2633888 size 0xac virtual false final false
 void Start() ;

/// @brief Method ShouldInitialize addr 0x2633934 size 0x34 virtual false final false
 bool ShouldInitialize() ;

/// @brief Method Initialize addr 0x2633968 size 0x74c virtual false final false
 void Initialize() ;

/// @brief Method Update addr 0x263444c size 0x1c8 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x2634af4 size 0x12c virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit OVRSkeletonRenderer() ;

/// @brief Method .ctor addr 0x2634c20 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__ConfidenceBehavior, "", "OVRSkeletonRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SystemGestureBehavior, "", "OVRSkeletonRenderer/SystemGestureBehavior");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer, "", "OVRSkeletonRenderer");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__BoneVisualization, "", "OVRSkeletonRenderer/BoneVisualization");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__CapsuleVisualization, "", "OVRSkeletonRenderer/CapsuleVisualization");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider, "", "OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData, "", "OVRSkeletonRenderer/SkeletonRendererData");
