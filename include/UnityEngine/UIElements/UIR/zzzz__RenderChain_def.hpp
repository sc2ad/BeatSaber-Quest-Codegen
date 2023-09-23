#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine {
class Texture;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements::UIR {
struct UIRVEShaderInfoAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRTextUpdatePainter;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class BasicNodePool_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRStylePainter;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__RenderChain____c;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__RenderChain__RenderNodeData;
}
// Type: ::DepthOrderedDirtyTracking
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7489))
// CS Name: UnityEngine.UIElements.UIR.RenderChain::DepthOrderedDirtyTracking
struct CORDL_TYPE UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "heads", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "tails", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "minDepths", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> heads, System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> tails, ::ArrayW<int32_t> minDepths, ::ArrayW<int32_t> maxDepths, uint32_t dirtyID) noexcept;


                    constexpr UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking(UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking const&) = default;
                    constexpr UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking(UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking&&) = default;
                    constexpr UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking& operator=(UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking& operator=(UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_heads, put=__set_heads))  heads;

constexpr void __set_heads(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __get_heads() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_tails, put=__set_tails))  tails;

constexpr void __set_tails(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> __get_tails() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_minDepths, put=__set_minDepths))  minDepths;

constexpr void __set_minDepths(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_minDepths() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_maxDepths, put=__set_maxDepths))  maxDepths;

constexpr void __set_maxDepths(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_maxDepths() const;

 uint32_t __declspec(property(get=__get_dirtyID, put=__set_dirtyID))  dirtyID;

constexpr void __set_dirtyID(uint32_t value) ;

constexpr uint32_t __get_dirtyID() const;


// Methods

/// @brief Method EnsureFits addr 0x2d1a388 size 0x11c virtual false final false
 void EnsureFits(int32_t maxDepth) ;

/// @brief Method RegisterDirty addr 0x2d1a4a4 size 0x1bc virtual false final false
 void RegisterDirty(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes, UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass) ;

/// @brief Method ClearDirty addr 0x2d1a660 size 0x190 virtual false final false
 void ClearDirty(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse) ;

/// @brief Method Reset addr 0x2d1a7f0 size 0x78 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::RenderChainStaticIndexAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7490))
// CS Name: UnityEngine.UIElements.UIR.RenderChain::RenderChainStaticIndexAllocator
struct CORDL_TYPE UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator(UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator const&) = default;
                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator(UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator&&) = default;
                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator& operator=(UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator& operator=(UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain> __declspec(property(get=__get_renderChains, put=__set_renderChains))  renderChains;

static void __set_renderChains(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChain> __get_renderChains() ;


// Methods

/// @brief Method AllocateIndex addr 0x2d1a868 size 0x150 virtual false final false
static int32_t AllocateIndex(UnityEngine::UIElements::UIR::RenderChain renderChain) ;

/// @brief Method FreeIndex addr 0x2d1a9b8 size 0x84 virtual false final false
static void FreeIndex(int32_t index) ;

/// @brief Method AccessIndex addr 0x2d1aa3c size 0x80 virtual false final false
static UnityEngine::UIElements::UIR::RenderChain AccessIndex(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::RenderNodeData
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7491))
// CS Name: UnityEngine.UIElements.UIR.RenderChain::RenderNodeData
struct CORDL_TYPE UnityEngine__UIElements__UIR__RenderChain__RenderNodeData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "standardMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "initialMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "matPropBlock", ty: "UnityEngine::MaterialPropertyBlock", modifiers: "", def_value: None }, CppParam { name: "firstCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "device", ty: "UnityEngine::UIElements::UIR::UIRenderDevice", modifiers: "", def_value: None }, CppParam { name: "vectorAtlas", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "shaderInfoAtlas", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "dpiScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transformConstants", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name: "clipRectConstants", ty: "Unity::Collections::NativeSlice_1<UnityEngine::Vector4>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__RenderChain__RenderNodeData(UnityEngine::Material standardMaterial, UnityEngine::Material initialMaterial, UnityEngine::MaterialPropertyBlock matPropBlock, UnityEngine::UIElements::UIR::RenderChainCommand firstCommand, UnityEngine::UIElements::UIR::UIRenderDevice device, UnityEngine::Texture vectorAtlas, UnityEngine::Texture shaderInfoAtlas, float_t dpiScale, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> transformConstants, Unity::Collections::NativeSlice_1<UnityEngine::Vector4> clipRectConstants) noexcept;


                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderNodeData(UnityEngine__UIElements__UIR__RenderChain__RenderNodeData const&) = default;
                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderNodeData(UnityEngine__UIElements__UIR__RenderChain__RenderNodeData&&) = default;
                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderNodeData& operator=(UnityEngine__UIElements__UIR__RenderChain__RenderNodeData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__RenderChain__RenderNodeData& operator=(UnityEngine__UIElements__UIR__RenderChain__RenderNodeData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__RenderChain__RenderNodeData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Material __declspec(property(get=__get_standardMaterial, put=__set_standardMaterial))  standardMaterial;

constexpr void __set_standardMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_standardMaterial() const;

 UnityEngine::Material __declspec(property(get=__get_initialMaterial, put=__set_initialMaterial))  initialMaterial;

constexpr void __set_initialMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_initialMaterial() const;

 UnityEngine::MaterialPropertyBlock __declspec(property(get=__get_matPropBlock, put=__set_matPropBlock))  matPropBlock;

constexpr void __set_matPropBlock(UnityEngine::MaterialPropertyBlock value) ;

constexpr UnityEngine::MaterialPropertyBlock __get_matPropBlock() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_firstCommand, put=__set_firstCommand))  firstCommand;

constexpr void __set_firstCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_firstCommand() const;

 UnityEngine::UIElements::UIR::UIRenderDevice __declspec(property(get=__get_device, put=__set_device))  device;

constexpr void __set_device(UnityEngine::UIElements::UIR::UIRenderDevice value) ;

constexpr UnityEngine::UIElements::UIR::UIRenderDevice __get_device() const;

 UnityEngine::Texture __declspec(property(get=__get_vectorAtlas, put=__set_vectorAtlas))  vectorAtlas;

constexpr void __set_vectorAtlas(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_vectorAtlas() const;

 UnityEngine::Texture __declspec(property(get=__get_shaderInfoAtlas, put=__set_shaderInfoAtlas))  shaderInfoAtlas;

constexpr void __set_shaderInfoAtlas(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_shaderInfoAtlas() const;

 float_t __declspec(property(get=__get_dpiScale, put=__set_dpiScale))  dpiScale;

constexpr void __set_dpiScale(float_t value) ;

constexpr float_t __get_dpiScale() const;

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> __declspec(property(get=__get_transformConstants, put=__set_transformConstants))  transformConstants;

constexpr void __set_transformConstants(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> __get_transformConstants() const;

 Unity::Collections::NativeSlice_1<UnityEngine::Vector4> __declspec(property(get=__get_clipRectConstants, put=__set_clipRectConstants))  clipRectConstants;

constexpr void __set_clipRectConstants(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::Vector4> __get_clipRectConstants() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7492))
// CS Name: UnityEngine.UIElements.UIR.RenderChain::<>c
class CORDL_TYPE UnityEngine__UIElements__UIR__RenderChain____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UIR__RenderChain____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__RenderChain____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__RenderChain____c(UnityEngine__UIElements__UIR__RenderChain____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__RenderChain____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__RenderChain____c(UnityEngine__UIElements__UIR__RenderChain____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__RenderChain____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__RenderChain____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__RenderChain____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__RenderChain____c& operator=(UnityEngine__UIElements__UIR__RenderChain____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__RenderChain____c& operator=(UnityEngine__UIElements__UIR__RenderChain____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c value) ;

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c __get___9() ;

static System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand> __declspec(property(get=__get___9__37_0, put=__set___9__37_0))  __9__37_0;

static void __set___9__37_0(System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand> value) ;

static System::Func_1<UnityEngine::UIElements::UIR::RenderChainCommand> __get___9__37_0() ;

static System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand> __declspec(property(get=__get___9__37_1, put=__set___9__37_1))  __9__37_1;

static void __set___9__37_1(System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand> value) ;

static System::Action_1<UnityEngine::UIElements::UIR::RenderChainCommand> __get___9__37_1() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__UIR__RenderChain____c() ;

/// @brief Method .ctor addr 0x2d1abb0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__37_0 addr 0x2d1abb8 size 0x5c virtual false final false
 UnityEngine::UIElements::UIR::RenderChainCommand __ctor_b__37_0() ;

/// @brief Method <.ctor>b__37_1 addr 0x2d1ac14 size 0x4 virtual false final false
 void __ctor_b__37_1(UnityEngine::UIElements::UIR::RenderChainCommand cmd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::RenderChain
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7493))
// CS Name: UnityEngine.UIElements.UIR.RenderChain
class CORDL_TYPE RenderChain : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c;

using RenderNodeData = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData;

using RenderChainStaticIndexAllocator = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator;

using DepthOrderedDirtyTracking = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x228};

virtual ~RenderChain() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: " const&", def_value: None }]
constexpr RenderChain(RenderChain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: "&&", def_value: None }]
constexpr RenderChain(RenderChain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderChain(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RenderChain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderChain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderChain& operator=(RenderChain&& o) noexcept = default;
  constexpr RenderChain& operator=(RenderChain const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_m_FirstCommand, put=__set_m_FirstCommand))  m_FirstCommand;

constexpr void __set_m_FirstCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_m_FirstCommand() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking __declspec(property(get=__get_m_DirtyTracker, put=__set_m_DirtyTracker))  m_DirtyTracker;

constexpr void __set_m_DirtyTracker(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking __get_m_DirtyTracker() const;

 UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand> __declspec(property(get=__get_m_CommandPool, put=__set_m_CommandPool))  m_CommandPool;

constexpr void __set_m_CommandPool(UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand> value) ;

constexpr UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::RenderChainCommand> __get_m_CommandPool() const;

 UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry> __declspec(property(get=__get_m_TexturePool, put=__set_m_TexturePool))  m_TexturePool;

constexpr void __set_m_TexturePool(UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry> value) ;

constexpr UnityEngine::UIElements::UIR::BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry> __get_m_TexturePool() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData> __declspec(property(get=__get_m_RenderNodesData, put=__set_m_RenderNodesData))  m_RenderNodesData;

constexpr void __set_m_RenderNodesData(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData> __get_m_RenderNodesData() const;

 UnityEngine::Shader __declspec(property(get=__get_m_DefaultShader, put=__set_m_DefaultShader))  m_DefaultShader;

constexpr void __set_m_DefaultShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_DefaultShader() const;

 UnityEngine::Shader __declspec(property(get=__get_m_DefaultWorldSpaceShader, put=__set_m_DefaultWorldSpaceShader))  m_DefaultWorldSpaceShader;

constexpr void __set_m_DefaultWorldSpaceShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_DefaultWorldSpaceShader() const;

 UnityEngine::Material __declspec(property(get=__get_m_DefaultMat, put=__set_m_DefaultMat))  m_DefaultMat;

constexpr void __set_m_DefaultMat(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_DefaultMat() const;

 UnityEngine::Material __declspec(property(get=__get_m_DefaultWorldSpaceMat, put=__set_m_DefaultWorldSpaceMat))  m_DefaultWorldSpaceMat;

constexpr void __set_m_DefaultWorldSpaceMat(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_DefaultWorldSpaceMat() const;

 bool __declspec(property(get=__get_m_BlockDirtyRegistration, put=__set_m_BlockDirtyRegistration))  m_BlockDirtyRegistration;

constexpr void __set_m_BlockDirtyRegistration(bool value) ;

constexpr bool __get_m_BlockDirtyRegistration() const;

 int32_t __declspec(property(get=__get_m_StaticIndex, put=__set_m_StaticIndex))  m_StaticIndex;

constexpr void __set_m_StaticIndex(int32_t value) ;

constexpr int32_t __get_m_StaticIndex() const;

 int32_t __declspec(property(get=__get_m_ActiveRenderNodes, put=__set_m_ActiveRenderNodes))  m_ActiveRenderNodes;

constexpr void __set_m_ActiveRenderNodes(int32_t value) ;

constexpr int32_t __get_m_ActiveRenderNodes() const;

 int32_t __declspec(property(get=__get_m_CustomMaterialCommands, put=__set_m_CustomMaterialCommands))  m_CustomMaterialCommands;

constexpr void __set_m_CustomMaterialCommands(int32_t value) ;

constexpr int32_t __get_m_CustomMaterialCommands() const;

 UnityEngine::UIElements::UIR::ChainBuilderStats __declspec(property(get=__get_m_Stats, put=__set_m_Stats))  m_Stats;

constexpr void __set_m_Stats(UnityEngine::UIElements::UIR::ChainBuilderStats value) ;

constexpr UnityEngine::UIElements::UIR::ChainBuilderStats __get_m_Stats() const;

 uint32_t __declspec(property(get=__get_m_StatsElementsAdded, put=__set_m_StatsElementsAdded))  m_StatsElementsAdded;

constexpr void __set_m_StatsElementsAdded(uint32_t value) ;

constexpr uint32_t __get_m_StatsElementsAdded() const;

 uint32_t __declspec(property(get=__get_m_StatsElementsRemoved, put=__set_m_StatsElementsRemoved))  m_StatsElementsRemoved;

constexpr void __set_m_StatsElementsRemoved(uint32_t value) ;

constexpr uint32_t __get_m_StatsElementsRemoved() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_FirstTextElement, put=__set_m_FirstTextElement))  m_FirstTextElement;

constexpr void __set_m_FirstTextElement(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_FirstTextElement() const;

 UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter __declspec(property(get=__get_m_TextUpdatePainter, put=__set_m_TextUpdatePainter))  m_TextUpdatePainter;

constexpr void __set_m_TextUpdatePainter(UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter value) ;

constexpr UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter __get_m_TextUpdatePainter() const;

 int32_t __declspec(property(get=__get_m_TextElementCount, put=__set_m_TextElementCount))  m_TextElementCount;

constexpr void __set_m_TextElementCount(int32_t value) ;

constexpr int32_t __get_m_TextElementCount() const;

 int32_t __declspec(property(get=__get_m_DirtyTextStartIndex, put=__set_m_DirtyTextStartIndex))  m_DirtyTextStartIndex;

constexpr void __set_m_DirtyTextStartIndex(int32_t value) ;

constexpr int32_t __get_m_DirtyTextStartIndex() const;

 int32_t __declspec(property(get=__get_m_DirtyTextRemaining, put=__set_m_DirtyTextRemaining))  m_DirtyTextRemaining;

constexpr void __set_m_DirtyTextRemaining(int32_t value) ;

constexpr int32_t __get_m_DirtyTextRemaining() const;

 bool __declspec(property(get=__get_m_FontWasReset, put=__set_m_FontWasReset))  m_FontWasReset;

constexpr void __set_m_FontWasReset(bool value) ;

constexpr bool __get_m_FontWasReset() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2> __declspec(property(get=__get_m_LastGroupTransformElementScale, put=__set_m_LastGroupTransformElementScale))  m_LastGroupTransformElementScale;

constexpr void __set_m_LastGroupTransformElementScale(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VisualElement,UnityEngine::Vector2> __get_m_LastGroupTransformElementScale() const;

 UnityEngine::UIElements::TextureRegistry __declspec(property(get=__get_m_TextureRegistry, put=__set_m_TextureRegistry))  m_TextureRegistry;

constexpr void __set_m_TextureRegistry(UnityEngine::UIElements::TextureRegistry value) ;

constexpr UnityEngine::UIElements::TextureRegistry __get_m_TextureRegistry() const;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerProcess, put=__set_s_MarkerProcess))  s_MarkerProcess;

static void __set_s_MarkerProcess(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerProcess() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerClipProcessing, put=__set_s_MarkerClipProcessing))  s_MarkerClipProcessing;

static void __set_s_MarkerClipProcessing(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerClipProcessing() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerOpacityProcessing, put=__set_s_MarkerOpacityProcessing))  s_MarkerOpacityProcessing;

static void __set_s_MarkerOpacityProcessing(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerOpacityProcessing() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerColorsProcessing, put=__set_s_MarkerColorsProcessing))  s_MarkerColorsProcessing;

static void __set_s_MarkerColorsProcessing(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerColorsProcessing() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerTransformProcessing, put=__set_s_MarkerTransformProcessing))  s_MarkerTransformProcessing;

static void __set_s_MarkerTransformProcessing(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerTransformProcessing() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerVisualsProcessing, put=__set_s_MarkerVisualsProcessing))  s_MarkerVisualsProcessing;

static void __set_s_MarkerVisualsProcessing(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerVisualsProcessing() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerTextRegen, put=__set_s_MarkerTextRegen))  s_MarkerTextRegen;

static void __set_s_MarkerTextRegen(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerTextRegen() ;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;

static System::Action __declspec(property(get=__get_OnPreRender, put=__set_OnPreRender))  OnPreRender;

static void __set_OnPreRender(System::Action value) ;

static System::Action __get_OnPreRender() ;

 UnityEngine::UIElements::BaseVisualElementPanel __declspec(property(get=__get__panel_k__BackingField, put=__set__panel_k__BackingField))  _panel_k__BackingField;

constexpr void __set__panel_k__BackingField(UnityEngine::UIElements::BaseVisualElementPanel value) ;

constexpr UnityEngine::UIElements::BaseVisualElementPanel __get__panel_k__BackingField() const;

 UnityEngine::UIElements::UIR::UIRenderDevice __declspec(property(get=__get__device_k__BackingField, put=__set__device_k__BackingField))  _device_k__BackingField;

constexpr void __set__device_k__BackingField(UnityEngine::UIElements::UIR::UIRenderDevice value) ;

constexpr UnityEngine::UIElements::UIR::UIRenderDevice __get__device_k__BackingField() const;

 UnityEngine::UIElements::AtlasBase __declspec(property(get=__get__atlas_k__BackingField, put=__set__atlas_k__BackingField))  _atlas_k__BackingField;

constexpr void __set__atlas_k__BackingField(UnityEngine::UIElements::AtlasBase value) ;

constexpr UnityEngine::UIElements::AtlasBase __get__atlas_k__BackingField() const;

 UnityEngine::UIElements::UIR::VectorImageManager __declspec(property(get=__get__vectorImageManager_k__BackingField, put=__set__vectorImageManager_k__BackingField))  _vectorImageManager_k__BackingField;

constexpr void __set__vectorImageManager_k__BackingField(UnityEngine::UIElements::UIR::VectorImageManager value) ;

constexpr UnityEngine::UIElements::UIR::VectorImageManager __get__vectorImageManager_k__BackingField() const;

 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator __declspec(property(get=__get_shaderInfoAllocator, put=__set_shaderInfoAllocator))  shaderInfoAllocator;

constexpr void __set_shaderInfoAllocator(UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator value) ;

constexpr UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator __get_shaderInfoAllocator() const;

 UnityEngine::UIElements::UIR::Implementation::UIRStylePainter __declspec(property(get=__get__painter_k__BackingField, put=__set__painter_k__BackingField))  _painter_k__BackingField;

constexpr void __set__painter_k__BackingField(UnityEngine::UIElements::UIR::Implementation::UIRStylePainter value) ;

constexpr UnityEngine::UIElements::UIR::Implementation::UIRStylePainter __get__painter_k__BackingField() const;

 bool __declspec(property(get=__get__drawStats_k__BackingField, put=__set__drawStats_k__BackingField))  _drawStats_k__BackingField;

constexpr void __set__drawStats_k__BackingField(bool value) ;

constexpr bool __get__drawStats_k__BackingField() const;

 bool __declspec(property(get=__get__drawInCameras_k__BackingField, put=__set__drawInCameras_k__BackingField))  _drawInCameras_k__BackingField;

constexpr void __set__drawInCameras_k__BackingField(bool value) ;

constexpr bool __get__drawInCameras_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;

 UnityEngine::UIElements::BaseVisualElementPanel __declspec(property(get=get_panel, put=set_panel))  panel;

 UnityEngine::UIElements::UIR::UIRenderDevice __declspec(property(get=get_device, put=set_device))  device;

 UnityEngine::UIElements::AtlasBase __declspec(property(get=get_atlas, put=set_atlas))  atlas;

 UnityEngine::UIElements::UIR::VectorImageManager __declspec(property(get=get_vectorImageManager, put=set_vectorImageManager))  vectorImageManager;

 UnityEngine::UIElements::UIR::Implementation::UIRStylePainter __declspec(property(get=get_painter, put=set_painter))  painter;

 bool __declspec(property(get=get_drawStats, put=set_drawStats))  drawStats;

 bool __declspec(property(get=get_drawInCameras, put=set_drawInCameras))  drawInCameras;

 UnityEngine::Shader __declspec(property(put=set_defaultShader))  defaultShader;

 UnityEngine::Shader __declspec(property(put=set_defaultWorldSpaceShader))  defaultWorldSpaceShader;


// Methods

// Ctor Parameters [CppParam { name: "panel", ty: "UnityEngine::UIElements::BaseVisualElementPanel", modifiers: "", def_value: None }]
explicit RenderChain(UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method .ctor addr 0x2d16344 size 0x3b8 virtual false final false
 void _ctor(UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method Constructor addr 0x2d166fc size 0x388 virtual false final false
 void Constructor(UnityEngine::UIElements::BaseVisualElementPanel panelObj, UnityEngine::UIElements::UIR::UIRenderDevice deviceObj, UnityEngine::UIElements::AtlasBase atlas, UnityEngine::UIElements::UIR::VectorImageManager vectorImageMan) ;

/// @brief Method Destructor addr 0x2d16a84 size 0x244 virtual false final false
 void Destructor() ;

/// @brief Method get_disposed addr 0x2d16e1c size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2d16e24 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2d16e30 size 0x70 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2d16ea0 size 0x2c virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method ProcessChanges addr 0x2d16ecc size 0x5cc virtual false final false
 void ProcessChanges() ;

/// @brief Method Render addr 0x2d176c8 size 0x338 virtual false final false
 void Render() ;

/// @brief Method ProcessTextRegen addr 0x2d17498 size 0x230 virtual false final false
 void ProcessTextRegen(bool timeSliced) ;

/// @brief Method UIEOnChildAdded addr 0x2d18960 size 0x1cc virtual false final false
 void UIEOnChildAdded(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UIEOnChildrenReordered addr 0x2d18ce8 size 0x1b8 virtual false final false
 void UIEOnChildrenReordered(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UIEOnChildRemoving addr 0x2d18ea0 size 0x100 virtual false final false
 void UIEOnChildRemoving(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method StopTrackingGroupTransformElement addr 0x2d18fa0 size 0x58 virtual false final false
 void StopTrackingGroupTransformElement(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UIEOnRenderHintsChanged addr 0x2d18ff8 size 0xa0 virtual false final false
 void UIEOnRenderHintsChanged(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UIEOnClippingChanged addr 0x2d18b2c size 0x94 virtual false final false
 void UIEOnClippingChanged(UnityEngine::UIElements::VisualElement ve, bool hierarchical) ;

/// @brief Method UIEOnOpacityChanged addr 0x2d18bc0 size 0x94 virtual false final false
 void UIEOnOpacityChanged(UnityEngine::UIElements::VisualElement ve, bool hierarchical) ;

/// @brief Method UIEOnColorChanged addr 0x2d19098 size 0x88 virtual false final false
 void UIEOnColorChanged(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method UIEOnTransformOrSizeChanged addr 0x2d19120 size 0x98 virtual false final false
 void UIEOnTransformOrSizeChanged(UnityEngine::UIElements::VisualElement ve, bool transformChanged, bool clipRectSizeChanged) ;

/// @brief Method UIEOnVisualsChanged addr 0x2d18c54 size 0x94 virtual false final false
 void UIEOnVisualsChanged(UnityEngine::UIElements::VisualElement ve, bool hierarchical) ;

/// @brief Method get_panel addr 0x2d191b8 size 0x8 virtual false final false
 UnityEngine::UIElements::BaseVisualElementPanel get_panel() ;

/// @brief Method set_panel addr 0x2d191c0 size 0x8 virtual false final false
 void set_panel(UnityEngine::UIElements::BaseVisualElementPanel value) ;

/// @brief Method get_device addr 0x2d191c8 size 0x8 virtual false final false
 UnityEngine::UIElements::UIR::UIRenderDevice get_device() ;

/// @brief Method set_device addr 0x2d191d0 size 0x8 virtual false final false
 void set_device(UnityEngine::UIElements::UIR::UIRenderDevice value) ;

/// @brief Method get_atlas addr 0x2d191d8 size 0x8 virtual false final false
 UnityEngine::UIElements::AtlasBase get_atlas() ;

/// @brief Method set_atlas addr 0x2d191e0 size 0x8 virtual false final false
 void set_atlas(UnityEngine::UIElements::AtlasBase value) ;

/// @brief Method get_vectorImageManager addr 0x2d191e8 size 0x8 virtual false final false
 UnityEngine::UIElements::UIR::VectorImageManager get_vectorImageManager() ;

/// @brief Method set_vectorImageManager addr 0x2d191f0 size 0x8 virtual false final false
 void set_vectorImageManager(UnityEngine::UIElements::UIR::VectorImageManager value) ;

/// @brief Method get_painter addr 0x2d191f8 size 0x8 virtual false final false
 UnityEngine::UIElements::UIR::Implementation::UIRStylePainter get_painter() ;

/// @brief Method set_painter addr 0x2d19200 size 0x8 virtual false final false
 void set_painter(UnityEngine::UIElements::UIR::Implementation::UIRStylePainter value) ;

/// @brief Method get_drawStats addr 0x2d19208 size 0x8 virtual false final false
 bool get_drawStats() ;

/// @brief Method set_drawStats addr 0x2d19210 size 0xc virtual false final false
 void set_drawStats(bool value) ;

/// @brief Method get_drawInCameras addr 0x2d1921c size 0x8 virtual false final false
 bool get_drawInCameras() ;

/// @brief Method set_drawInCameras addr 0x2d19224 size 0xc virtual false final false
 void set_drawInCameras(bool value) ;

/// @brief Method set_defaultShader addr 0x2d19230 size 0xb0 virtual false final false
 void set_defaultShader(UnityEngine::Shader value) ;

/// @brief Method set_defaultWorldSpaceShader addr 0x2d192e0 size 0xb0 virtual false final false
 void set_defaultWorldSpaceShader(UnityEngine::Shader value) ;

/// @brief Method GetStandardMaterial addr 0x2d17a00 size 0xec virtual false final false
 UnityEngine::Material GetStandardMaterial() ;

/// @brief Method GetStandardWorldSpaceMaterial addr 0x2d19390 size 0xec virtual false final false
 UnityEngine::Material GetStandardWorldSpaceMaterial() ;

/// @brief Method EnsureFitsDepth addr 0x2d1947c size 0xc virtual false final false
 void EnsureFitsDepth(int32_t depth) ;

/// @brief Method ChildWillBeRemoved addr 0x2d19488 size 0xb8 virtual false final false
 void ChildWillBeRemoved(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method AllocCommand addr 0x2d19540 size 0x68 virtual false final false
 UnityEngine::UIElements::UIR::RenderChainCommand AllocCommand() ;

/// @brief Method FreeCommand addr 0x2d195a8 size 0xb0 virtual false final false
 void FreeCommand(UnityEngine::UIElements::UIR::RenderChainCommand cmd) ;

/// @brief Method OnRenderCommandAdded addr 0x2d19658 size 0x8c virtual false final false
 void OnRenderCommandAdded(UnityEngine::UIElements::UIR::RenderChainCommand command) ;

/// @brief Method OnRenderCommandsRemoved addr 0x2d196e4 size 0x28 virtual false final false
 void OnRenderCommandsRemoved(UnityEngine::UIElements::UIR::RenderChainCommand firstCommand, UnityEngine::UIElements::UIR::RenderChainCommand lastCommand) ;

/// @brief Method AddTextElement addr 0x2d1970c size 0x34 virtual false final false
 void AddTextElement(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method RemoveTextElement addr 0x2d19740 size 0x54 virtual false final false
 void RemoveTextElement(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method OnGroupTransformElementChangedTransform addr 0x2d19794 size 0x12c virtual false final false
 void OnGroupTransformElementChangedTransform(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method AccessRenderNodeData addr 0x2d198c0 size 0xd8 virtual false final false
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData AccessRenderNodeData(::cordl_internals::intptr_t obj) ;

/// @brief Method OnRenderNodeExecute addr 0x2d19998 size 0xa8 virtual false final false
static void OnRenderNodeExecute(::cordl_internals::intptr_t obj) ;

/// @brief Method OnRegisterIntermediateRenderers addr 0x2d19a40 size 0x460 virtual false final false
static void OnRegisterIntermediateRenderers(UnityEngine::Camera camera) ;

/// @brief Method OnRegisterIntermediateRendererMat addr 0x2d19ea0 size 0x354 virtual false final false
static void OnRegisterIntermediateRendererMat(UnityEngine::UIElements::BaseRuntimePanel rtp, UnityEngine::UIElements::UIR::RenderChain renderChain, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData> rnd, UnityEngine::Camera camera, int32_t sameDistanceSortPriority) ;

/// @brief Method RepaintTexturedElements addr 0x2d1a1f4 size 0xe0 virtual false final false
 void RepaintTexturedElements() ;

/// @brief Method OnFontReset addr 0x2d1a2d4 size 0xc virtual false final false
 void OnFontReset(UnityEngine::Font font) ;

/// @brief Method AppendTexture addr 0x2d1a2e0 size 0xa8 virtual false final false
 void AppendTexture(UnityEngine::UIElements::VisualElement ve, UnityEngine::Texture src, UnityEngine::UIElements::TextureId id, bool isAtlas) ;

/// @brief Method ResetTextures addr 0x2d16d10 size 0x10c virtual false final false
 void ResetTextures(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method DrawStats addr 0x2d17aec size 0xe74 virtual false final false
 void DrawStats() ;

/// @brief Method GetFirstElementInPanel addr 0x2d16cc8 size 0x48 virtual false final false
static UnityEngine::UIElements::VisualElement GetFirstElementInPanel(UnityEngine::UIElements::VisualElement ve) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::RenderChain);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::RenderChain, "UnityEngine.UIElements.UIR", "RenderChain");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain____c, "UnityEngine.UIElements.UIR", "RenderChain/<>c");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__DepthOrderedDirtyTracking, "UnityEngine.UIElements.UIR", "RenderChain/DepthOrderedDirtyTracking");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderChainStaticIndexAllocator, "UnityEngine.UIElements.UIR", "RenderChain/RenderChainStaticIndexAllocator");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__RenderChain__RenderNodeData, "UnityEngine.UIElements.UIR", "RenderChain/RenderNodeData");
