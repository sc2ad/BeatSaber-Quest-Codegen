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
class UnityEngine__UIElements__UIR__Utility__GPUBuffer_1;
}
namespace System {
class Exception;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__UIRenderDevice____c;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
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
struct State;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__UIRenderDevice____c;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState;
}
// Type: ::AllocToUpdate
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7526))
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice::AllocToUpdate
struct CORDL_TYPE UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "meshHandle", ty: "UnityEngine::UIElements::UIR::MeshHandle", modifiers: "", def_value: None }, CppParam { name: "permAllocVerts", ty: "UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "permAllocIndices", ty: "UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "permPage", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: None }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate(uint32_t id, uint32_t allocTime, UnityEngine::UIElements::UIR::MeshHandle meshHandle, UnityEngine::UIElements::UIR::Alloc permAllocVerts, UnityEngine::UIElements::UIR::Alloc permAllocIndices, UnityEngine::UIElements::UIR::Page permPage, bool copyBackIndices) noexcept;


                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate const&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate&&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(uint32_t value) ;

constexpr uint32_t __get_id() const;

 uint32_t __declspec(property(get=__get_allocTime, put=__set_allocTime))  allocTime;

constexpr void __set_allocTime(uint32_t value) ;

constexpr uint32_t __get_allocTime() const;

 UnityEngine::UIElements::UIR::MeshHandle __declspec(property(get=__get_meshHandle, put=__set_meshHandle))  meshHandle;

constexpr void __set_meshHandle(UnityEngine::UIElements::UIR::MeshHandle value) ;

constexpr UnityEngine::UIElements::UIR::MeshHandle __get_meshHandle() const;

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_permAllocVerts, put=__set_permAllocVerts))  permAllocVerts;

constexpr void __set_permAllocVerts(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_permAllocVerts() const;

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_permAllocIndices, put=__set_permAllocIndices))  permAllocIndices;

constexpr void __set_permAllocIndices(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_permAllocIndices() const;

 UnityEngine::UIElements::UIR::Page __declspec(property(get=__get_permPage, put=__set_permPage))  permPage;

constexpr void __set_permPage(UnityEngine::UIElements::UIR::Page value) ;

constexpr UnityEngine::UIElements::UIR::Page __get_permPage() const;

 bool __declspec(property(get=__get_copyBackIndices, put=__set_copyBackIndices))  copyBackIndices;

constexpr void __set_copyBackIndices(bool value) ;

constexpr bool __get_copyBackIndices() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::AllocToFree
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7527))
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice::AllocToFree
struct CORDL_TYPE UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "alloc", ty: "UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "page", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree(UnityEngine::UIElements::UIR::Alloc alloc, UnityEngine::UIElements::UIR::Page page, bool vertices) noexcept;


                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree const&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree&&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_alloc, put=__set_alloc))  alloc;

constexpr void __set_alloc(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_alloc() const;

 UnityEngine::UIElements::UIR::Page __declspec(property(get=__get_page, put=__set_page))  page;

constexpr void __set_page(UnityEngine::UIElements::UIR::Page value) ;

constexpr UnityEngine::UIElements::UIR::Page __get_page() const;

 bool __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

constexpr void __set_vertices(bool value) ;

constexpr bool __get_vertices() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::DeviceToFree
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7528))
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice::DeviceToFree
struct CORDL_TYPE UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "page", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree(uint32_t handle, UnityEngine::UIElements::UIR::Page page) noexcept;


                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree(UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree const&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree(UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree&&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(uint32_t value) ;

constexpr uint32_t __get_handle() const;

 UnityEngine::UIElements::UIR::Page __declspec(property(get=__get_page, put=__set_page))  page;

constexpr void __set_page(UnityEngine::UIElements::UIR::Page value) ;

constexpr UnityEngine::UIElements::UIR::Page __get_page() const;


// Methods

/// @brief Method Dispose addr 0x2c56b84 size 0x2c virtual false final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::EvaluationState
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7529))
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice::EvaluationState
struct CORDL_TYPE UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "stateMatProps", ty: "UnityEngine::MaterialPropertyBlock", modifiers: "", def_value: None }, CppParam { name: "defaultMat", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "curState", ty: "UnityEngine::UIElements::UIR::State", modifiers: "", def_value: None }, CppParam { name: "curPage", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: None }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyCommonBlock", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyStateBlock", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyStencil", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState(UnityEngine::MaterialPropertyBlock stateMatProps, UnityEngine::Material defaultMat, UnityEngine::UIElements::UIR::State curState, UnityEngine::UIElements::UIR::Page curPage, bool mustApplyMaterial, bool mustApplyCommonBlock, bool mustApplyStateBlock, bool mustApplyStencil) noexcept;


                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState(UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState const&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState(UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState&&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::MaterialPropertyBlock __declspec(property(get=__get_stateMatProps, put=__set_stateMatProps))  stateMatProps;

constexpr void __set_stateMatProps(UnityEngine::MaterialPropertyBlock value) ;

constexpr UnityEngine::MaterialPropertyBlock __get_stateMatProps() const;

 UnityEngine::Material __declspec(property(get=__get_defaultMat, put=__set_defaultMat))  defaultMat;

constexpr void __set_defaultMat(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_defaultMat() const;

 UnityEngine::UIElements::UIR::State __declspec(property(get=__get_curState, put=__set_curState))  curState;

constexpr void __set_curState(UnityEngine::UIElements::UIR::State value) ;

constexpr UnityEngine::UIElements::UIR::State __get_curState() const;

 UnityEngine::UIElements::UIR::Page __declspec(property(get=__get_curPage, put=__set_curPage))  curPage;

constexpr void __set_curPage(UnityEngine::UIElements::UIR::Page value) ;

constexpr UnityEngine::UIElements::UIR::Page __get_curPage() const;

 bool __declspec(property(get=__get_mustApplyMaterial, put=__set_mustApplyMaterial))  mustApplyMaterial;

constexpr void __set_mustApplyMaterial(bool value) ;

constexpr bool __get_mustApplyMaterial() const;

 bool __declspec(property(get=__get_mustApplyCommonBlock, put=__set_mustApplyCommonBlock))  mustApplyCommonBlock;

constexpr void __set_mustApplyCommonBlock(bool value) ;

constexpr bool __get_mustApplyCommonBlock() const;

 bool __declspec(property(get=__get_mustApplyStateBlock, put=__set_mustApplyStateBlock))  mustApplyStateBlock;

constexpr void __set_mustApplyStateBlock(bool value) ;

constexpr bool __get_mustApplyStateBlock() const;

 bool __declspec(property(get=__get_mustApplyStencil, put=__set_mustApplyStencil))  mustApplyStencil;

constexpr void __set_mustApplyStencil(bool value) ;

constexpr bool __get_mustApplyStencil() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::DrawStatistics
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7530))
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice::DrawStatistics
struct CORDL_TYPE UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "materialSetCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCallCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stencilRefChanges", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics(int32_t currentFrameIndex, uint32_t totalIndices, uint32_t commandCount, uint32_t drawCommandCount, uint32_t materialSetCount, uint32_t drawRangeCount, uint32_t drawRangeCallCount, uint32_t immediateDraws, uint32_t stencilRefChanges) noexcept;


                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics(UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics const&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics(UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics&&) = default;
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics& operator=(UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_currentFrameIndex, put=__set_currentFrameIndex))  currentFrameIndex;

constexpr void __set_currentFrameIndex(int32_t value) ;

constexpr int32_t __get_currentFrameIndex() const;

 uint32_t __declspec(property(get=__get_totalIndices, put=__set_totalIndices))  totalIndices;

constexpr void __set_totalIndices(uint32_t value) ;

constexpr uint32_t __get_totalIndices() const;

 uint32_t __declspec(property(get=__get_commandCount, put=__set_commandCount))  commandCount;

constexpr void __set_commandCount(uint32_t value) ;

constexpr uint32_t __get_commandCount() const;

 uint32_t __declspec(property(get=__get_drawCommandCount, put=__set_drawCommandCount))  drawCommandCount;

constexpr void __set_drawCommandCount(uint32_t value) ;

constexpr uint32_t __get_drawCommandCount() const;

 uint32_t __declspec(property(get=__get_materialSetCount, put=__set_materialSetCount))  materialSetCount;

constexpr void __set_materialSetCount(uint32_t value) ;

constexpr uint32_t __get_materialSetCount() const;

 uint32_t __declspec(property(get=__get_drawRangeCount, put=__set_drawRangeCount))  drawRangeCount;

constexpr void __set_drawRangeCount(uint32_t value) ;

constexpr uint32_t __get_drawRangeCount() const;

 uint32_t __declspec(property(get=__get_drawRangeCallCount, put=__set_drawRangeCallCount))  drawRangeCallCount;

constexpr void __set_drawRangeCallCount(uint32_t value) ;

constexpr uint32_t __get_drawRangeCallCount() const;

 uint32_t __declspec(property(get=__get_immediateDraws, put=__set_immediateDraws))  immediateDraws;

constexpr void __set_immediateDraws(uint32_t value) ;

constexpr uint32_t __get_immediateDraws() const;

 uint32_t __declspec(property(get=__get_stencilRefChanges, put=__set_stencilRefChanges))  stencilRefChanges;

constexpr void __set_stencilRefChanges(uint32_t value) ;

constexpr uint32_t __get_stencilRefChanges() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7531))
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice::<>c
class CORDL_TYPE UnityEngine__UIElements__UIR__UIRenderDevice____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UIR__UIRenderDevice____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__UIRenderDevice____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__UIRenderDevice____c(UnityEngine__UIElements__UIR__UIRenderDevice____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__UIRenderDevice____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__UIRenderDevice____c(UnityEngine__UIElements__UIR__UIRenderDevice____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__UIRenderDevice____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__UIRenderDevice____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__UIRenderDevice____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__UIRenderDevice____c& operator=(UnityEngine__UIElements__UIR__UIRenderDevice____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__UIRenderDevice____c& operator=(UnityEngine__UIElements__UIR__UIRenderDevice____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c value) ;

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c __get___9() ;

static System::Func_1<UnityEngine::UIElements::UIR::MeshHandle> __declspec(property(get=__get___9__53_0, put=__set___9__53_0))  __9__53_0;

static void __set___9__53_0(System::Func_1<UnityEngine::UIElements::UIR::MeshHandle> value) ;

static System::Func_1<UnityEngine::UIElements::UIR::MeshHandle> __get___9__53_0() ;

static System::Action_1<UnityEngine::UIElements::UIR::MeshHandle> __declspec(property(get=__get___9__53_1, put=__set___9__53_1))  __9__53_1;

static void __set___9__53_1(System::Action_1<UnityEngine::UIElements::UIR::MeshHandle> value) ;

static System::Action_1<UnityEngine::UIElements::UIR::MeshHandle> __get___9__53_1() ;


// Methods

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c New_ctor() ;

/// @brief Method .ctor addr 0x2c5c308 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__53_0 addr 0x2c5c310 size 0x58 virtual false final false
 UnityEngine::UIElements::UIR::MeshHandle __ctor_b__53_0() ;

/// @brief Method <.ctor>b__53_1 addr 0x2c5c368 size 0x4 virtual false final false
 void __ctor_b__53_1(UnityEngine::UIElements::UIR::MeshHandle mh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::UIRenderDevice
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7532))
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice
class CORDL_TYPE UIRenderDevice : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c;

using DrawStatistics = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics;

using EvaluationState = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState;

using DeviceToFree = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree;

using AllocToFree = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree;

using AllocToUpdate = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~UIRenderDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: " const&", def_value: None }]
constexpr UIRenderDevice(UIRenderDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: "&&", def_value: None }]
constexpr UIRenderDevice(UIRenderDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIRenderDevice(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIRenderDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIRenderDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIRenderDevice& operator=(UIRenderDevice&& o) noexcept = default;
  constexpr UIRenderDevice& operator=(UIRenderDevice const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_MockDevice, put=__set_m_MockDevice))  m_MockDevice;

constexpr void __set_m_MockDevice(bool value) ;

constexpr bool __get_m_MockDevice() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_DefaultStencilState, put=__set_m_DefaultStencilState))  m_DefaultStencilState;

constexpr void __set_m_DefaultStencilState(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_DefaultStencilState() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_VertexDecl, put=__set_m_VertexDecl))  m_VertexDecl;

constexpr void __set_m_VertexDecl(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_VertexDecl() const;

 UnityEngine::UIElements::UIR::Page __declspec(property(get=__get_m_FirstPage, put=__set_m_FirstPage))  m_FirstPage;

constexpr void __set_m_FirstPage(UnityEngine::UIElements::UIR::Page value) ;

constexpr UnityEngine::UIElements::UIR::Page __get_m_FirstPage() const;

 uint32_t __declspec(property(get=__get_m_NextPageVertexCount, put=__set_m_NextPageVertexCount))  m_NextPageVertexCount;

constexpr void __set_m_NextPageVertexCount(uint32_t value) ;

constexpr uint32_t __get_m_NextPageVertexCount() const;

 uint32_t __declspec(property(get=__get_m_LargeMeshVertexCount, put=__set_m_LargeMeshVertexCount))  m_LargeMeshVertexCount;

constexpr void __set_m_LargeMeshVertexCount(uint32_t value) ;

constexpr uint32_t __get_m_LargeMeshVertexCount() const;

 float_t __declspec(property(get=__get_m_IndexToVertexCountRatio, put=__set_m_IndexToVertexCountRatio))  m_IndexToVertexCountRatio;

constexpr void __set_m_IndexToVertexCountRatio(float_t value) ;

constexpr float_t __get_m_IndexToVertexCountRatio() const;

 System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>> __declspec(property(get=__get_m_DeferredFrees, put=__set_m_DeferredFrees))  m_DeferredFrees;

constexpr void __set_m_DeferredFrees(System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>> value) ;

constexpr System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>> __get_m_DeferredFrees() const;

 System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>> __declspec(property(get=__get_m_Updates, put=__set_m_Updates))  m_Updates;

constexpr void __set_m_Updates(System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>> value) ;

constexpr System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>> __get_m_Updates() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_Fences, put=__set_m_Fences))  m_Fences;

constexpr void __set_m_Fences(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_Fences() const;

 UnityEngine::MaterialPropertyBlock __declspec(property(get=__get_m_StandardMatProps, put=__set_m_StandardMatProps))  m_StandardMatProps;

constexpr void __set_m_StandardMatProps(UnityEngine::MaterialPropertyBlock value) ;

constexpr UnityEngine::MaterialPropertyBlock __get_m_StandardMatProps() const;

 uint32_t __declspec(property(get=__get_m_FrameIndex, put=__set_m_FrameIndex))  m_FrameIndex;

constexpr void __set_m_FrameIndex(uint32_t value) ;

constexpr uint32_t __get_m_FrameIndex() const;

 uint32_t __declspec(property(get=__get_m_NextUpdateID, put=__set_m_NextUpdateID))  m_NextUpdateID;

constexpr void __set_m_NextUpdateID(uint32_t value) ;

constexpr uint32_t __get_m_NextUpdateID() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics __declspec(property(get=__get_m_DrawStats, put=__set_m_DrawStats))  m_DrawStats;

constexpr void __set_m_DrawStats(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics __get_m_DrawStats() const;

 UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle> __declspec(property(get=__get_m_MeshHandles, put=__set_m_MeshHandles))  m_MeshHandles;

constexpr void __set_m_MeshHandles(UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle> value) ;

constexpr UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle> __get_m_MeshHandles() const;

 UnityEngine::UIElements::UIR::DrawParams __declspec(property(get=__get_m_DrawParams, put=__set_m_DrawParams))  m_DrawParams;

constexpr void __set_m_DrawParams(UnityEngine::UIElements::UIR::DrawParams value) ;

constexpr UnityEngine::UIElements::UIR::DrawParams __get_m_DrawParams() const;

 UnityEngine::UIElements::UIR::TextureSlotManager __declspec(property(get=__get_m_TextureSlotManager, put=__set_m_TextureSlotManager))  m_TextureSlotManager;

constexpr void __set_m_TextureSlotManager(UnityEngine::UIElements::UIR::TextureSlotManager value) ;

constexpr UnityEngine::UIElements::UIR::TextureSlotManager __get_m_TextureSlotManager() const;

static System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __declspec(property(get=__get_m_DeviceFreeQueue, put=__set_m_DeviceFreeQueue))  m_DeviceFreeQueue;

static void __set_m_DeviceFreeQueue(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value) ;

static System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> __get_m_DeviceFreeQueue() ;

static int32_t __declspec(property(get=__get_m_ActiveDeviceCount, put=__set_m_ActiveDeviceCount))  m_ActiveDeviceCount;

static void __set_m_ActiveDeviceCount(int32_t value) ;

static int32_t __get_m_ActiveDeviceCount() ;

static bool __declspec(property(get=__get_m_SubscribedToNotifications, put=__set_m_SubscribedToNotifications))  m_SubscribedToNotifications;

static void __set_m_SubscribedToNotifications(bool value) ;

static bool __get_m_SubscribedToNotifications() ;

static bool __declspec(property(get=__get_m_SynchronousFree, put=__set_m_SynchronousFree))  m_SynchronousFree;

static void __set_m_SynchronousFree(bool value) ;

static bool __get_m_SynchronousFree() ;

static int32_t __declspec(property(get=__get_s_FontTexPropID, put=__set_s_FontTexPropID))  s_FontTexPropID;

static void __set_s_FontTexPropID(int32_t value) ;

static int32_t __get_s_FontTexPropID() ;

static int32_t __declspec(property(get=__get_s_FontTexSDFScaleID, put=__set_s_FontTexSDFScaleID))  s_FontTexSDFScaleID;

static void __set_s_FontTexSDFScaleID(int32_t value) ;

static int32_t __get_s_FontTexSDFScaleID() ;

static int32_t __declspec(property(get=__get_s_GradientSettingsTexID, put=__set_s_GradientSettingsTexID))  s_GradientSettingsTexID;

static void __set_s_GradientSettingsTexID(int32_t value) ;

static int32_t __get_s_GradientSettingsTexID() ;

static int32_t __declspec(property(get=__get_s_ShaderInfoTexID, put=__set_s_ShaderInfoTexID))  s_ShaderInfoTexID;

static void __set_s_ShaderInfoTexID(int32_t value) ;

static int32_t __get_s_ShaderInfoTexID() ;

static int32_t __declspec(property(get=__get_s_TransformsPropID, put=__set_s_TransformsPropID))  s_TransformsPropID;

static void __set_s_TransformsPropID(int32_t value) ;

static int32_t __get_s_TransformsPropID() ;

static int32_t __declspec(property(get=__get_s_ClipRectsPropID, put=__set_s_ClipRectsPropID))  s_ClipRectsPropID;

static void __set_s_ClipRectsPropID(int32_t value) ;

static int32_t __get_s_ClipRectsPropID() ;

static int32_t __declspec(property(get=__get_s_ClipSpaceParamsID, put=__set_s_ClipSpaceParamsID))  s_ClipSpaceParamsID;

static void __set_s_ClipSpaceParamsID(int32_t value) ;

static int32_t __get_s_ClipSpaceParamsID() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerAllocate, put=__set_s_MarkerAllocate))  s_MarkerAllocate;

static void __set_s_MarkerAllocate(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerAllocate() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerFree, put=__set_s_MarkerFree))  s_MarkerFree;

static void __set_s_MarkerFree(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerFree() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerAdvanceFrame, put=__set_s_MarkerAdvanceFrame))  s_MarkerAdvanceFrame;

static void __set_s_MarkerAdvanceFrame(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerAdvanceFrame() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerFence, put=__set_s_MarkerFence))  s_MarkerFence;

static void __set_s_MarkerFence(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerFence() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerBeforeDraw, put=__set_s_MarkerBeforeDraw))  s_MarkerBeforeDraw;

static void __set_s_MarkerBeforeDraw(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerBeforeDraw() ;

static System::Nullable_1<bool> __declspec(property(get=__get_s_VertexTexturingIsAvailable, put=__set_s_VertexTexturingIsAvailable))  s_VertexTexturingIsAvailable;

static void __set_s_VertexTexturingIsAvailable(System::Nullable_1<bool> value) ;

static System::Nullable_1<bool> __get_s_VertexTexturingIsAvailable() ;

static System::Nullable_1<bool> __declspec(property(get=__get_s_ShaderModelIs35, put=__set_s_ShaderModelIs35))  s_ShaderModelIs35;

static void __set_s_ShaderModelIs35(System::Nullable_1<bool> value) ;

static System::Nullable_1<bool> __get_s_ShaderModelIs35() ;

 uint32_t __declspec(property(get=__get__maxVerticesPerPage_k__BackingField, put=__set__maxVerticesPerPage_k__BackingField))  _maxVerticesPerPage_k__BackingField;

constexpr void __set__maxVerticesPerPage_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__maxVerticesPerPage_k__BackingField() const;

 bool __declspec(property(get=__get__breakBatches_k__BackingField, put=__set__breakBatches_k__BackingField))  _breakBatches_k__BackingField;

constexpr void __set__breakBatches_k__BackingField(bool value) ;

constexpr bool __get__breakBatches_k__BackingField() const;

static UnityEngine::Texture2D __declspec(property(get=__get_s_DefaultShaderInfoTexFloat, put=__set_s_DefaultShaderInfoTexFloat))  s_DefaultShaderInfoTexFloat;

static void __set_s_DefaultShaderInfoTexFloat(UnityEngine::Texture2D value) ;

static UnityEngine::Texture2D __get_s_DefaultShaderInfoTexFloat() ;

static UnityEngine::Texture2D __declspec(property(get=__get_s_DefaultShaderInfoTexARGB8, put=__set_s_DefaultShaderInfoTexARGB8))  s_DefaultShaderInfoTexARGB8;

static void __set_s_DefaultShaderInfoTexARGB8(UnityEngine::Texture2D value) ;

static UnityEngine::Texture2D __get_s_DefaultShaderInfoTexARGB8() ;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_maxVerticesPerPage))  maxVerticesPerPage;

 bool __declspec(property(get=get_breakBatches, put=set_breakBatches))  breakBatches;

static UnityEngine::Texture2D __declspec(property(get=get_defaultShaderInfoTexFloat))  defaultShaderInfoTexFloat;

static UnityEngine::Texture2D __declspec(property(get=get_defaultShaderInfoTexARGB8))  defaultShaderInfoTexARGB8;

static bool __declspec(property(get=get_vertexTexturingIsAvailable))  vertexTexturingIsAvailable;

static bool __declspec(property(get=get_shaderModelIs35))  shaderModelIs35;

 bool __declspec(property(get=get_fullyCreated))  fullyCreated;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

/// @brief Method get_maxVerticesPerPage addr 0x2c55090 size 0x8 virtual false final false
 uint32_t get_maxVerticesPerPage() ;

/// @brief Method get_breakBatches addr 0x2c55098 size 0x8 virtual false final false
 bool get_breakBatches() ;

/// @brief Method set_breakBatches addr 0x2c550a0 size 0xc virtual false final false
 void set_breakBatches(bool value) ;

static UnityEngine::UIElements::UIR::UIRenderDevice New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity) ;

/// @brief Method .ctor addr 0x2c55464 size 0x8 virtual false final false
 void _ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity) ;

static UnityEngine::UIElements::UIR::UIRenderDevice New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice) ;

/// @brief Method .ctor addr 0x2c5546c size 0x5b0 virtual false final false
 void _ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice) ;

/// @brief Method get_defaultShaderInfoTexFloat addr 0x2c55b74 size 0x394 virtual false final false
static UnityEngine::Texture2D get_defaultShaderInfoTexFloat() ;

/// @brief Method get_defaultShaderInfoTexARGB8 addr 0x2c55f08 size 0x2cc virtual false final false
static UnityEngine::Texture2D get_defaultShaderInfoTexARGB8() ;

/// @brief Method get_vertexTexturingIsAvailable addr 0x2c561d4 size 0x1e4 virtual false final false
static bool get_vertexTexturingIsAvailable() ;

/// @brief Method get_shaderModelIs35 addr 0x2c563b8 size 0x1e4 virtual false final false
static bool get_shaderModelIs35() ;

/// @brief Method InitVertexDeclaration addr 0x2c5659c size 0x268 virtual false final false
 void InitVertexDeclaration() ;

/// @brief Method CompleteCreation addr 0x2c56804 size 0x1a4 virtual false final false
 void CompleteCreation() ;

/// @brief Method get_fullyCreated addr 0x2c569a8 size 0x10 virtual false final false
 bool get_fullyCreated() ;

/// @brief Method get_disposed addr 0x2c569b8 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2c569c0 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2c569cc size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2c56a38 size 0x14c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Allocate addr 0x2c56f4c size 0xc0 virtual false final false
 UnityEngine::UIElements::UIR::MeshHandle Allocate(uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset) ;

/// @brief Method Update addr 0x2c57640 size 0x1c8 virtual false final false
 void Update(UnityEngine::UIElements::UIR::MeshHandle mesh, uint32_t vertexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData) ;

/// @brief Method Update addr 0x2c57f0c size 0x188 virtual false final false
 void Update(UnityEngine::UIElements::UIR::MeshHandle mesh, uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset) ;

/// @brief Method TryAllocFromPage addr 0x2c58094 size 0x104 virtual false final false
 bool TryAllocFromPage(UnityEngine::UIElements::UIR::Page page, uint32_t vertexCount, uint32_t indexCount, ByRef<UnityEngine::UIElements::UIR::Alloc> va, ByRef<UnityEngine::UIElements::UIR::Alloc> ia, bool shortLived) ;

/// @brief Method Allocate addr 0x2c5700c size 0x634 virtual false final false
 void Allocate(UnityEngine::UIElements::UIR::MeshHandle meshHandle, uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, bool shortLived) ;

/// @brief Method UpdateAfterGPUUsedData addr 0x2c57808 size 0x704 virtual false final false
 void UpdateAfterGPUUsedData(UnityEngine::UIElements::UIR::MeshHandle mesh, uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate> allocToUpdate, bool copyBackIndices) ;

/// @brief Method Free addr 0x2c584ec size 0x84c virtual false final false
 void Free(UnityEngine::UIElements::UIR::MeshHandle mesh) ;

/// @brief Method GetClipSpaceParams addr 0x2c58d38 size 0xc8 virtual false final false
static UnityEngine::Vector4 GetClipSpaceParams() ;

/// @brief Method OnFrameRenderingBegin addr 0x2c58e00 size 0xa4 virtual false final false
 void OnFrameRenderingBegin() ;

/// @brief Method PtrToSlice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static Unity::Collections::NativeSlice_1<T> PtrToSlice(void* p, int32_t count) ;

/// @brief Method ApplyDrawCommandState addr 0x2c59858 size 0x224 virtual false final false
 void ApplyDrawCommandState(UnityEngine::UIElements::UIR::RenderChainCommand cmd, int32_t textureSlot, UnityEngine::Material newMat, bool newMatDiffers, bool newFontDiffers, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState> st) ;

/// @brief Method ApplyBatchState addr 0x2c59a7c size 0x184 virtual false final false
 void ApplyBatchState(ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState> st, bool allowMaterialChange) ;

/// @brief Method EvaluateChain addr 0x2c59c00 size 0x1118 virtual false final false
 void EvaluateChain(UnityEngine::UIElements::UIR::RenderChainCommand head, UnityEngine::Material initialMat, UnityEngine::Material defaultMat, UnityEngine::Texture gradientSettings, UnityEngine::Texture shaderInfo, float_t pixelsPerPoint, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> transforms, Unity::Collections::NativeSlice_1<UnityEngine::Vector4> clipRects, UnityEngine::MaterialPropertyBlock stateMatProps, bool allowMaterialChange, ByRef<System::Exception> immediateException) ;

/// @brief Method UpdateFenceValue addr 0x2c5bce8 size 0xcc virtual false final false
 void UpdateFenceValue() ;

/// @brief Method KickRanges addr 0x2c5aee4 size 0x248 virtual false final false
 void KickRanges(void* ranges, ByRef<int32_t> rangesReady, ByRef<int32_t> rangesStart, int32_t rangesCount, UnityEngine::UIElements::UIR::Page curPage) ;

/// @brief Method DrawRanges addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename I,typename T>
 void DrawRanges(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<I> ib, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<T> vb, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> ranges) ;

/// @brief Method WaitOnCpuFence addr 0x2c5bdb4 size 0x88 virtual false final false
 void WaitOnCpuFence(uint32_t fence) ;

/// @brief Method AdvanceFrame addr 0x2c58ea4 size 0x9b4 virtual false final false
 void AdvanceFrame() ;

/// @brief Method PruneUnusedPages addr 0x2c5be3c size 0xdc virtual false final false
 void PruneUnusedPages() ;

/// @brief Method PrepareForGfxDeviceRecreate addr 0x2c5bf84 size 0x188 virtual false final false
static void PrepareForGfxDeviceRecreate() ;

/// @brief Method WrapUpGfxDeviceRecreate addr 0x2c5c10c size 0x60 virtual false final false
static void WrapUpGfxDeviceRecreate() ;

/// @brief Method FlushAllPendingDeviceDisposes addr 0x2c5c16c size 0x78 virtual false final false
static void FlushAllPendingDeviceDisposes() ;

/// @brief Method GatherDrawStatistics addr 0x2c5c1e4 size 0x18 virtual false final false
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics GatherDrawStatistics() ;

/// @brief Method ProcessDeviceFreeQueue addr 0x2c56bb0 size 0x39c virtual false final false
static void ProcessDeviceFreeQueue() ;

/// @brief Method OnEngineUpdateGlobal addr 0x2c5c1fc size 0x4c virtual false final false
static void OnEngineUpdateGlobal() ;

/// @brief Method OnFlushPendingResources addr 0x2c5c248 size 0x5c virtual false final false
static void OnFlushPendingResources() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::UIRenderDevice);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UIRenderDevice, "UnityEngine.UIElements.UIR", "UIRenderDevice");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c, "UnityEngine.UIElements.UIR", "UIRenderDevice/<>c");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToFree");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/DeviceToFree");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics, "UnityEngine.UIElements.UIR", "UIRenderDevice/DrawStatistics");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState, "UnityEngine.UIElements.UIR", "UIRenderDevice/EvaluationState");
