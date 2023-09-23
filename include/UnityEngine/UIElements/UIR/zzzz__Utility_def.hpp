#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct RectInt;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class UnityEngine__UIElements__UIR__Utility__GPUBuffer_1;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__Utility__GPUBufferType;
}
namespace UnityEngine::UIElements::UIR {
template<>
class UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<UnityEngine::UIElements::Vertex>;
}
namespace UnityEngine::UIElements::UIR {
template<>
class UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t>;
}
namespace UnityEngine::UIElements::UIR {
class Utility;
}
// Type: ::GPUBufferType
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15403))
// CS Name: UnityEngine.UIElements.UIR.Utility::GPUBufferType
struct CORDL_TYPE UnityEngine__UIElements__UIR__Utility__GPUBufferType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Utility__GPUBufferType(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__UIR__Utility__GPUBufferType(UnityEngine__UIElements__UIR__Utility__GPUBufferType const&) = default;
                    constexpr UnityEngine__UIElements__UIR__Utility__GPUBufferType(UnityEngine__UIElements__UIR__Utility__GPUBufferType&&) = default;
                    constexpr UnityEngine__UIElements__UIR__Utility__GPUBufferType& operator=(UnityEngine__UIElements__UIR__Utility__GPUBufferType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__Utility__GPUBufferType& operator=(UnityEngine__UIElements__UIR__Utility__GPUBufferType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Utility__GPUBufferType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__UIR__Utility__GPUBufferType_Unwrapped : int32_t {
__Vertex = 0,
__Index = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__UIR__Utility__GPUBufferType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__UIR__Utility__GPUBufferType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Vertex offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType const Vertex;

/// @brief Field Index offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType const Index;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::GPUBuffer`1
// Type: UnityEngine.UIElements.UIR::Utility
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15405))
// CS Name: UnityEngine.UIElements.UIR.Utility
class CORDL_TYPE Utility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using GPUBuffer_1 = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<T>;

using GPUBufferType = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Utility() = default;

// Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: " const&", def_value: None }]
constexpr Utility(Utility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "&&", def_value: None }]
constexpr Utility(Utility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Utility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Utility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Utility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Utility& operator=(Utility&& o) noexcept = default;
  constexpr Utility& operator=(Utility const& o) noexcept = default;
                


// Fields

static System::Action_1<bool> __declspec(property(get=__get_GraphicsResourcesRecreate, put=__set_GraphicsResourcesRecreate))  GraphicsResourcesRecreate;

static void __set_GraphicsResourcesRecreate(System::Action_1<bool> value) ;

static System::Action_1<bool> __get_GraphicsResourcesRecreate() ;

static System::Action __declspec(property(get=__get_EngineUpdate, put=__set_EngineUpdate))  EngineUpdate;

static void __set_EngineUpdate(System::Action value) ;

static System::Action __get_EngineUpdate() ;

static System::Action __declspec(property(get=__get_FlushPendingResources, put=__set_FlushPendingResources))  FlushPendingResources;

static void __set_FlushPendingResources(System::Action value) ;

static System::Action __get_FlushPendingResources() ;

static System::Action_1<UnityEngine::Camera> __declspec(property(get=__get_RegisterIntermediateRenderers, put=__set_RegisterIntermediateRenderers))  RegisterIntermediateRenderers;

static void __set_RegisterIntermediateRenderers(System::Action_1<UnityEngine::Camera> value) ;

static System::Action_1<UnityEngine::Camera> __get_RegisterIntermediateRenderers() ;

static System::Action_1<::cordl_internals::intptr_t> __declspec(property(get=__get_RenderNodeAdd, put=__set_RenderNodeAdd))  RenderNodeAdd;

static void __set_RenderNodeAdd(System::Action_1<::cordl_internals::intptr_t> value) ;

static System::Action_1<::cordl_internals::intptr_t> __get_RenderNodeAdd() ;

static System::Action_1<::cordl_internals::intptr_t> __declspec(property(get=__get_RenderNodeExecute, put=__set_RenderNodeExecute))  RenderNodeExecute;

static void __set_RenderNodeExecute(System::Action_1<::cordl_internals::intptr_t> value) ;

static System::Action_1<::cordl_internals::intptr_t> __get_RenderNodeExecute() ;

static System::Action_1<::cordl_internals::intptr_t> __declspec(property(get=__get_RenderNodeCleanup, put=__set_RenderNodeCleanup))  RenderNodeCleanup;

static void __set_RenderNodeCleanup(System::Action_1<::cordl_internals::intptr_t> value) ;

static System::Action_1<::cordl_internals::intptr_t> __get_RenderNodeCleanup() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerRaiseEngineUpdate, put=__set_s_MarkerRaiseEngineUpdate))  s_MarkerRaiseEngineUpdate;

static void __set_s_MarkerRaiseEngineUpdate(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerRaiseEngineUpdate() ;


// Methods

/// @brief Method SetVectorArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void SetVectorArray(UnityEngine::MaterialPropertyBlock props, int32_t name, Unity::Collections::NativeSlice_1<T> vector4s) ;

/// @brief Method add_GraphicsResourcesRecreate addr 0x2d2f0b4 size 0xf0 virtual false final false
static void add_GraphicsResourcesRecreate(System::Action_1<bool> value) ;

/// @brief Method remove_GraphicsResourcesRecreate addr 0x2d2f1a4 size 0xf0 virtual false final false
static void remove_GraphicsResourcesRecreate(System::Action_1<bool> value) ;

/// @brief Method add_EngineUpdate addr 0x2d2f294 size 0xdc virtual false final false
static void add_EngineUpdate(System::Action value) ;

/// @brief Method remove_EngineUpdate addr 0x2d2f370 size 0xdc virtual false final false
static void remove_EngineUpdate(System::Action value) ;

/// @brief Method add_FlushPendingResources addr 0x2d2f44c size 0xdc virtual false final false
static void add_FlushPendingResources(System::Action value) ;

/// @brief Method remove_FlushPendingResources addr 0x2d2f528 size 0xdc virtual false final false
static void remove_FlushPendingResources(System::Action value) ;

/// @brief Method add_RegisterIntermediateRenderers addr 0x2d2f604 size 0xf4 virtual false final false
static void add_RegisterIntermediateRenderers(System::Action_1<UnityEngine::Camera> value) ;

/// @brief Method remove_RegisterIntermediateRenderers addr 0x2d2f6f8 size 0xf4 virtual false final false
static void remove_RegisterIntermediateRenderers(System::Action_1<UnityEngine::Camera> value) ;

/// @brief Method add_RenderNodeExecute addr 0x2d2f7ec size 0xf4 virtual false final false
static void add_RenderNodeExecute(System::Action_1<::cordl_internals::intptr_t> value) ;

/// @brief Method remove_RenderNodeExecute addr 0x2d2f8e0 size 0xf4 virtual false final false
static void remove_RenderNodeExecute(System::Action_1<::cordl_internals::intptr_t> value) ;

/// @brief Method RaiseGraphicsResourcesRecreate addr 0x2d2f9d4 size 0x7c virtual false final false
static void RaiseGraphicsResourcesRecreate(bool recreate) ;

/// @brief Method RaiseEngineUpdate addr 0x2d2fa50 size 0x94 virtual false final false
static void RaiseEngineUpdate() ;

/// @brief Method RaiseFlushPendingResources addr 0x2d2fae4 size 0x74 virtual false final false
static void RaiseFlushPendingResources() ;

/// @brief Method RaiseRegisterIntermediateRenderers addr 0x2d2fb58 size 0x7c virtual false final false
static void RaiseRegisterIntermediateRenderers(UnityEngine::Camera camera) ;

/// @brief Method RaiseRenderNodeAdd addr 0x2d2fbd4 size 0x7c virtual false final false
static void RaiseRenderNodeAdd(::cordl_internals::intptr_t userData) ;

/// @brief Method RaiseRenderNodeExecute addr 0x2d2fc50 size 0x7c virtual false final false
static void RaiseRenderNodeExecute(::cordl_internals::intptr_t userData) ;

/// @brief Method RaiseRenderNodeCleanup addr 0x2d2fccc size 0x7c virtual false final false
static void RaiseRenderNodeCleanup(::cordl_internals::intptr_t userData) ;

/// @brief Method AllocateBuffer addr 0x2d2fd48 size 0x54 virtual false final false
static ::cordl_internals::intptr_t AllocateBuffer(int32_t elementCount, int32_t elementStride, bool vertexBuffer) ;

/// @brief Method FreeBuffer addr 0x2d2fd9c size 0x3c virtual false final false
static void FreeBuffer(::cordl_internals::intptr_t buffer) ;

/// @brief Method UpdateBufferRanges addr 0x2d2fdd8 size 0x6c virtual false final false
static void UpdateBufferRanges(::cordl_internals::intptr_t buffer, ::cordl_internals::intptr_t ranges, int32_t rangeCount, int32_t writeRangeStart, int32_t writeRangeEnd) ;

/// @brief Method SetVectorArray addr 0x2d2fe44 size 0x5c virtual false final false
static void SetVectorArray(UnityEngine::MaterialPropertyBlock props, int32_t name, ::cordl_internals::intptr_t vector4s, int32_t count) ;

/// @brief Method GetVertexDeclaration addr 0x2d2fea0 size 0x3c virtual false final false
static ::cordl_internals::intptr_t GetVertexDeclaration(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> vertexAttributes) ;

/// @brief Method RegisterIntermediateRenderer addr 0x2d2fedc size 0xec virtual false final false
static void RegisterIntermediateRenderer(UnityEngine::Camera camera, UnityEngine::Material material, UnityEngine::Matrix4x4 transform, UnityEngine::Bounds aabb, int32_t renderLayer, int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority, uint64_t sceneCullingMask, int32_t rendererCallbackFlags, ::cordl_internals::intptr_t userData, int32_t userDataSize) ;

/// @brief Method DrawRanges addr 0x2d30088 size 0x74 virtual false final false
static void DrawRanges(::cordl_internals::intptr_t ib, void* vertexStreams, int32_t streamCount, ::cordl_internals::intptr_t ranges, int32_t rangeCount, ::cordl_internals::intptr_t vertexDecl) ;

/// @brief Method SetPropertyBlock addr 0x2d300fc size 0x3c virtual false final false
static void SetPropertyBlock(UnityEngine::MaterialPropertyBlock props) ;

/// @brief Method SetScissorRect addr 0x2d30138 size 0x80 virtual false final false
static void SetScissorRect(UnityEngine::RectInt scissorRect) ;

/// @brief Method DisableScissor addr 0x2d301f4 size 0x28 virtual false final false
static void DisableScissor() ;

/// @brief Method CreateStencilState addr 0x2d3021c size 0x84 virtual false final false
static ::cordl_internals::intptr_t CreateStencilState(UnityEngine::Rendering::StencilState stencilState) ;

/// @brief Method SetStencilState addr 0x2d302dc size 0x44 virtual false final false
static void SetStencilState(::cordl_internals::intptr_t stencilState, int32_t stencilRef) ;

/// @brief Method HasMappedBufferRange addr 0x2d30320 size 0x28 virtual false final false
static bool HasMappedBufferRange() ;

/// @brief Method InsertCPUFence addr 0x2d30348 size 0x28 virtual false final false
static uint32_t InsertCPUFence() ;

/// @brief Method CPUFencePassed addr 0x2d30370 size 0x3c virtual false final false
static bool CPUFencePassed(uint32_t fence) ;

/// @brief Method WaitForCPUFencePassed addr 0x2d303ac size 0x3c virtual false final false
static void WaitForCPUFencePassed(uint32_t fence) ;

/// @brief Method SyncRenderThread addr 0x2d303e8 size 0x28 virtual false final false
static void SyncRenderThread() ;

/// @brief Method GetActiveViewport addr 0x2d30410 size 0x84 virtual false final false
static UnityEngine::RectInt GetActiveViewport() ;

/// @brief Method ProfileDrawChainBegin addr 0x2d304d0 size 0x28 virtual false final false
static void ProfileDrawChainBegin() ;

/// @brief Method ProfileDrawChainEnd addr 0x2d304f8 size 0x28 virtual false final false
static void ProfileDrawChainEnd() ;

/// @brief Method NotifyOfUIREvents addr 0x2d30520 size 0x3c virtual false final false
static void NotifyOfUIREvents(bool subscribe) ;

/// @brief Method GetUnityProjectionMatrix addr 0x2d3055c size 0x9c virtual false final false
static UnityEngine::Matrix4x4 GetUnityProjectionMatrix() ;

/// @brief Method RegisterIntermediateRenderer_Injected addr 0x2d2ffc8 size 0xc0 virtual false final false
static void RegisterIntermediateRenderer_Injected(UnityEngine::Camera camera, UnityEngine::Material material, ByRef<UnityEngine::Matrix4x4> transform, ByRef<UnityEngine::Bounds> aabb, int32_t renderLayer, int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority, uint64_t sceneCullingMask, int32_t rendererCallbackFlags, ::cordl_internals::intptr_t userData, int32_t userDataSize) ;

/// @brief Method SetScissorRect_Injected addr 0x2d301b8 size 0x3c virtual false final false
static void SetScissorRect_Injected(ByRef<UnityEngine::RectInt> scissorRect) ;

/// @brief Method CreateStencilState_Injected addr 0x2d302a0 size 0x3c virtual false final false
static ::cordl_internals::intptr_t CreateStencilState_Injected(ByRef<UnityEngine::Rendering::StencilState> stencilState) ;

/// @brief Method GetActiveViewport_Injected addr 0x2d30494 size 0x3c virtual false final false
static void GetActiveViewport_Injected(ByRef<UnityEngine::RectInt> ret) ;

/// @brief Method GetUnityProjectionMatrix_Injected addr 0x2d305f8 size 0x3c virtual false final false
static void GetUnityProjectionMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::GPUBuffer`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15404))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15404), inst: 728 })
// CS Name: UnityEngine.UIElements.UIR.Utility::GPUBuffer`1
class CORDL_TYPE UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__UIR__Utility__GPUBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Utility__GPUBuffer_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Utility__GPUBuffer_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1 const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_buffer() const;

 int32_t __declspec(property(get=__get_elemCount, put=__set_elemCount))  elemCount;

constexpr void __set_elemCount(int32_t value) ;

constexpr int32_t __get_elemCount() const;

 int32_t __declspec(property(get=__get_elemStride, put=__set_elemStride))  elemStride;

constexpr void __set_elemStride(int32_t value) ;

constexpr int32_t __get_elemStride() const;


// Properties

 int32_t __declspec(property(get=get_ElementStride))  ElementStride;

 ::cordl_internals::intptr_t __declspec(property(get=get_BufferPointer))  BufferPointer;


// Methods

// Ctor Parameters [CppParam { name: "elementCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(int32_t elementCount, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType type) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t elementCount, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType type) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method UpdateRanges addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateRanges(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ranges, int32_t rangesMin, int32_t rangesMax) ;

/// @brief Method get_ElementStride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_ElementStride() ;

/// @brief Method get_BufferPointer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::cordl_internals::intptr_t get_BufferPointer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::GPUBuffer`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15404))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15404), inst: 732 })
// CS Name: UnityEngine.UIElements.UIR.Utility::GPUBuffer`1
class CORDL_TYPE UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<UnityEngine::UIElements::Vertex> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__UIR__Utility__GPUBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Utility__GPUBuffer_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Utility__GPUBuffer_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__Utility__GPUBuffer_1& operator=(UnityEngine__UIElements__UIR__Utility__GPUBuffer_1 const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_buffer() const;

 int32_t __declspec(property(get=__get_elemCount, put=__set_elemCount))  elemCount;

constexpr void __set_elemCount(int32_t value) ;

constexpr int32_t __get_elemCount() const;

 int32_t __declspec(property(get=__get_elemStride, put=__set_elemStride))  elemStride;

constexpr void __set_elemStride(int32_t value) ;

constexpr int32_t __get_elemStride() const;


// Properties

 int32_t __declspec(property(get=get_ElementStride))  ElementStride;

 ::cordl_internals::intptr_t __declspec(property(get=get_BufferPointer))  BufferPointer;


// Methods

// Ctor Parameters [CppParam { name: "elementCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__UIR__Utility__GPUBuffer_1(int32_t elementCount, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType type) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t elementCount, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType type) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method UpdateRanges addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateRanges(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ranges, int32_t rangesMin, int32_t rangesMax) ;

/// @brief Method get_ElementStride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_ElementStride() ;

/// @brief Method get_BufferPointer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::cordl_internals::intptr_t get_BufferPointer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1, "UnityEngine.UIElements.UIR", "Utility/GPUBuffer`1");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType, "UnityEngine.UIElements.UIR", "Utility/GPUBufferType");
NEED_NO_BOX(UnityEngine::UIElements::UIR::Utility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Utility, "UnityEngine.UIElements.UIR", "Utility");
