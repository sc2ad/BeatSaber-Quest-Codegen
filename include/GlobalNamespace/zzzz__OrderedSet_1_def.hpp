#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__OrderedSet_1__Node;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__OrderedSet_1___GetEnumerator_d__23;
}
namespace GlobalNamespace {
template<typename T>
class OrderedSet_1;
}
namespace GlobalNamespace {
template<typename T>
struct GlobalNamespace__OrderedSet_1__ProcessOrder;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__OrderedSet_1__Node<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class OrderedSet_1<T>;
}
// Type: ::ProcessOrder
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12843))
// CS Name: OrderedSet`1::ProcessOrder
struct CORDL_TYPE GlobalNamespace__OrderedSet_1__ProcessOrder : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OrderedSet_1__ProcessOrder(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OrderedSet_1__ProcessOrder(GlobalNamespace__OrderedSet_1__ProcessOrder const&) = default;
                    constexpr GlobalNamespace__OrderedSet_1__ProcessOrder(GlobalNamespace__OrderedSet_1__ProcessOrder&&) = default;
                    constexpr GlobalNamespace__OrderedSet_1__ProcessOrder& operator=(GlobalNamespace__OrderedSet_1__ProcessOrder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OrderedSet_1__ProcessOrder& operator=(GlobalNamespace__OrderedSet_1__ProcessOrder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OrderedSet_1__ProcessOrder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OrderedSet_1__ProcessOrder_Unwrapped : int32_t {
__Lifo = 0,
__Fifo = 1,
__DontCare = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OrderedSet_1__ProcessOrder_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OrderedSet_1__ProcessOrder_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Lifo offset 0
static GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> const Lifo;

/// @brief Field Fifo offset 0
static GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> const Fifo;

/// @brief Field DontCare offset 0
static GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> const DontCare;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Node
// Type: ::<GetEnumerator>d__23
// Type: ::OrderedSet`1
// Type: ::Node
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12844))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12844), inst: 2 })
// CS Name: OrderedSet`1::Node
class CORDL_TYPE GlobalNamespace__OrderedSet_1__Node<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__OrderedSet_1__Node() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OrderedSet_1__Node", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OrderedSet_1__Node(GlobalNamespace__OrderedSet_1__Node const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OrderedSet_1__Node", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OrderedSet_1__Node(GlobalNamespace__OrderedSet_1__Node&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OrderedSet_1__Node(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OrderedSet_1__Node& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OrderedSet_1__Node& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OrderedSet_1__Node& operator=(GlobalNamespace__OrderedSet_1__Node&& o) noexcept = default;
  constexpr GlobalNamespace__OrderedSet_1__Node& operator=(GlobalNamespace__OrderedSet_1__Node const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(T value) ;

constexpr T __get_value() const;

 GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __declspec(property(get=__get_previous, put=__set_previous))  previous;

constexpr void __set_previous(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __get_previous() const;

 GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __get_next() const;

 bool __declspec(property(get=__get_isRemoved, put=__set_isRemoved))  isRemoved;

constexpr void __set_isRemoved(bool value) ;

constexpr bool __get_isRemoved() const;

 int32_t __declspec(property(get=__get_clearCount, put=__set_clearCount))  clearCount;

constexpr void __set_clearCount(int32_t value) ;

constexpr int32_t __get_clearCount() const;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "T", modifiers: "", def_value: None }, CppParam { name: "clearCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OrderedSet_1__Node(T value, int32_t clearCount) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T value, int32_t clearCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__23
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12845))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12845), inst: 2 })
// CS Name: OrderedSet`1::<GetEnumerator>d__23
class CORDL_TYPE GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__OrderedSet_1___GetEnumerator_d__23() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OrderedSet_1___GetEnumerator_d__23", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OrderedSet_1___GetEnumerator_d__23(GlobalNamespace__OrderedSet_1___GetEnumerator_d__23 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OrderedSet_1___GetEnumerator_d__23", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OrderedSet_1___GetEnumerator_d__23(GlobalNamespace__OrderedSet_1___GetEnumerator_d__23&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OrderedSet_1___GetEnumerator_d__23(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OrderedSet_1___GetEnumerator_d__23& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OrderedSet_1___GetEnumerator_d__23& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OrderedSet_1___GetEnumerator_d__23& operator=(GlobalNamespace__OrderedSet_1___GetEnumerator_d__23&& o) noexcept = default;
  constexpr GlobalNamespace__OrderedSet_1___GetEnumerator_d__23& operator=(GlobalNamespace__OrderedSet_1___GetEnumerator_d__23 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 GlobalNamespace::OrderedSet_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OrderedSet_1<T> value) ;

constexpr GlobalNamespace::OrderedSet_1<T> __get___4__this() const;

 GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __declspec(property(get=__get__next_5__2, put=__set__next_5__2))  _next_5__2;

constexpr void __set__next_5__2(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __get__next_5__2() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OrderedSet_1___GetEnumerator_d__23(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OrderedSet`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12846))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12846), inst: 2 })
// CS Name: OrderedSet`1
class CORDL_TYPE OrderedSet_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__23 = GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23<T>;

using Node = GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>;

using ProcessOrder = GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OrderedSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1", modifiers: " const&", def_value: None }]
constexpr OrderedSet_1(OrderedSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrderedSet_1", modifiers: "&&", def_value: None }]
constexpr OrderedSet_1(OrderedSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrderedSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OrderedSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrderedSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrderedSet_1& operator=(OrderedSet_1&& o) noexcept = default;
  constexpr OrderedSet_1& operator=(OrderedSet_1 const& o) noexcept = default;
                


// Fields

 System::Comparison_1<T> __declspec(property(get=__get__comparison, put=__set__comparison))  _comparison;

constexpr void __set__comparison(System::Comparison_1<T> value) ;

constexpr System::Comparison_1<T> __get__comparison() const;

 GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> __declspec(property(get=__get__processOrder, put=__set__processOrder))  _processOrder;

constexpr void __set__processOrder(GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> __get__processOrder() const;

 System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>> __declspec(property(get=__get__sortIndices, put=__set__sortIndices))  _sortIndices;

constexpr void __set__sortIndices(System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>> value) ;

constexpr System::Collections::Generic::Dictionary_2<T,GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T>> __get__sortIndices() const;

 GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __get__head() const;

 GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> value) ;

constexpr GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> __get__tail() const;

 int32_t __declspec(property(get=__get__clearCount, put=__set__clearCount))  _clearCount;

constexpr void __set__clearCount(int32_t value) ;

constexpr int32_t __get__clearCount() const;


// Properties

 int32_t __declspec(property(get=get_count))  count;


// Methods

/// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_count() ;

// Ctor Parameters [CppParam { name: "comparison", ty: "System::Comparison_1<T>", modifiers: "", def_value: None }, CppParam { name: "processOrder", ty: "GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T>", modifiers: "", def_value: None }]
explicit OrderedSet_1(System::Comparison_1<T> comparison, GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> processOrder) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Comparison_1<T> comparison, GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder<T> processOrder) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Remove(T item) ;

/// @brief Method UpdateSortedPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateSortedPosition(T item) ;

/// @brief Method AppendNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void AppendNode(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node) ;

/// @brief Method AppendNodeUnchecked addr 0x0 size 0xffffffffffffffff virtual false final false
 void AppendNodeUnchecked(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node) ;

/// @brief Method PrependNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void PrependNode(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node) ;

/// @brief Method PrependNodeUnchecked addr 0x0 size 0xffffffffffffffff virtual false final false
 void PrependNodeUnchecked(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node) ;

/// @brief Method SwapNodes addr 0x0 size 0xffffffffffffffff virtual false final false
 void SwapNodes(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> previous, GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> next) ;

/// @brief Method RemoveNode addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveNode(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node) ;

/// @brief Method UpdateSortedPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateSortedPosition(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node<T> node) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetFirstOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetFirstOrDefault() ;

/// @brief Method TryGetFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetFirst(ByRef<T> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__OrderedSet_1__Node, "", "OrderedSet`1/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__OrderedSet_1___GetEnumerator_d__23, "", "OrderedSet`1/<GetEnumerator>d__23");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::OrderedSet_1, "", "OrderedSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::GlobalNamespace__OrderedSet_1__ProcessOrder, "", "OrderedSet`1/ProcessOrder");
