#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class UnityEngine__UIElements__UIR__Utility__GPUBuffer_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::UIElements::UIR {
class GPUBufferAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__Utility__GPUBufferType;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class UnityEngine__UIElements__UIR__Page__DataSet_1;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
namespace UnityEngine::UIElements::UIR {
template<>
class UnityEngine__UIElements__UIR__Page__DataSet_1<UnityEngine::UIElements::Vertex>;
}
namespace UnityEngine::UIElements::UIR {
template<>
class UnityEngine__UIElements__UIR__Page__DataSet_1<uint16_t>;
}
// Type: ::DataSet`1
// Type: UnityEngine.UIElements.UIR::Page
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7539))
// CS Name: UnityEngine.UIElements.UIR.Page
class CORDL_TYPE Page : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using DataSet_1 = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1<T>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Page() = default;

// Ctor Parameters [CppParam { name: "", ty: "Page", modifiers: " const&", def_value: None }]
constexpr Page(Page const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Page", modifiers: "&&", def_value: None }]
constexpr Page(Page&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Page(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Page& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Page& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Page& operator=(Page&& o) noexcept = default;
  constexpr Page& operator=(Page const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

constexpr void __set_vertices(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1<UnityEngine::UIElements::Vertex> value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1<UnityEngine::UIElements::Vertex> __get_vertices() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1<uint16_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1<uint16_t> value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1<uint16_t> __get_indices() const;

 UnityEngine::UIElements::UIR::Page __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(UnityEngine::UIElements::UIR::Page value) ;

constexpr UnityEngine::UIElements::UIR::Page __get_next() const;

 int32_t __declspec(property(get=__get_framesEmpty, put=__set_framesEmpty))  framesEmpty;

constexpr void __set_framesEmpty(int32_t value) ;

constexpr int32_t __get_framesEmpty() const;


// Properties

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

// Ctor Parameters [CppParam { name: "vertexMaxCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "indexMaxCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxQueuedFrameCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "mockPage", ty: "bool", modifiers: "", def_value: None }]
explicit Page(uint32_t vertexMaxCount, uint32_t indexMaxCount, uint32_t maxQueuedFrameCount, bool mockPage) ;

/// @brief Method .ctor addr 0x2c58358 size 0x14c virtual false final false
 void _ctor(uint32_t vertexMaxCount, uint32_t indexMaxCount, uint32_t maxQueuedFrameCount, bool mockPage) ;

/// @brief Method get_disposed addr 0x2c5c850 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2c5c858 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2c5bf18 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2c5c864 size 0x90 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_isEmpty addr 0x2c584a4 size 0x48 virtual false final false
 bool get_isEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::DataSet`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7538))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7538), inst: 728 })
// CS Name: UnityEngine.UIElements.UIR.Page::DataSet`1
class CORDL_TYPE UnityEngine__UIElements__UIR__Page__DataSet_1<uint16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~UnityEngine__UIElements__UIR__Page__DataSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Page__DataSet_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Page__DataSet_1(UnityEngine__UIElements__UIR__Page__DataSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Page__DataSet_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Page__DataSet_1(UnityEngine__UIElements__UIR__Page__DataSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Page__DataSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(UnityEngine__UIElements__UIR__Page__DataSet_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(UnityEngine__UIElements__UIR__Page__DataSet_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t> __declspec(property(get=__get_gpuData, put=__set_gpuData))  gpuData;

constexpr void __set_gpuData(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t> value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<uint16_t> __get_gpuData() const;

 Unity::Collections::NativeArray_1<uint16_t> __declspec(property(get=__get_cpuData, put=__set_cpuData))  cpuData;

constexpr void __set_cpuData(Unity::Collections::NativeArray_1<uint16_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint16_t> __get_cpuData() const;

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __declspec(property(get=__get_updateRanges, put=__set_updateRanges))  updateRanges;

constexpr void __set_updateRanges(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __get_updateRanges() const;

 UnityEngine::UIElements::UIR::GPUBufferAllocator __declspec(property(get=__get_allocator, put=__set_allocator))  allocator;

constexpr void __set_allocator(UnityEngine::UIElements::UIR::GPUBufferAllocator value) ;

constexpr UnityEngine::UIElements::UIR::GPUBufferAllocator __get_allocator() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangePoolSize, put=__set_m_UpdateRangePoolSize))  m_UpdateRangePoolSize;

constexpr void __set_m_UpdateRangePoolSize(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangePoolSize() const;

 uint32_t __declspec(property(get=__get_m_ElemStride, put=__set_m_ElemStride))  m_ElemStride;

constexpr void __set_m_ElemStride(uint32_t value) ;

constexpr uint32_t __get_m_ElemStride() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangeMin, put=__set_m_UpdateRangeMin))  m_UpdateRangeMin;

constexpr void __set_m_UpdateRangeMin(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangeMin() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangeMax, put=__set_m_UpdateRangeMax))  m_UpdateRangeMax;

constexpr void __set_m_UpdateRangeMax(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangeMax() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangesEnqueued, put=__set_m_UpdateRangesEnqueued))  m_UpdateRangesEnqueued;

constexpr void __set_m_UpdateRangesEnqueued(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangesEnqueued() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangesBatchStart, put=__set_m_UpdateRangesBatchStart))  m_UpdateRangesBatchStart;

constexpr void __set_m_UpdateRangesBatchStart(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangesBatchStart() const;

 bool __declspec(property(get=__get_m_UpdateRangesSaturated, put=__set_m_UpdateRangesSaturated))  m_UpdateRangesSaturated;

constexpr void __set_m_UpdateRangesSaturated(bool value) ;

constexpr bool __get_m_UpdateRangesSaturated() const;


// Properties

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

// Ctor Parameters [CppParam { name: "bufferType", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType", modifiers: "", def_value: None }, CppParam { name: "totalCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxQueuedFrameCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "updateRangePoolSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "mockBuffer", ty: "bool", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__UIR__Page__DataSet_1(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType bufferType, uint32_t totalCount, uint32_t maxQueuedFrameCount, uint32_t updateRangePoolSize, bool mockBuffer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType bufferType, uint32_t totalCount, uint32_t maxQueuedFrameCount, uint32_t updateRangePoolSize, bool mockBuffer) ;

/// @brief Method get_disposed addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method RegisterUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterUpdate(uint32_t start, uint32_t size) ;

/// @brief Method HasMappedBufferRange addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasMappedBufferRange() ;

/// @brief Method SendUpdates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendUpdates() ;

/// @brief Method SendFullRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendFullRange() ;

/// @brief Method SendPartialRanges addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendPartialRanges() ;

/// @brief Method ResetUpdateState addr 0x0 size 0xffffffffffffffff virtual false final false
 void ResetUpdateState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::DataSet`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7538))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7538), inst: 732 })
// CS Name: UnityEngine.UIElements.UIR.Page::DataSet`1
class CORDL_TYPE UnityEngine__UIElements__UIR__Page__DataSet_1<UnityEngine::UIElements::Vertex> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~UnityEngine__UIElements__UIR__Page__DataSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Page__DataSet_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Page__DataSet_1(UnityEngine__UIElements__UIR__Page__DataSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Page__DataSet_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Page__DataSet_1(UnityEngine__UIElements__UIR__Page__DataSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Page__DataSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(UnityEngine__UIElements__UIR__Page__DataSet_1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__Page__DataSet_1& operator=(UnityEngine__UIElements__UIR__Page__DataSet_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_gpuData, put=__set_gpuData))  gpuData;

constexpr void __set_gpuData(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<UnityEngine::UIElements::Vertex> value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<UnityEngine::UIElements::Vertex> __get_gpuData() const;

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_cpuData, put=__set_cpuData))  cpuData;

constexpr void __set_cpuData(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> __get_cpuData() const;

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __declspec(property(get=__get_updateRanges, put=__set_updateRanges))  updateRanges;

constexpr void __set_updateRanges(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __get_updateRanges() const;

 UnityEngine::UIElements::UIR::GPUBufferAllocator __declspec(property(get=__get_allocator, put=__set_allocator))  allocator;

constexpr void __set_allocator(UnityEngine::UIElements::UIR::GPUBufferAllocator value) ;

constexpr UnityEngine::UIElements::UIR::GPUBufferAllocator __get_allocator() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangePoolSize, put=__set_m_UpdateRangePoolSize))  m_UpdateRangePoolSize;

constexpr void __set_m_UpdateRangePoolSize(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangePoolSize() const;

 uint32_t __declspec(property(get=__get_m_ElemStride, put=__set_m_ElemStride))  m_ElemStride;

constexpr void __set_m_ElemStride(uint32_t value) ;

constexpr uint32_t __get_m_ElemStride() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangeMin, put=__set_m_UpdateRangeMin))  m_UpdateRangeMin;

constexpr void __set_m_UpdateRangeMin(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangeMin() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangeMax, put=__set_m_UpdateRangeMax))  m_UpdateRangeMax;

constexpr void __set_m_UpdateRangeMax(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangeMax() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangesEnqueued, put=__set_m_UpdateRangesEnqueued))  m_UpdateRangesEnqueued;

constexpr void __set_m_UpdateRangesEnqueued(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangesEnqueued() const;

 uint32_t __declspec(property(get=__get_m_UpdateRangesBatchStart, put=__set_m_UpdateRangesBatchStart))  m_UpdateRangesBatchStart;

constexpr void __set_m_UpdateRangesBatchStart(uint32_t value) ;

constexpr uint32_t __get_m_UpdateRangesBatchStart() const;

 bool __declspec(property(get=__get_m_UpdateRangesSaturated, put=__set_m_UpdateRangesSaturated))  m_UpdateRangesSaturated;

constexpr void __set_m_UpdateRangesSaturated(bool value) ;

constexpr bool __get_m_UpdateRangesSaturated() const;


// Properties

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

// Ctor Parameters [CppParam { name: "bufferType", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType", modifiers: "", def_value: None }, CppParam { name: "totalCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxQueuedFrameCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "updateRangePoolSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "mockBuffer", ty: "bool", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__UIR__Page__DataSet_1(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType bufferType, uint32_t totalCount, uint32_t maxQueuedFrameCount, uint32_t updateRangePoolSize, bool mockBuffer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBufferType bufferType, uint32_t totalCount, uint32_t maxQueuedFrameCount, uint32_t updateRangePoolSize, bool mockBuffer) ;

/// @brief Method get_disposed addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method RegisterUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void RegisterUpdate(uint32_t start, uint32_t size) ;

/// @brief Method HasMappedBufferRange addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasMappedBufferRange() ;

/// @brief Method SendUpdates addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendUpdates() ;

/// @brief Method SendFullRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendFullRange() ;

/// @brief Method SendPartialRanges addr 0x0 size 0xffffffffffffffff virtual false final false
 void SendPartialRanges() ;

/// @brief Method ResetUpdateState addr 0x0 size 0xffffffffffffffff virtual false final false
 void ResetUpdateState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Page__DataSet_1, "UnityEngine.UIElements.UIR", "Page/DataSet`1");
NEED_NO_BOX(UnityEngine::UIElements::UIR::Page);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Page, "UnityEngine.UIElements.UIR", "Page");
