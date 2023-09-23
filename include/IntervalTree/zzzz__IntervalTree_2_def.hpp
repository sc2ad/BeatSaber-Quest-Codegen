#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTreeNode_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class IIntervalTree_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTree_2;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTree__IntervalTree_2____c;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass19_0;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass20_0;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass23_0;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass24_0;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class IntervalTree_2<TKey,TValue>;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class IntervalTree__IntervalTree_2____c<TKey,TValue>;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass19_0<TKey,TValue>;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass20_0<TKey,TValue>;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass23_0<TKey,TValue>;
}
namespace IntervalTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class IntervalTree__IntervalTree_2____c__DisplayClass24_0<TKey,TValue>;
}
// Type: ::<>c
// Type: ::<>c__DisplayClass19_0
// Type: ::<>c__DisplayClass20_0
// Type: ::<>c__DisplayClass23_0
// Type: ::<>c__DisplayClass24_0
// Type: IntervalTree::IntervalTree`2
// Type: ::<>c
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15973))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15973), inst: 80 })
// CS Name: IntervalTree.IntervalTree`2::<>c
class CORDL_TYPE IntervalTree__IntervalTree_2____c<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IntervalTree__IntervalTree_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c", modifiers: " const&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c(IntervalTree__IntervalTree_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c", modifiers: "&&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c(IntervalTree__IntervalTree_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTree__IntervalTree_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTree__IntervalTree_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c& operator=(IntervalTree__IntervalTree_2____c&& o) noexcept = default;
  constexpr IntervalTree__IntervalTree_2____c& operator=(IntervalTree__IntervalTree_2____c const& o) noexcept = default;
                


// Fields

static IntervalTree::IntervalTree__IntervalTree_2____c<TKey,TValue> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(IntervalTree::IntervalTree__IntervalTree_2____c<TKey,TValue> value) ;

static IntervalTree::IntervalTree__IntervalTree_2____c<TKey,TValue> __get___9() ;

static System::Func_2<IntervalTree::RangeValuePair_2<TKey,TValue>,TValue> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Func_2<IntervalTree::RangeValuePair_2<TKey,TValue>,TValue> value) ;

static System::Func_2<IntervalTree::RangeValuePair_2<TKey,TValue>,TValue> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit IntervalTree__IntervalTree_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <get_Values>b__10_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue _get_Values_b__10_0(IntervalTree::RangeValuePair_2<TKey,TValue> i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
// Type: ::<>c__DisplayClass19_0
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15974))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15974), inst: 80 })
// CS Name: IntervalTree.IntervalTree`2::<>c__DisplayClass19_0
class CORDL_TYPE IntervalTree__IntervalTree_2____c__DisplayClass19_0<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntervalTree__IntervalTree_2____c__DisplayClass19_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass19_0", modifiers: " const&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass19_0(IntervalTree__IntervalTree_2____c__DisplayClass19_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass19_0(IntervalTree__IntervalTree_2____c__DisplayClass19_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTree__IntervalTree_2____c__DisplayClass19_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTree__IntervalTree_2____c__DisplayClass19_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass19_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass19_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass19_0&& o) noexcept = default;
  constexpr IntervalTree__IntervalTree_2____c__DisplayClass19_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass19_0 const& o) noexcept = default;
                


// Fields

 TValue __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(TValue value) ;

constexpr TValue __get_value() const;


// Methods

// Ctor Parameters []
explicit IntervalTree__IntervalTree_2____c__DisplayClass19_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Remove>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _Remove_b__0(IntervalTree::RangeValuePair_2<TKey,TValue> l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
// Type: ::<>c__DisplayClass20_0
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15975))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15975), inst: 80 })
// CS Name: IntervalTree.IntervalTree`2::<>c__DisplayClass20_0
class CORDL_TYPE IntervalTree__IntervalTree_2____c__DisplayClass20_0<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntervalTree__IntervalTree_2____c__DisplayClass20_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass20_0", modifiers: " const&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass20_0(IntervalTree__IntervalTree_2____c__DisplayClass20_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass20_0(IntervalTree__IntervalTree_2____c__DisplayClass20_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTree__IntervalTree_2____c__DisplayClass20_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTree__IntervalTree_2____c__DisplayClass20_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass20_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass20_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass20_0&& o) noexcept = default;
  constexpr IntervalTree__IntervalTree_2____c__DisplayClass20_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass20_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IEnumerable_1<TValue> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(System::Collections::Generic::IEnumerable_1<TValue> value) ;

constexpr System::Collections::Generic::IEnumerable_1<TValue> __get_items() const;


// Methods

// Ctor Parameters []
explicit IntervalTree__IntervalTree_2____c__DisplayClass20_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Remove>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _Remove_b__0(IntervalTree::RangeValuePair_2<TKey,TValue> l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
// Type: ::<>c__DisplayClass23_0
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15976))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15976), inst: 80 })
// CS Name: IntervalTree.IntervalTree`2::<>c__DisplayClass23_0
class CORDL_TYPE IntervalTree__IntervalTree_2____c__DisplayClass23_0<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntervalTree__IntervalTree_2____c__DisplayClass23_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass23_0", modifiers: " const&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass23_0(IntervalTree__IntervalTree_2____c__DisplayClass23_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass23_0(IntervalTree__IntervalTree_2____c__DisplayClass23_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTree__IntervalTree_2____c__DisplayClass23_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTree__IntervalTree_2____c__DisplayClass23_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass23_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass23_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass23_0&& o) noexcept = default;
  constexpr IntervalTree__IntervalTree_2____c__DisplayClass23_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass23_0 const& o) noexcept = default;
                


// Fields

 IntervalTree::IntervalTree_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(IntervalTree::IntervalTree_2<TKey,TValue> value) ;

constexpr IntervalTree::IntervalTree_2<TKey,TValue> __get___4__this() const;

 TKey __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(TKey value) ;

constexpr TKey __get_key() const;


// Methods

// Ctor Parameters []
explicit IntervalTree__IntervalTree_2____c__DisplayClass23_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetClosestPrevValueTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _GetClosestPrevValueTo_b__0(IntervalTree::RangeValuePair_2<TKey,TValue> pair) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
// Type: ::<>c__DisplayClass24_0
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15977))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15977), inst: 80 })
// CS Name: IntervalTree.IntervalTree`2::<>c__DisplayClass24_0
class CORDL_TYPE IntervalTree__IntervalTree_2____c__DisplayClass24_0<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntervalTree__IntervalTree_2____c__DisplayClass24_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass24_0", modifiers: " const&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass24_0(IntervalTree__IntervalTree_2____c__DisplayClass24_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree__IntervalTree_2____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
constexpr IntervalTree__IntervalTree_2____c__DisplayClass24_0(IntervalTree__IntervalTree_2____c__DisplayClass24_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTree__IntervalTree_2____c__DisplayClass24_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTree__IntervalTree_2____c__DisplayClass24_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass24_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTree__IntervalTree_2____c__DisplayClass24_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass24_0&& o) noexcept = default;
  constexpr IntervalTree__IntervalTree_2____c__DisplayClass24_0& operator=(IntervalTree__IntervalTree_2____c__DisplayClass24_0 const& o) noexcept = default;
                


// Fields

 IntervalTree::IntervalTree_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(IntervalTree::IntervalTree_2<TKey,TValue> value) ;

constexpr IntervalTree::IntervalTree_2<TKey,TValue> __get___4__this() const;

 TKey __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(TKey value) ;

constexpr TKey __get_key() const;


// Methods

// Ctor Parameters []
explicit IntervalTree__IntervalTree_2____c__DisplayClass24_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetClosestNextValueTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _GetClosestNextValueTo_b__0(IntervalTree::RangeValuePair_2<TKey,TValue> pair) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
// Type: IntervalTree::IntervalTree`2
namespace IntervalTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15978))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15978), inst: 80 })
// CS Name: IntervalTree.IntervalTree`2
class CORDL_TYPE IntervalTree_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass24_0 = IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>;

using __c__DisplayClass23_0 = IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>;

using __c__DisplayClass20_0 = IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>;

using __c__DisplayClass19_0 = IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>;

using __c = IntervalTree::IntervalTree__IntervalTree_2____c<TKey, TValue>;

/// @brief Convert operator to IntervalTree::IIntervalTree_2<TKey,TValue>
constexpr operator  IntervalTree::IIntervalTree_2<TKey,TValue>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<IntervalTree::RangeValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<IntervalTree::RangeValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~IntervalTree_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree_2", modifiers: " const&", def_value: None }]
constexpr IntervalTree_2(IntervalTree_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTree_2", modifiers: "&&", def_value: None }]
constexpr IntervalTree_2(IntervalTree_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntervalTree_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntervalTree_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntervalTree_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntervalTree_2& operator=(IntervalTree_2&& o) noexcept = default;
  constexpr IntervalTree_2& operator=(IntervalTree_2 const& o) noexcept = default;
                


// Fields

 IntervalTree::IntervalTreeNode_2<TKey,TValue> __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(IntervalTree::IntervalTreeNode_2<TKey,TValue> value) ;

constexpr IntervalTree::IntervalTreeNode_2<TKey,TValue> __get_root() const;

 System::Collections::Generic::List_1<IntervalTree::RangeValuePair_2<TKey,TValue>> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(System::Collections::Generic::List_1<IntervalTree::RangeValuePair_2<TKey,TValue>> value) ;

constexpr System::Collections::Generic::List_1<IntervalTree::RangeValuePair_2<TKey,TValue>> __get_items() const;

 System::Collections::Generic::IComparer_1<TKey> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(System::Collections::Generic::IComparer_1<TKey> value) ;

constexpr System::Collections::Generic::IComparer_1<TKey> __get_comparer() const;

 bool __declspec(property(get=__get_isInSync, put=__set_isInSync))  isInSync;

constexpr void __set_isInSync(bool value) ;

constexpr bool __get_isInSync() const;


// Properties

 TKey __declspec(property(get=get_Max))  Max;

 TKey __declspec(property(get=get_Min))  Min;

 System::Collections::Generic::IEnumerable_1<TValue> __declspec(property(get=get_Values))  Values;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Max addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey get_Max() ;

/// @brief Method get_Min addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey get_Min() ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerable_1<TValue> get_Values() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

// Ctor Parameters []
explicit IntervalTree_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<TKey>", modifiers: "", def_value: None }]
explicit IntervalTree_2(System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IComparer_1<TKey> comparer) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerable_1<TValue> Query(TKey value) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerable_1<TValue> Query(TKey from, TKey to) ;

/// @brief Method QueryWithCount addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::List_1<TValue> QueryWithCount(TKey from, TKey to) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(TKey from, TKey to, TValue value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(TValue value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(System::Collections::Generic::IEnumerable_1<TValue> items) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<IntervalTree::RangeValuePair_2<TKey,TValue>> GetEnumerator() ;

/// @brief Method GetClosestPrevValueTo addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue GetClosestPrevValueTo(TKey key) ;

/// @brief Method GetClosestNextValueTo addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue GetClosestNextValueTo(TKey key) ;

/// @brief Method Rebuild addr 0x0 size 0xffffffffffffffff virtual false final false
 void Rebuild() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(IntervalTree::IntervalTree_2, "IntervalTree", "IntervalTree`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(IntervalTree::IntervalTree__IntervalTree_2____c, "IntervalTree", "IntervalTree`2/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass19_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass19_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass20_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass20_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass23_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass23_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(IntervalTree::IntervalTree__IntervalTree_2____c__DisplayClass24_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass24_0");
