#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTreeNode_2;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class ____IntervalTree__IntervalTreeNode_2____c;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class IntervalTreeNode_2<TKey,TValue>;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ____IntervalTree__IntervalTreeNode_2____c<TKey,TValue>;
}
// Type: ::<>c
// Type: IntervalTree::IntervalTreeNode`2
// Type: ::<>c
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15979))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15979), inst: 80 })
// CS Name: IntervalTree.IntervalTreeNode`2::<>c
class CORDL_TYPE ____IntervalTree__IntervalTreeNode_2____c<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____IntervalTree__IntervalTreeNode_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____IntervalTree__IntervalTreeNode_2____c", modifiers: " const&", def_value: None }]
constexpr ____IntervalTree__IntervalTreeNode_2____c(____IntervalTree__IntervalTreeNode_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____IntervalTree__IntervalTreeNode_2____c", modifiers: "&&", def_value: None }]
constexpr ____IntervalTree__IntervalTreeNode_2____c(____IntervalTree__IntervalTreeNode_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____IntervalTree__IntervalTreeNode_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____IntervalTree__IntervalTreeNode_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____IntervalTree__IntervalTreeNode_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____IntervalTree__IntervalTreeNode_2____c& operator=(____IntervalTree__IntervalTreeNode_2____c&& o) noexcept = default;
  constexpr ____IntervalTree__IntervalTreeNode_2____c& operator=(____IntervalTree__IntervalTreeNode_2____c const& o) noexcept = default;
                


// Fields

static ::IntervalTree::____IntervalTree__IntervalTreeNode_2____c<TKey,TValue> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::IntervalTree::____IntervalTree__IntervalTreeNode_2____c<TKey,TValue> value) ;

static ::IntervalTree::____IntervalTree__IntervalTreeNode_2____c<TKey,TValue> __get___9() ;

static ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey> __declspec(property(get=__get___9__13_0, put=__set___9__13_0))  __9__13_0;

static void __set___9__13_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey> value) ;

static ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey> __get___9__13_0() ;

static ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey> __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey> value) ;

static ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey> __get___9__15_0() ;


// Methods

// Ctor Parameters []
explicit ____IntervalTree__IntervalTreeNode_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <get_Max>b__13_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey _get_Max_b__13_0(::IntervalTree::RangeValuePair_2<TKey,TValue> i) ;

/// @brief Method <get_Min>b__15_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey _get_Min_b__15_0(::IntervalTree::RangeValuePair_2<TKey,TValue> i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
// Type: IntervalTree::IntervalTreeNode`2
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15980))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15980), inst: 80 })
// CS Name: IntervalTree.IntervalTreeNode`2
class CORDL_TYPE IntervalTreeNode_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::IntervalTree::____IntervalTree__IntervalTreeNode_2____c<TKey, TValue>;

/// @brief Convert operator to ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>
constexpr operator  ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~IntervalTreeNode_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: " const&", def_value: None }]
constexpr IntervalTreeNode_2(IntervalTreeNode_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: "&&", def_value: None }]
constexpr IntervalTreeNode_2(IntervalTreeNode_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTreeNode_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTreeNode_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTreeNode_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTreeNode_2& operator=(IntervalTreeNode_2&& o) noexcept = default;
  constexpr IntervalTreeNode_2& operator=(IntervalTreeNode_2 const& o) noexcept = default;
                


// Fields

 TKey __declspec(property(get=__get_center, put=__set_center))  center;

constexpr void __set_center(TKey value) ;

constexpr TKey __get_center() const;

 ::IntervalTree::IntervalTreeNode_2<TKey,TValue> __declspec(property(get=__get_leftNode, put=__set_leftNode))  leftNode;

constexpr void __set_leftNode(::IntervalTree::IntervalTreeNode_2<TKey,TValue> value) ;

constexpr ::IntervalTree::IntervalTreeNode_2<TKey,TValue> __get_leftNode() const;

 ::IntervalTree::IntervalTreeNode_2<TKey,TValue> __declspec(property(get=__get_rightNode, put=__set_rightNode))  rightNode;

constexpr void __set_rightNode(::IntervalTree::IntervalTreeNode_2<TKey,TValue> value) ;

constexpr ::IntervalTree::IntervalTreeNode_2<TKey,TValue> __get_rightNode() const;

 ::ArrayW<::IntervalTree::RangeValuePair_2<TKey,TValue>> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<::IntervalTree::RangeValuePair_2<TKey,TValue>> value) ;

constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey,TValue>> __get_items() const;

 ::System::Collections::Generic::IComparer_1<TKey> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey> value) ;

constexpr ::System::Collections::Generic::IComparer_1<TKey> __get_comparer() const;


// Properties

 TKey __declspec(property(get=get_Max))  Max;

 TKey __declspec(property(get=get_Min))  Min;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<TKey>", modifiers: "", def_value: None }]
explicit IntervalTreeNode_2(::System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IComparer_1<TKey> comparer) ;

// Ctor Parameters [CppParam { name: "items", ty: "::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<TKey>", modifiers: "", def_value: None }]
explicit IntervalTreeNode_2(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey,TValue>> items, ::System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey,TValue>> items, ::System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEnumerable_1<TValue> Query(TKey value) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::List_1<TValue> Query(TKey from, TKey to) ;

/// @brief Method QueryClosestPrev addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEnumerable_1<TValue> QueryClosestPrev(TKey value) ;

/// @brief Method GetClosestNodeTo addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IntervalTree::IntervalTreeNode_2<TKey,TValue> GetClosestNodeTo(TKey key) ;

/// @brief Method System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t System_Collections_Generic_IComparer_IntervalTree_RangeValuePair_TKey,TValue___Compare(::IntervalTree::RangeValuePair_2<TKey,TValue> x, ::IntervalTree::RangeValuePair_2<TKey,TValue> y) ;

/// @brief Method get_Max addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey get_Max() ;

/// @brief Method get_Min addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey get_Min() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IntervalTreeNode_2, "IntervalTree", "IntervalTreeNode`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::____IntervalTree__IntervalTreeNode_2____c, "IntervalTree", "IntervalTreeNode`2/<>c");
