#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2Int;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Allocator2D;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__Allocator2D__Area;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__Allocator2D__Row;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__Allocator2D__Alloc2D;
}
// Type: ::Area
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7511))
// CS Name: UnityEngine.UIElements.UIR.Allocator2D::Area
class CORDL_TYPE UnityEngine__UIElements__UIR__Allocator2D__Area : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__UIElements__UIR__Allocator2D__Area() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Allocator2D__Area", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Allocator2D__Area(UnityEngine__UIElements__UIR__Allocator2D__Area const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Allocator2D__Area", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Allocator2D__Area(UnityEngine__UIElements__UIR__Allocator2D__Area&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Allocator2D__Area(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__Allocator2D__Area& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Allocator2D__Area& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Allocator2D__Area& operator=(UnityEngine__UIElements__UIR__Allocator2D__Area&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__Allocator2D__Area& operator=(UnityEngine__UIElements__UIR__Allocator2D__Area const& o) noexcept = default;
                


// Fields

 UnityEngine::RectInt __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(UnityEngine::RectInt value) ;

constexpr UnityEngine::RectInt __get_rect() const;

 UnityEngine::UIElements::UIR::BestFitAllocator __declspec(property(get=__get_allocator, put=__set_allocator))  allocator;

constexpr void __set_allocator(UnityEngine::UIElements::UIR::BestFitAllocator value) ;

constexpr UnityEngine::UIElements::UIR::BestFitAllocator __get_allocator() const;


// Methods

// Ctor Parameters [CppParam { name: "rect", ty: "UnityEngine::RectInt", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__UIR__Allocator2D__Area(UnityEngine::RectInt rect) ;

/// @brief Method .ctor addr 0x2c53954 size 0x94 virtual false final false
 void _ctor(UnityEngine::RectInt rect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::Row
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 3838 }), TypeDefinitionIndex(TypeDefinitionIndex(7499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7512))
// CS Name: UnityEngine.UIElements.UIR.Allocator2D::Row
class CORDL_TYPE UnityEngine__UIElements__UIR__Allocator2D__Row : public UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~UnityEngine__UIElements__UIR__Allocator2D__Row() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Allocator2D__Row", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Allocator2D__Row(UnityEngine__UIElements__UIR__Allocator2D__Row const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__Allocator2D__Row", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Allocator2D__Row(UnityEngine__UIElements__UIR__Allocator2D__Row&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Allocator2D__Row(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row>(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__Allocator2D__Row& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Allocator2D__Row& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__Allocator2D__Row& operator=(UnityEngine__UIElements__UIR__Allocator2D__Row&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__Allocator2D__Row& operator=(UnityEngine__UIElements__UIR__Allocator2D__Row const& o) noexcept = default;
                


// Fields

 UnityEngine::RectInt __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(UnityEngine::RectInt value) ;

constexpr UnityEngine::RectInt __get_rect() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area __declspec(property(get=__get_area, put=__set_area))  area;

constexpr void __set_area(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area __get_area() const;

 UnityEngine::UIElements::UIR::BestFitAllocator __declspec(property(get=__get_allocator, put=__set_allocator))  allocator;

constexpr void __set_allocator(UnityEngine::UIElements::UIR::BestFitAllocator value) ;

constexpr UnityEngine::UIElements::UIR::BestFitAllocator __get_allocator() const;

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_alloc, put=__set_alloc))  alloc;

constexpr void __set_alloc(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_alloc() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row __get_next() const;

static UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> __declspec(property(get=__get_pool, put=__set_pool))  pool;

static void __set_pool(UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> value) ;

static UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> __get_pool() ;


// Methods

/// @brief Method Create addr 0x2c539e8 size 0x58 virtual false final false
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row Create() ;

/// @brief Method Reset addr 0x2c53a88 size 0x28 virtual false final false
static void Reset(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row row) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__UIR__Allocator2D__Row() ;

/// @brief Method .ctor addr 0x2c53a40 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::Alloc2D
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7513))
// CS Name: UnityEngine.UIElements.UIR.Allocator2D::Alloc2D
struct CORDL_TYPE UnityEngine__UIElements__UIR__Allocator2D__Alloc2D : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rect", ty: "UnityEngine::RectInt", modifiers: "", def_value: None }, CppParam { name: "row", ty: "UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row", modifiers: "", def_value: None }, CppParam { name: "alloc", ty: "UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Allocator2D__Alloc2D(UnityEngine::RectInt rect, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row row, UnityEngine::UIElements::UIR::Alloc alloc) noexcept;


                    constexpr UnityEngine__UIElements__UIR__Allocator2D__Alloc2D(UnityEngine__UIElements__UIR__Allocator2D__Alloc2D const&) = default;
                    constexpr UnityEngine__UIElements__UIR__Allocator2D__Alloc2D(UnityEngine__UIElements__UIR__Allocator2D__Alloc2D&&) = default;
                    constexpr UnityEngine__UIElements__UIR__Allocator2D__Alloc2D& operator=(UnityEngine__UIElements__UIR__Allocator2D__Alloc2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__Allocator2D__Alloc2D& operator=(UnityEngine__UIElements__UIR__Allocator2D__Alloc2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Allocator2D__Alloc2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::RectInt __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(UnityEngine::RectInt value) ;

constexpr UnityEngine::RectInt __get_rect() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row __declspec(property(get=__get_row, put=__set_row))  row;

constexpr void __set_row(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row __get_row() const;

 UnityEngine::UIElements::UIR::Alloc __declspec(property(get=__get_alloc, put=__set_alloc))  alloc;

constexpr void __set_alloc(UnityEngine::UIElements::UIR::Alloc value) ;

constexpr UnityEngine::UIElements::UIR::Alloc __get_alloc() const;


// Methods

/// @brief Method .ctor addr 0x2c53394 size 0xa4 virtual false final false
 void _ctor(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row row, UnityEngine::UIElements::UIR::Alloc alloc, int32_t width, int32_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::Allocator2D
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7514))
// CS Name: UnityEngine.UIElements.UIR.Allocator2D
class CORDL_TYPE Allocator2D : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Alloc2D = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D;

using Row = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row;

using Area = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Allocator2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Allocator2D", modifiers: " const&", def_value: None }]
constexpr Allocator2D(Allocator2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Allocator2D", modifiers: "&&", def_value: None }]
constexpr Allocator2D(Allocator2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Allocator2D(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Allocator2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Allocator2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Allocator2D& operator=(Allocator2D&& o) noexcept = default;
  constexpr Allocator2D& operator=(Allocator2D const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2Int __declspec(property(get=__get_m_MinSize, put=__set_m_MinSize))  m_MinSize;

constexpr void __set_m_MinSize(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get_m_MinSize() const;

 UnityEngine::Vector2Int __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize))  m_MaxSize;

constexpr void __set_m_MaxSize(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get_m_MaxSize() const;

 UnityEngine::Vector2Int __declspec(property(get=__get_m_MaxAllocSize, put=__set_m_MaxAllocSize))  m_MaxAllocSize;

constexpr void __set_m_MaxAllocSize(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get_m_MaxAllocSize() const;

 int32_t __declspec(property(get=__get_m_RowHeightBias, put=__set_m_RowHeightBias))  m_RowHeightBias;

constexpr void __set_m_RowHeightBias(int32_t value) ;

constexpr int32_t __get_m_RowHeightBias() const;

 ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> __declspec(property(get=__get_m_Rows, put=__set_m_Rows))  m_Rows;

constexpr void __set_m_Rows(::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> __get_m_Rows() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area> __declspec(property(get=__get_m_Areas, put=__set_m_Areas))  m_Areas;

constexpr void __set_m_Areas(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area> __get_m_Areas() const;


// Methods

// Ctor Parameters [CppParam { name: "minSize", ty: "UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "rowHeightBias", ty: "int32_t", modifiers: "", def_value: None }]
explicit Allocator2D(UnityEngine::Vector2Int minSize, UnityEngine::Vector2Int maxSize, int32_t rowHeightBias) ;

/// @brief Method .ctor addr 0x2c5273c size 0x218 virtual false final false
 void _ctor(UnityEngine::Vector2Int minSize, UnityEngine::Vector2Int maxSize, int32_t rowHeightBias) ;

/// @brief Method TryAllocate addr 0x2c52d68 size 0x498 virtual false final false
 bool TryAllocate(int32_t width, int32_t height, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D> alloc2D) ;

/// @brief Method Free addr 0x2c534e0 size 0x210 virtual false final false
 void Free(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D alloc2D) ;

/// @brief Method BuildAreas addr 0x2c52954 size 0x270 virtual false final false
static void BuildAreas(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area> areas, UnityEngine::Vector2Int minSize, UnityEngine::Vector2Int maxSize) ;

/// @brief Method ComputeMaxAllocSize addr 0x2c52bc4 size 0x11c virtual false final false
static UnityEngine::Vector2Int ComputeMaxAllocSize(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area> areas, int32_t rowHeightBias) ;

/// @brief Method BuildRowArray addr 0x2c52ce0 size 0x88 virtual false final false
static ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row> BuildRowArray(int32_t maxRowHeight, int32_t rowHeightBias) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::Allocator2D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Allocator2D, "UnityEngine.UIElements.UIR", "Allocator2D");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Area, "UnityEngine.UIElements.UIR", "Allocator2D/Area");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Row, "UnityEngine.UIElements.UIR", "Allocator2D/Row");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Allocator2D__Alloc2D, "UnityEngine.UIElements.UIR", "Allocator2D/Alloc2D");
