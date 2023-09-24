#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIRAtlasAllocator__AreaNode;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIRAtlasAllocator__Row;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRAtlasAllocator;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIRAtlasAllocator__AreaNode;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UIRAtlasAllocator__Row;
}
// Type: ::Row
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7423))
// CS Name: UnityEngine.UIElements.UIRAtlasAllocator::Row
class CORDL_TYPE UnityEngine__UIElements__UIRAtlasAllocator__Row : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__UIElements__UIRAtlasAllocator__Row() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIRAtlasAllocator__Row", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIRAtlasAllocator__Row(UnityEngine__UIElements__UIRAtlasAllocator__Row const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIRAtlasAllocator__Row", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIRAtlasAllocator__Row(UnityEngine__UIElements__UIRAtlasAllocator__Row&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIRAtlasAllocator__Row(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIRAtlasAllocator__Row& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIRAtlasAllocator__Row& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIRAtlasAllocator__Row& operator=(UnityEngine__UIElements__UIRAtlasAllocator__Row&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIRAtlasAllocator__Row& operator=(UnityEngine__UIElements__UIRAtlasAllocator__Row const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row> value) ;

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row> __get_s_Pool() ;

 int32_t __declspec(property(get=__get__offsetX_k__BackingField, put=__set__offsetX_k__BackingField))  _offsetX_k__BackingField;

constexpr void __set__offsetX_k__BackingField(int32_t value) ;

constexpr int32_t __get__offsetX_k__BackingField() const;

 int32_t __declspec(property(get=__get__offsetY_k__BackingField, put=__set__offsetY_k__BackingField))  _offsetY_k__BackingField;

constexpr void __set__offsetY_k__BackingField(int32_t value) ;

constexpr int32_t __get__offsetY_k__BackingField() const;

 int32_t __declspec(property(get=__get__width_k__BackingField, put=__set__width_k__BackingField))  _width_k__BackingField;

constexpr void __set__width_k__BackingField(int32_t value) ;

constexpr int32_t __get__width_k__BackingField() const;

 int32_t __declspec(property(get=__get__height_k__BackingField, put=__set__height_k__BackingField))  _height_k__BackingField;

constexpr void __set__height_k__BackingField(int32_t value) ;

constexpr int32_t __get__height_k__BackingField() const;

 int32_t __declspec(property(get=__get_Cursor, put=__set_Cursor))  Cursor;

constexpr void __set_Cursor(int32_t value) ;

constexpr int32_t __get_Cursor() const;


// Properties

 int32_t __declspec(property(get=get_offsetX, put=set_offsetX))  offsetX;

 int32_t __declspec(property(get=get_offsetY, put=set_offsetY))  offsetY;

 int32_t __declspec(property(get=get_width, put=set_width))  width;

 int32_t __declspec(property(put=set_height))  height;


// Methods

/// @brief Method get_offsetX addr 0x2d000c8 size 0x8 virtual false final false
 int32_t get_offsetX() ;

/// @brief Method set_offsetX addr 0x2d000d0 size 0x8 virtual false final false
 void set_offsetX(int32_t value) ;

/// @brief Method get_offsetY addr 0x2d000d8 size 0x8 virtual false final false
 int32_t get_offsetY() ;

/// @brief Method set_offsetY addr 0x2d000e0 size 0x8 virtual false final false
 void set_offsetY(int32_t value) ;

/// @brief Method get_width addr 0x2d000e8 size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method set_width addr 0x2d000f0 size 0x8 virtual false final false
 void set_width(int32_t value) ;

/// @brief Method set_height addr 0x2d000f8 size 0x8 virtual false final false
 void set_height(int32_t value) ;

/// @brief Method Acquire addr 0x2cffed4 size 0xac virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row Acquire(int32_t offsetX, int32_t offsetY, int32_t width, int32_t height) ;

/// @brief Method Release addr 0x2cff32c size 0x90 virtual false final false
 void Release() ;

static UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row New_ctor() ;

/// @brief Method .ctor addr 0x2d00100 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::AreaNode
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7424))
// CS Name: UnityEngine.UIElements.UIRAtlasAllocator::AreaNode
class CORDL_TYPE UnityEngine__UIElements__UIRAtlasAllocator__AreaNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__UIRAtlasAllocator__AreaNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIRAtlasAllocator__AreaNode", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIRAtlasAllocator__AreaNode(UnityEngine__UIElements__UIRAtlasAllocator__AreaNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIRAtlasAllocator__AreaNode", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIRAtlasAllocator__AreaNode(UnityEngine__UIElements__UIRAtlasAllocator__AreaNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIRAtlasAllocator__AreaNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIRAtlasAllocator__AreaNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIRAtlasAllocator__AreaNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIRAtlasAllocator__AreaNode& operator=(UnityEngine__UIElements__UIRAtlasAllocator__AreaNode&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIRAtlasAllocator__AreaNode& operator=(UnityEngine__UIElements__UIRAtlasAllocator__AreaNode const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode> __declspec(property(get=__get_s_Pool, put=__set_s_Pool))  s_Pool;

static void __set_s_Pool(UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode> value) ;

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode> __get_s_Pool() ;

 UnityEngine::RectInt __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(UnityEngine::RectInt value) ;

constexpr UnityEngine::RectInt __get_rect() const;

 UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode __declspec(property(get=__get_previous, put=__set_previous))  previous;

constexpr void __set_previous(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode __get_previous() const;

 UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode __get_next() const;


// Methods

/// @brief Method Acquire addr 0x2cff738 size 0x98 virtual false final false
static UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode Acquire(UnityEngine::RectInt rect) ;

/// @brief Method Release addr 0x2cff3bc size 0x80 virtual false final false
 void Release() ;

/// @brief Method RemoveFromChain addr 0x2cfff80 size 0x28 virtual false final false
 void RemoveFromChain() ;

/// @brief Method AddAfter addr 0x2cfffa8 size 0xac virtual false final false
 void AddAfter(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode previous) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode New_ctor() ;

/// @brief Method .ctor addr 0x2d00198 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UIRAtlasAllocator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7425))
// CS Name: UnityEngine.UIElements.UIRAtlasAllocator
class CORDL_TYPE UIRAtlasAllocator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AreaNode = UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode;

using Row = UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~UIRAtlasAllocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRAtlasAllocator", modifiers: " const&", def_value: None }]
constexpr UIRAtlasAllocator(UIRAtlasAllocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRAtlasAllocator", modifiers: "&&", def_value: None }]
constexpr UIRAtlasAllocator(UIRAtlasAllocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIRAtlasAllocator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIRAtlasAllocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIRAtlasAllocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIRAtlasAllocator& operator=(UIRAtlasAllocator&& o) noexcept = default;
  constexpr UIRAtlasAllocator& operator=(UIRAtlasAllocator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__maxAtlasSize_k__BackingField, put=__set__maxAtlasSize_k__BackingField))  _maxAtlasSize_k__BackingField;

constexpr void __set__maxAtlasSize_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxAtlasSize_k__BackingField() const;

 int32_t __declspec(property(get=__get__maxImageWidth_k__BackingField, put=__set__maxImageWidth_k__BackingField))  _maxImageWidth_k__BackingField;

constexpr void __set__maxImageWidth_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxImageWidth_k__BackingField() const;

 int32_t __declspec(property(get=__get__maxImageHeight_k__BackingField, put=__set__maxImageHeight_k__BackingField))  _maxImageHeight_k__BackingField;

constexpr void __set__maxImageHeight_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxImageHeight_k__BackingField() const;

 int32_t __declspec(property(get=__get__virtualWidth_k__BackingField, put=__set__virtualWidth_k__BackingField))  _virtualWidth_k__BackingField;

constexpr void __set__virtualWidth_k__BackingField(int32_t value) ;

constexpr int32_t __get__virtualWidth_k__BackingField() const;

 int32_t __declspec(property(get=__get__virtualHeight_k__BackingField, put=__set__virtualHeight_k__BackingField))  _virtualHeight_k__BackingField;

constexpr void __set__virtualHeight_k__BackingField(int32_t value) ;

constexpr int32_t __get__virtualHeight_k__BackingField() const;

 int32_t __declspec(property(get=__get__physicalWidth_k__BackingField, put=__set__physicalWidth_k__BackingField))  _physicalWidth_k__BackingField;

constexpr void __set__physicalWidth_k__BackingField(int32_t value) ;

constexpr int32_t __get__physicalWidth_k__BackingField() const;

 int32_t __declspec(property(get=__get__physicalHeight_k__BackingField, put=__set__physicalHeight_k__BackingField))  _physicalHeight_k__BackingField;

constexpr void __set__physicalHeight_k__BackingField(int32_t value) ;

constexpr int32_t __get__physicalHeight_k__BackingField() const;

 UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode __declspec(property(get=__get_m_FirstUnpartitionedArea, put=__set_m_FirstUnpartitionedArea))  m_FirstUnpartitionedArea;

constexpr void __set_m_FirstUnpartitionedArea(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode __get_m_FirstUnpartitionedArea() const;

 ::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row> __declspec(property(get=__get_m_OpenRows, put=__set_m_OpenRows))  m_OpenRows;

constexpr void __set_m_OpenRows(::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row> __get_m_OpenRows() const;

 int32_t __declspec(property(get=__get_m_1SidePadding, put=__set_m_1SidePadding))  m_1SidePadding;

constexpr void __set_m_1SidePadding(int32_t value) ;

constexpr int32_t __get_m_1SidePadding() const;

 int32_t __declspec(property(get=__get_m_2SidePadding, put=__set_m_2SidePadding))  m_2SidePadding;

constexpr void __set_m_2SidePadding(int32_t value) ;

constexpr int32_t __get_m_2SidePadding() const;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerTryAllocate, put=__set_s_MarkerTryAllocate))  s_MarkerTryAllocate;

static void __set_s_MarkerTryAllocate(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerTryAllocate() ;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_maxAtlasSize))  maxAtlasSize;

 int32_t __declspec(property(get=get_maxImageWidth))  maxImageWidth;

 int32_t __declspec(property(get=get_maxImageHeight))  maxImageHeight;

 int32_t __declspec(property(get=get_virtualWidth, put=set_virtualWidth))  virtualWidth;

 int32_t __declspec(property(get=get_virtualHeight, put=set_virtualHeight))  virtualHeight;

 int32_t __declspec(property(get=get_physicalWidth, put=set_physicalWidth))  physicalWidth;

 int32_t __declspec(property(get=get_physicalHeight, put=set_physicalHeight))  physicalHeight;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

/// @brief Method get_maxAtlasSize addr 0x2cff1c4 size 0x8 virtual false final false
 int32_t get_maxAtlasSize() ;

/// @brief Method get_maxImageWidth addr 0x2cff1cc size 0x8 virtual false final false
 int32_t get_maxImageWidth() ;

/// @brief Method get_maxImageHeight addr 0x2cff1d4 size 0x8 virtual false final false
 int32_t get_maxImageHeight() ;

/// @brief Method get_virtualWidth addr 0x2cff1dc size 0x8 virtual false final false
 int32_t get_virtualWidth() ;

/// @brief Method set_virtualWidth addr 0x2cff1e4 size 0x8 virtual false final false
 void set_virtualWidth(int32_t value) ;

/// @brief Method get_virtualHeight addr 0x2cff1ec size 0x8 virtual false final false
 int32_t get_virtualHeight() ;

/// @brief Method set_virtualHeight addr 0x2cff1f4 size 0x8 virtual false final false
 void set_virtualHeight(int32_t value) ;

/// @brief Method get_physicalWidth addr 0x2cff1fc size 0x8 virtual false final false
 int32_t get_physicalWidth() ;

/// @brief Method set_physicalWidth addr 0x2cff204 size 0x8 virtual false final false
 void set_physicalWidth(int32_t value) ;

/// @brief Method get_physicalHeight addr 0x2cff20c size 0x8 virtual false final false
 int32_t get_physicalHeight() ;

/// @brief Method set_physicalHeight addr 0x2cff214 size 0x8 virtual false final false
 void set_physicalHeight(int32_t value) ;

/// @brief Method get_disposed addr 0x2cff21c size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2cff224 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2cff230 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2cff29c size 0x90 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method GetLog2OfNextPower addr 0x2cff43c size 0x130 virtual false final false
static int32_t GetLog2OfNextPower(int32_t n) ;

static UnityEngine::UIElements::UIRAtlasAllocator New_ctor(int32_t initialAtlasSize, int32_t maxAtlasSize, int32_t sidePadding) ;

/// @brief Method .ctor addr 0x2cff56c size 0x1cc virtual false final false
 void _ctor(int32_t initialAtlasSize, int32_t maxAtlasSize, int32_t sidePadding) ;

/// @brief Method TryAllocate addr 0x2cff8dc size 0x3e0 virtual false final false
 bool TryAllocate(int32_t width, int32_t height, ByRef<UnityEngine::RectInt> location) ;

/// @brief Method TryPartitionArea addr 0x2cffcbc size 0x218 virtual false final false
 bool TryPartitionArea(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode areaNode, int32_t rowIndex, int32_t rowHeight, int32_t minWidth) ;

/// @brief Method BuildAreas addr 0x2cff7d0 size 0x10c virtual false final false
 void BuildAreas() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIRAtlasAllocator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIRAtlasAllocator, "UnityEngine.UIElements", "UIRAtlasAllocator");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__AreaNode, "UnityEngine.UIElements", "UIRAtlasAllocator/AreaNode");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UIRAtlasAllocator__Row, "UnityEngine.UIElements", "UIRAtlasAllocator/Row");
