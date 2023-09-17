#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine {
struct Vector4;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVROverlay__OverlayShape;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVROverlay__OverlayType;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry;
}
// Type: ::ProjectionSurfaceType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8564))
// CS Name: OVRPassthroughLayer::ProjectionSurfaceType
struct CORDL_TYPE ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType(____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType const&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType(____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType&&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType& operator=(____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType& operator=(____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType_Unwrapped : int32_t {
__Reconstructed = 0,
__UserDefined = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Reconstructed offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType const Reconstructed;

/// @brief Field UserDefined offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType const UserDefined;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ColorMapEditorType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8565))
// CS Name: OVRPassthroughLayer::ColorMapEditorType
struct CORDL_TYPE ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType(____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType(____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType&&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType& operator=(____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType& operator=(____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType_Unwrapped : int32_t {
__None = 0,
__GrayscaleToColor = 1,
__Controls = 1,
__Custom = 2,
__Grayscale = 3,
__ColorAdjustment = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const None;

/// @brief Field GrayscaleToColor offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const GrayscaleToColor;

/// @brief Field Controls offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const Controls;

/// @brief Field Custom offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const Custom;

/// @brief Field Grayscale offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const Grayscale;

/// @brief Field ColorAdjustment offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType const ColorAdjustment;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PassthroughMeshInstance
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8566))
// CS Name: OVRPassthroughLayer::PassthroughMeshInstance
struct CORDL_TYPE ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform, ::UnityEngine::Matrix4x4 localToWorld) noexcept;


                    constexpr ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance(____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance const&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance(____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance&&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance& operator=(____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance& operator=(____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_meshHandle, put=__set_meshHandle))  meshHandle;

constexpr void __set_meshHandle(uint64_t value) ;

constexpr uint64_t __get_meshHandle() const;

 uint64_t __declspec(property(get=__get_instanceHandle, put=__set_instanceHandle))  instanceHandle;

constexpr void __set_instanceHandle(uint64_t value) ;

constexpr uint64_t __get_instanceHandle() const;

 bool __declspec(property(get=__get_updateTransform, put=__set_updateTransform))  updateTransform;

constexpr void __set_updateTransform(bool value) ;

constexpr bool __get_updateTransform() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_localToWorld, put=__set_localToWorld))  localToWorld;

constexpr void __set_localToWorld(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_localToWorld() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SerializedSurfaceGeometry
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8567))
// CS Name: OVRPassthroughLayer::SerializedSurfaceGeometry
struct CORDL_TYPE ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityEngine::MeshFilter", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry(::UnityEngine::MeshFilter meshFilter, bool updateTransform) noexcept;


                    constexpr ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry(____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry const&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry(____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry&&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry& operator=(____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry& operator=(____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::MeshFilter __declspec(property(get=__get_meshFilter, put=__set_meshFilter))  meshFilter;

constexpr void __set_meshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get_meshFilter() const;

 bool __declspec(property(get=__get_updateTransform, put=__set_updateTransform))  updateTransform;

constexpr void __set_updateTransform(bool value) ;

constexpr bool __get_updateTransform() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DeferredPassthroughMeshAddition
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8568))
// CS Name: OVRPassthroughLayer::DeferredPassthroughMeshAddition
struct CORDL_TYPE ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition(::UnityEngine::GameObject gameObject, bool updateTransform) noexcept;


                    constexpr ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition(____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition const&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition(____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition&&) = default;
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition& operator=(____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition& operator=(____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_gameObject, put=__set_gameObject))  gameObject;

constexpr void __set_gameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_gameObject() const;

 bool __declspec(property(get=__get_updateTransform, put=__set_updateTransform))  updateTransform;

constexpr void __set_updateTransform(bool value) ;

constexpr bool __get_updateTransform() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass9_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8569))
// CS Name: OVRPassthroughLayer::<>c__DisplayClass9_0
class CORDL_TYPE ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0& operator=(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0& operator=(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_obj() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0() ;

/// @brief Method .ctor addr 0x25d8b10 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RemoveSurfaceGeometry>b__0 addr 0x25dbc88 size 0x6c virtual false final false
 bool _RemoveSurfaceGeometry_b__0(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8570))
// CS Name: OVRPassthroughLayer::<>c__DisplayClass10_0
class CORDL_TYPE ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0& operator=(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0& operator=(____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_obj() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0() ;

/// @brief Method .ctor addr 0x25d8dc4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <IsSurfaceGeometry>b__0 addr 0x25dbcf4 size 0x6c virtual false final false
 bool _IsSurfaceGeometry_b__0(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRPassthroughLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8571))
// CS Name: OVRPassthroughLayer
class CORDL_TYPE OVRPassthroughLayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass10_0 = ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0;

using __c__DisplayClass9_0 = ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0;

using DeferredPassthroughMeshAddition = ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition;

using SerializedSurfaceGeometry = ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry;

using PassthroughMeshInstance = ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance;

using ColorMapEditorType = ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType;

using ProjectionSurfaceType = ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~OVRPassthroughLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer", modifiers: " const&", def_value: None }]
constexpr OVRPassthroughLayer(OVRPassthroughLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer", modifiers: "&&", def_value: None }]
constexpr OVRPassthroughLayer(OVRPassthroughLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRPassthroughLayer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRPassthroughLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRPassthroughLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRPassthroughLayer& operator=(OVRPassthroughLayer&& o) noexcept = default;
  constexpr OVRPassthroughLayer& operator=(OVRPassthroughLayer const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType __declspec(property(get=__get_projectionSurfaceType, put=__set_projectionSurfaceType))  projectionSurfaceType;

constexpr void __set_projectionSurfaceType(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType __get_projectionSurfaceType() const;

 ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayType __declspec(property(get=__get_overlayType, put=__set_overlayType))  overlayType;

constexpr void __set_overlayType(::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayType __get_overlayType() const;

 int32_t __declspec(property(get=__get_compositionDepth, put=__set_compositionDepth))  compositionDepth;

constexpr void __set_compositionDepth(int32_t value) ;

constexpr int32_t __get_compositionDepth() const;

 bool __declspec(property(get=__get_hidden, put=__set_hidden))  hidden;

constexpr void __set_hidden(bool value) ;

constexpr bool __get_hidden() const;

 bool __declspec(property(get=__get_overridePerLayerColorScaleAndOffset, put=__set_overridePerLayerColorScaleAndOffset))  overridePerLayerColorScaleAndOffset;

constexpr void __set_overridePerLayerColorScaleAndOffset(bool value) ;

constexpr bool __get_overridePerLayerColorScaleAndOffset() const;

 ::UnityEngine::Vector4 __declspec(property(get=__get_colorScale, put=__set_colorScale))  colorScale;

constexpr void __set_colorScale(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get_colorScale() const;

 ::UnityEngine::Vector4 __declspec(property(get=__get_colorOffset, put=__set_colorOffset))  colorOffset;

constexpr void __set_colorOffset(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get_colorOffset() const;

 ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType __declspec(property(get=__get_colorMapEditorType_, put=__set_colorMapEditorType_))  colorMapEditorType_;

constexpr void __set_colorMapEditorType_(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType __get_colorMapEditorType_() const;

 ::UnityEngine::Gradient __declspec(property(get=__get_colorMapEditorGradient, put=__set_colorMapEditorGradient))  colorMapEditorGradient;

constexpr void __set_colorMapEditorGradient(::UnityEngine::Gradient value) ;

constexpr ::UnityEngine::Gradient __get_colorMapEditorGradient() const;

 ::UnityEngine::Gradient __declspec(property(get=__get_colorMapEditorGradientOld, put=__set_colorMapEditorGradientOld))  colorMapEditorGradientOld;

constexpr void __set_colorMapEditorGradientOld(::UnityEngine::Gradient value) ;

constexpr ::UnityEngine::Gradient __get_colorMapEditorGradientOld() const;

 float_t __declspec(property(get=__get_colorMapEditorContrast, put=__set_colorMapEditorContrast))  colorMapEditorContrast;

constexpr void __set_colorMapEditorContrast(float_t value) ;

constexpr float_t __get_colorMapEditorContrast() const;

 float_t __declspec(property(get=__get_colorMapEditorContrast_, put=__set_colorMapEditorContrast_))  colorMapEditorContrast_;

constexpr void __set_colorMapEditorContrast_(float_t value) ;

constexpr float_t __get_colorMapEditorContrast_() const;

 float_t __declspec(property(get=__get_colorMapEditorBrightness, put=__set_colorMapEditorBrightness))  colorMapEditorBrightness;

constexpr void __set_colorMapEditorBrightness(float_t value) ;

constexpr float_t __get_colorMapEditorBrightness() const;

 float_t __declspec(property(get=__get_colorMapEditorBrightness_, put=__set_colorMapEditorBrightness_))  colorMapEditorBrightness_;

constexpr void __set_colorMapEditorBrightness_(float_t value) ;

constexpr float_t __get_colorMapEditorBrightness_() const;

 float_t __declspec(property(get=__get_colorMapEditorPosterize, put=__set_colorMapEditorPosterize))  colorMapEditorPosterize;

constexpr void __set_colorMapEditorPosterize(float_t value) ;

constexpr float_t __get_colorMapEditorPosterize() const;

 float_t __declspec(property(get=__get_colorMapEditorPosterize_, put=__set_colorMapEditorPosterize_))  colorMapEditorPosterize_;

constexpr void __set_colorMapEditorPosterize_(float_t value) ;

constexpr float_t __get_colorMapEditorPosterize_() const;

 float_t __declspec(property(get=__get_colorMapEditorSaturation, put=__set_colorMapEditorSaturation))  colorMapEditorSaturation;

constexpr void __set_colorMapEditorSaturation(float_t value) ;

constexpr float_t __get_colorMapEditorSaturation() const;

 float_t __declspec(property(get=__get_colorMapEditorSaturation_, put=__set_colorMapEditorSaturation_))  colorMapEditorSaturation_;

constexpr void __set_colorMapEditorSaturation_(float_t value) ;

constexpr float_t __get_colorMapEditorSaturation_() const;

 ::GlobalNamespace::OVRCameraRig __declspec(property(get=__get_cameraRig, put=__set_cameraRig))  cameraRig;

constexpr void __set_cameraRig(::GlobalNamespace::OVRCameraRig value) ;

constexpr ::GlobalNamespace::OVRCameraRig __get_cameraRig() const;

 bool __declspec(property(get=__get_cameraRigInitialized, put=__set_cameraRigInitialized))  cameraRigInitialized;

constexpr void __set_cameraRigInitialized(bool value) ;

constexpr bool __get_cameraRigInitialized() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_auxGameObject, put=__set_auxGameObject))  auxGameObject;

constexpr void __set_auxGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_auxGameObject() const;

 ::GlobalNamespace::OVROverlay __declspec(property(get=__get_passthroughOverlay, put=__set_passthroughOverlay))  passthroughOverlay;

constexpr void __set_passthroughOverlay(::GlobalNamespace::OVROverlay value) ;

constexpr ::GlobalNamespace::OVROverlay __get_passthroughOverlay() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject,::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance> __declspec(property(get=__get_surfaceGameObjects, put=__set_surfaceGameObjects))  surfaceGameObjects;

constexpr void __set_surfaceGameObjects(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject,::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject,::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance> __get_surfaceGameObjects() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition> __declspec(property(get=__get_deferredSurfaceGameObjects, put=__set_deferredSurfaceGameObjects))  deferredSurfaceGameObjects;

constexpr void __set_deferredSurfaceGameObjects(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition> __get_deferredSurfaceGameObjects() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry> __declspec(property(get=__get_serializedSurfaceGeometry, put=__set_serializedSurfaceGeometry))  serializedSurfaceGeometry;

constexpr void __set_serializedSurfaceGeometry(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry> __get_serializedSurfaceGeometry() const;

 float_t __declspec(property(get=__get_textureOpacity_, put=__set_textureOpacity_))  textureOpacity_;

constexpr void __set_textureOpacity_(float_t value) ;

constexpr float_t __get_textureOpacity_() const;

 bool __declspec(property(get=__get_edgeRenderingEnabled_, put=__set_edgeRenderingEnabled_))  edgeRenderingEnabled_;

constexpr void __set_edgeRenderingEnabled_(bool value) ;

constexpr bool __get_edgeRenderingEnabled_() const;

 ::UnityEngine::Color __declspec(property(get=__get_edgeColor_, put=__set_edgeColor_))  edgeColor_;

constexpr void __set_edgeColor_(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_edgeColor_() const;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType __declspec(property(get=__get_colorMapType, put=__set_colorMapType))  colorMapType;

constexpr void __set_colorMapType(::GlobalNamespace::____GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__InsightPassthroughColorMapType __get_colorMapType() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_colorMapData, put=__set_colorMapData))  colorMapData;

constexpr void __set_colorMapData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_colorMapData() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_tmpColorMapData, put=__set_tmpColorMapData))  tmpColorMapData;

constexpr void __set_tmpColorMapData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_tmpColorMapData() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_colorMapDataHandle, put=__set_colorMapDataHandle))  colorMapDataHandle;

constexpr void __set_colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get_colorMapDataHandle() const;

 bool __declspec(property(get=__get_styleDirty, put=__set_styleDirty))  styleDirty;

constexpr void __set_styleDirty(bool value) ;

constexpr bool __get_styleDirty() const;

static ::UnityEngine::Gradient __declspec(property(get=__get_colorMapNeutralGradient, put=__set_colorMapNeutralGradient))  colorMapNeutralGradient;

static void __set_colorMapNeutralGradient(::UnityEngine::Gradient value) ;

static ::UnityEngine::Gradient __get_colorMapNeutralGradient() ;


// Properties

 float_t __declspec(property(get=get_textureOpacity, put=set_textureOpacity))  textureOpacity;

 bool __declspec(property(get=get_edgeRenderingEnabled, put=set_edgeRenderingEnabled))  edgeRenderingEnabled;

 ::UnityEngine::Color __declspec(property(get=get_edgeColor, put=set_edgeColor))  edgeColor;

 ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType __declspec(property(get=get_colorMapEditorType, put=set_colorMapEditorType))  colorMapEditorType;

 ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape __declspec(property(get=get_overlayShape))  overlayShape;


// Methods

/// @brief Method AddSurfaceGeometry addr 0x25d8708 size 0x1f0 virtual false final false
 void AddSurfaceGeometry(::UnityEngine::GameObject obj, bool updateTransform) ;

/// @brief Method RemoveSurfaceGeometry addr 0x25d88f8 size 0x218 virtual false final false
 void RemoveSurfaceGeometry(::UnityEngine::GameObject obj) ;

/// @brief Method IsSurfaceGeometry addr 0x25d8ca8 size 0x11c virtual false final false
 bool IsSurfaceGeometry(::UnityEngine::GameObject obj) ;

/// @brief Method get_textureOpacity addr 0x25d8dcc size 0x8 virtual false final false
 float_t get_textureOpacity() ;

/// @brief Method set_textureOpacity addr 0x25d8dd4 size 0x1c virtual false final false
 void set_textureOpacity(float_t value) ;

/// @brief Method get_edgeRenderingEnabled addr 0x25d8df0 size 0x8 virtual false final false
 bool get_edgeRenderingEnabled() ;

/// @brief Method set_edgeRenderingEnabled addr 0x25d8df8 size 0x20 virtual false final false
 void set_edgeRenderingEnabled(bool value) ;

/// @brief Method get_edgeColor addr 0x25d8e18 size 0xc virtual false final false
 ::UnityEngine::Color get_edgeColor() ;

/// @brief Method set_edgeColor addr 0x25d8e24 size 0x58 virtual false final false
 void set_edgeColor(::UnityEngine::Color value) ;

/// @brief Method SetColorMap addr 0x25d8e7c size 0xec virtual false final false
 void SetColorMap(::ArrayW<::UnityEngine::Color> values) ;

/// @brief Method SetColorMapControls addr 0x25d9264 size 0x194 virtual false final false
 void SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient gradient, ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType colorMapType) ;

/// @brief Method SetColorMapMonochromatic addr 0x25d95c8 size 0xc4 virtual false final false
 void SetColorMapMonochromatic(::ArrayW<uint8_t> values) ;

/// @brief Method SetBrightnessContrastSaturation addr 0x25d968c size 0x74 virtual false final false
 void SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation) ;

/// @brief Method DisableColorMap addr 0x25d9944 size 0x2c virtual false final false
 void DisableColorMap() ;

/// @brief Method get_colorMapEditorType addr 0x25d9970 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType get_colorMapEditorType() ;

/// @brief Method set_colorMapEditorType addr 0x25d8f68 size 0x84 virtual false final false
 void set_colorMapEditorType(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType value) ;

/// @brief Method SetStyleDirty addr 0x25d9a1c size 0xc virtual false final false
 void SetStyleDirty() ;

/// @brief Method AddDeferredSurfaceGeometries addr 0x25d9a28 size 0x258 virtual false final false
 void AddDeferredSurfaceGeometries() ;

/// @brief Method GetTransformMatrixForPassthroughSurfaceObject addr 0x25d9f30 size 0x354 virtual false final false
 ::UnityEngine::Matrix4x4 GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj) ;

/// @brief Method CreateAndAddMesh addr 0x25d9c80 size 0x2b0 virtual false final false
 bool CreateAndAddMesh(::UnityEngine::GameObject obj, ByRef<uint64_t> meshHandle, ByRef<uint64_t> instanceHandle, ByRef<::UnityEngine::Matrix4x4> localToWorld) ;

/// @brief Method DestroySurfaceGeometries addr 0x25da550 size 0x280 virtual false final false
 void DestroySurfaceGeometries(bool addBackToDeferredQueue) ;

/// @brief Method UpdateSurfaceGeometryTransforms addr 0x25da7d0 size 0x31c virtual false final false
 void UpdateSurfaceGeometryTransforms() ;

/// @brief Method UpdateSurfaceGeometryTransform addr 0x25daaec size 0x1b8 virtual false final false
 void UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld) ;

/// @brief Method AllocateColorMapData addr 0x25d8fec size 0xf0 virtual false final false
 void AllocateColorMapData(uint32_t size) ;

/// @brief Method DeallocateColorMapData addr 0x25d9978 size 0xa4 virtual false final false
 void DeallocateColorMapData() ;

/// @brief Method CreateNeutralColorMapGradient addr 0x25d93f8 size 0x1d0 virtual false final false
static ::UnityEngine::Gradient CreateNeutralColorMapGradient() ;

/// @brief Method HasControlsBasedColorMap addr 0x25dadac size 0x2c virtual false final false
 bool HasControlsBasedColorMap() ;

/// @brief Method UpdateColorMapFromControls addr 0x25d9700 size 0x244 virtual false final false
 void UpdateColorMapFromControls(bool forceUpdate) ;

/// @brief Method computeBrightnessContrastPosterizeMap addr 0x25dadd8 size 0x174 virtual false final false
static void computeBrightnessContrastPosterizeMap(::ArrayW<uint8_t> result, float_t brightness, float_t contrast, float_t posterize) ;

/// @brief Method WriteColorToColorMap addr 0x25d90dc size 0x188 virtual false final false
 void WriteColorToColorMap(int32_t colorIndex, ByRef<::UnityEngine::Color> color) ;

/// @brief Method WriteFloatToColorMap addr 0x25dafa8 size 0x88 virtual false final false
 void WriteFloatToColorMap(int32_t index, float_t value) ;

/// @brief Method WriteBrightnessContrastSaturationColorMap addr 0x25daf4c size 0x5c virtual false final false
 void WriteBrightnessContrastSaturationColorMap(float_t brightness, float_t contrast, float_t saturation) ;

/// @brief Method SyncToOverlay addr 0x25db030 size 0x274 virtual false final false
 void SyncToOverlay() ;

/// @brief Method get_overlayShape addr 0x25db2a4 size 0x14 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape get_overlayShape() ;

/// @brief Method Awake addr 0x25db2b8 size 0x228 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x25db4e0 size 0x4 virtual false final false
 void Update() ;

/// @brief Method LateUpdate addr 0x25db4e4 size 0x270 virtual false final false
 void LateUpdate() ;

/// @brief Method OnEnable addr 0x25db854 size 0x124 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x25db978 size 0xd0 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x25dba48 size 0x8 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit OVRPassthroughLayer() ;

/// @brief Method .ctor addr 0x25dba50 size 0x1ec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ColorMapEditorType, "", "OVRPassthroughLayer/ColorMapEditorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__ProjectionSurfaceType, "", "OVRPassthroughLayer/ProjectionSurfaceType");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer, "", "OVRPassthroughLayer");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass10_0, "", "OVRPassthroughLayer/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer____c__DisplayClass9_0, "", "OVRPassthroughLayer/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__DeferredPassthroughMeshAddition, "", "OVRPassthroughLayer/DeferredPassthroughMeshAddition");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__PassthroughMeshInstance, "", "OVRPassthroughLayer/PassthroughMeshInstance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRPassthroughLayer__SerializedSurfaceGeometry, "", "OVRPassthroughLayer/SerializedSurfaceGeometry");
