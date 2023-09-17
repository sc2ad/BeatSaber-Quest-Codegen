#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
struct ItemPriority_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
class PriorityQueue_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TItem>
class PriorityQueue_2<TItem,float_t>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
class PriorityQueue_2<TItem,TPriority>;
}
// Type: UnityEngine.ProBuilder.KdTree::PriorityQueue`2
// Type: UnityEngine.ProBuilder.KdTree::PriorityQueue`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15808))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15808), inst: 80 })
// CS Name: UnityEngine.ProBuilder.KdTree.PriorityQueue`2
class CORDL_TYPE PriorityQueue_2<TItem,TPriority> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: " const&", def_value: None }]
constexpr PriorityQueue_2(PriorityQueue_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "&&", def_value: None }]
constexpr PriorityQueue_2(PriorityQueue_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PriorityQueue_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PriorityQueue_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PriorityQueue_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PriorityQueue_2& operator=(PriorityQueue_2&& o) noexcept = default;
  constexpr PriorityQueue_2& operator=(PriorityQueue_2 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority> __declspec(property(get=__get_priorityMath, put=__set_priorityMath))  priorityMath;

constexpr void __set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority> __get_priorityMath() const;

 ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>> __declspec(property(get=__get_queue, put=__set_queue))  queue;

constexpr void __set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>> value) ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>> __get_queue() const;

 int32_t __declspec(property(get=__get_capacity, put=__set_capacity))  capacity;

constexpr void __set_capacity(int32_t value) ;

constexpr int32_t __get_capacity() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "priorityMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>", modifiers: "", def_value: None }]
explicit PriorityQueue_2(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority> priorityMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority> priorityMath) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method ExpandCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ExpandCapacity() ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
 void Enqueue(TItem item, TPriority priority) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem Dequeue() ;

/// @brief Method ReorderItem addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReorderItem(int32_t index, int32_t direction) ;

/// @brief Method GetHighest addr 0x0 size 0xffffffffffffffff virtual false final false
 TItem GetHighest() ;

/// @brief Method GetHighestPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 TPriority GetHighestPriority() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::PriorityQueue`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15808))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15808), inst: 1553 })
// CS Name: UnityEngine.ProBuilder.KdTree.PriorityQueue`2
class CORDL_TYPE PriorityQueue_2<TItem,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,float_t>
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,float_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: " const&", def_value: None }]
constexpr PriorityQueue_2(PriorityQueue_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "&&", def_value: None }]
constexpr PriorityQueue_2(PriorityQueue_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PriorityQueue_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PriorityQueue_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PriorityQueue_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PriorityQueue_2& operator=(PriorityQueue_2&& o) noexcept = default;
  constexpr PriorityQueue_2& operator=(PriorityQueue_2 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> __declspec(property(get=__get_priorityMath, put=__set_priorityMath))  priorityMath;

constexpr void __set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> __get_priorityMath() const;

 ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>> __declspec(property(get=__get_queue, put=__set_queue))  queue;

constexpr void __set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>> value) ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>> __get_queue() const;

 int32_t __declspec(property(get=__get_capacity, put=__set_capacity))  capacity;

constexpr void __set_capacity(int32_t value) ;

constexpr int32_t __get_capacity() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "priorityMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>", modifiers: "", def_value: None }]
explicit PriorityQueue_2(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> priorityMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> priorityMath) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method ExpandCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ExpandCapacity() ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
 void Enqueue(TItem item, float_t priority) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem Dequeue() ;

/// @brief Method ReorderItem addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReorderItem(int32_t index, int32_t direction) ;

/// @brief Method GetHighest addr 0x0 size 0xffffffffffffffff virtual false final false
 TItem GetHighest() ;

/// @brief Method GetHighestPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetHighestPriority() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "PriorityQueue`2");
