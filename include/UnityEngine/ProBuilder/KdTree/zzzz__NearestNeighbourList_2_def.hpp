#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TDistance>
class INearestNeighbourList_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
class PriorityQueue_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TDistance>
class NearestNeighbourList_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TDistance>
class NearestNeighbourList_2<TItem,TDistance>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TItem>
class NearestNeighbourList_2<TItem,float_t>;
}
// Type: UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2
// Type: UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TDistance>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15806))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15806), inst: 80 })
// CS Name: UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2
class CORDL_TYPE NearestNeighbourList_2<TItem,TDistance> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>
constexpr operator  ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NearestNeighbourList_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: " const&", def_value: None }]
constexpr NearestNeighbourList_2(NearestNeighbourList_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "&&", def_value: None }]
constexpr NearestNeighbourList_2(NearestNeighbourList_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NearestNeighbourList_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NearestNeighbourList_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NearestNeighbourList_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NearestNeighbourList_2& operator=(NearestNeighbourList_2&& o) noexcept = default;
  constexpr NearestNeighbourList_2& operator=(NearestNeighbourList_2 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance> __declspec(property(get=__get_queue, put=__set_queue))  queue;

constexpr void __set_queue(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TDistance> __get_queue() const;

 ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> __declspec(property(get=__get_distanceMath, put=__set_distanceMath))  distanceMath;

constexpr void __set_distanceMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> __get_distanceMath() const;

 int32_t __declspec(property(get=__get_maxCapacity, put=__set_maxCapacity))  maxCapacity;

constexpr void __set_maxCapacity(int32_t value) ;

constexpr int32_t __get_maxCapacity() const;


// Properties

 int32_t __declspec(property(get=get_MaxCapacity))  MaxCapacity;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsCapacityReached))  IsCapacityReached;


// Methods

// Ctor Parameters [CppParam { name: "maxCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "distanceMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>", modifiers: "", def_value: None }]
explicit NearestNeighbourList_2(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> distanceMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance> distanceMath) ;

/// @brief Method get_MaxCapacity addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_MaxCapacity() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(TItem item, TDistance distance) ;

/// @brief Method GetFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem GetFurtherest() ;

/// @brief Method GetFurtherestDistance addr 0x0 size 0xffffffffffffffff virtual false final false
 TDistance GetFurtherestDistance() ;

/// @brief Method RemoveFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem RemoveFurtherest() ;

/// @brief Method get_IsCapacityReached addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCapacityReached() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::NearestNeighbourList`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15806))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15806), inst: 1553 })
// CS Name: UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2
class CORDL_TYPE NearestNeighbourList_2<TItem,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,float_t>
constexpr operator  ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,float_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NearestNeighbourList_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: " const&", def_value: None }]
constexpr NearestNeighbourList_2(NearestNeighbourList_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NearestNeighbourList_2", modifiers: "&&", def_value: None }]
constexpr NearestNeighbourList_2(NearestNeighbourList_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NearestNeighbourList_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NearestNeighbourList_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NearestNeighbourList_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NearestNeighbourList_2& operator=(NearestNeighbourList_2&& o) noexcept = default;
  constexpr NearestNeighbourList_2& operator=(NearestNeighbourList_2 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t> __declspec(property(get=__get_queue, put=__set_queue))  queue;

constexpr void __set_queue(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t> __get_queue() const;

 ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> __declspec(property(get=__get_distanceMath, put=__set_distanceMath))  distanceMath;

constexpr void __set_distanceMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> __get_distanceMath() const;

 int32_t __declspec(property(get=__get_maxCapacity, put=__set_maxCapacity))  maxCapacity;

constexpr void __set_maxCapacity(int32_t value) ;

constexpr int32_t __get_maxCapacity() const;


// Properties

 int32_t __declspec(property(get=get_MaxCapacity))  MaxCapacity;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsCapacityReached))  IsCapacityReached;


// Methods

// Ctor Parameters [CppParam { name: "maxCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "distanceMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>", modifiers: "", def_value: None }]
explicit NearestNeighbourList_2(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> distanceMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> distanceMath) ;

/// @brief Method get_MaxCapacity addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_MaxCapacity() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(TItem item, float_t distance) ;

/// @brief Method GetFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem GetFurtherest() ;

/// @brief Method GetFurtherestDistance addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetFurtherestDistance() ;

/// @brief Method RemoveFurtherest addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem RemoveFurtherest() ;

/// @brief Method get_IsCapacityReached addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCapacityReached() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2, "UnityEngine.ProBuilder.KdTree", "NearestNeighbourList`2");
