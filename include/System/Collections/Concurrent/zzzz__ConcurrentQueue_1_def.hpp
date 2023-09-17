#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Concurrent {
template<typename T>
class IProducerConsumerCollection_1;
}
namespace System::Collections::Concurrent {
struct PaddedHeadAndTail;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Concurrent {
template<typename T>
class ____System__Collections__Concurrent__ConcurrentQueue_1__Segment;
}
namespace System::Collections::Concurrent {
template<typename T>
class ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type T>
class ConcurrentQueue_1<T>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type T>
class ____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type T>
class ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>;
}
namespace GlobalNamespace {
template<typename T>
struct ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot;
}
// Type: ::Slot
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3785))
// CS Name: System.Collections.Concurrent.ConcurrentQueue`1::Segment::Slot
struct CORDL_TYPE ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: None }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot(T Item, int32_t SequenceNumber) noexcept;


                    constexpr ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot(______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot const&) = default;
                    constexpr ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot(______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot&&) = default;
                    constexpr ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot& operator=(______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot& operator=(______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T __declspec(property(get=__get_Item, put=__set_Item))  Item;

constexpr void __set_Item(T value) ;

constexpr T __get_Item() const;

 int32_t __declspec(property(get=__get_SequenceNumber, put=__set_SequenceNumber))  SequenceNumber;

constexpr void __set_SequenceNumber(int32_t value) ;

constexpr int32_t __get_SequenceNumber() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Segment
// Type: ::<Enumerate>d__28
// Type: System.Collections.Concurrent::ConcurrentQueue`1
// Type: ::Segment
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3786))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3786), inst: 2 })
// CS Name: System.Collections.Concurrent.ConcurrentQueue`1::Segment
class CORDL_TYPE ____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Slot = ::GlobalNamespace::______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Collections__Concurrent__ConcurrentQueue_1__Segment() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentQueue_1__Segment", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentQueue_1__Segment(____System__Collections__Concurrent__ConcurrentQueue_1__Segment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentQueue_1__Segment", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentQueue_1__Segment(____System__Collections__Concurrent__ConcurrentQueue_1__Segment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Concurrent__ConcurrentQueue_1__Segment(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1__Segment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1__Segment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1__Segment& operator=(____System__Collections__Concurrent__ConcurrentQueue_1__Segment&& o) noexcept = default;
  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1__Segment& operator=(____System__Collections__Concurrent__ConcurrentQueue_1__Segment const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>> __declspec(property(get=__get__slots, put=__set__slots))  _slots;

constexpr void __set__slots(::ArrayW<::GlobalNamespace::______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>> value) ;

constexpr ::ArrayW<::GlobalNamespace::______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>> __get__slots() const;

 int32_t __declspec(property(get=__get__slotsMask, put=__set__slotsMask))  _slotsMask;

constexpr void __set__slotsMask(int32_t value) ;

constexpr int32_t __get__slotsMask() const;

 ::System::Collections::Concurrent::PaddedHeadAndTail __declspec(property(get=__get__headAndTail, put=__set__headAndTail))  _headAndTail;

constexpr void __set__headAndTail(::System::Collections::Concurrent::PaddedHeadAndTail value) ;

constexpr ::System::Collections::Concurrent::PaddedHeadAndTail __get__headAndTail() const;

 bool __declspec(property(get=__get__preservedForObservation, put=__set__preservedForObservation))  _preservedForObservation;

constexpr void __set__preservedForObservation(bool value) ;

constexpr bool __get__preservedForObservation() const;

 bool __declspec(property(get=__get__frozenForEnqueues, put=__set__frozenForEnqueues))  _frozenForEnqueues;

constexpr void __set__frozenForEnqueues(bool value) ;

constexpr bool __get__frozenForEnqueues() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __declspec(property(get=__get__nextSegment, put=__set__nextSegment))  _nextSegment;

constexpr void __set__nextSegment(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __get__nextSegment() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 int32_t __declspec(property(get=get_FreezeOffset))  FreezeOffset;


// Methods

// Ctor Parameters [CppParam { name: "boundedLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Collections__Concurrent__ConcurrentQueue_1__Segment(int32_t boundedLength) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t boundedLength) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_FreezeOffset addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_FreezeOffset() ;

/// @brief Method EnsureFrozenForEnqueues addr 0x0 size 0xffffffffffffffff virtual false final false
 void EnsureFrozenForEnqueues() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<T> item) ;

/// @brief Method TryEnqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryEnqueue(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: ::<Enumerate>d__28
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3787))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3787), inst: 2 })
// CS Name: System.Collections.Concurrent.ConcurrentQueue`1::<Enumerate>d__28
class CORDL_TYPE ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28(____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28(____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28& operator=(____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28&& o) noexcept = default;
  constexpr ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28& operator=(____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __get_head() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __declspec(property(get=__get_tail, put=__set_tail))  tail;

constexpr void __set_tail(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __get_tail() const;

 int32_t __declspec(property(get=__get_tailTail, put=__set_tailTail))  tailTail;

constexpr void __set_tailTail(int32_t value) ;

constexpr int32_t __get_tailTail() const;

 int32_t __declspec(property(get=__get_headHead, put=__set_headHead))  headHead;

constexpr void __set_headHead(int32_t value) ;

constexpr int32_t __get_headHead() const;

 ::System::Collections::Concurrent::ConcurrentQueue_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Collections::Concurrent::ConcurrentQueue_1<T> value) ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T> __get___4__this() const;

 int32_t __declspec(property(get=__get__headTail_5__2, put=__set__headTail_5__2))  _headTail_5__2;

constexpr void __set__headTail_5__2(int32_t value) ;

constexpr int32_t __get__headTail_5__2() const;

 int32_t __declspec(property(get=__get__i_5__3, put=__set__i_5__3))  _i_5__3;

constexpr void __set__i_5__3(int32_t value) ;

constexpr int32_t __get__i_5__3() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __declspec(property(get=__get__s_5__4, put=__set__s_5__4))  _s_5__4;

constexpr void __set__s_5__4(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __get__s_5__4() const;

 int32_t __declspec(property(get=__get__i_5__5, put=__set__i_5__5))  _i_5__5;

constexpr void __set__i_5__5(int32_t value) ;

constexpr int32_t __get__i_5__5() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28(int32_t __1__state) ;

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
} // namespace end def System::Collections::Concurrent
// Type: System.Collections.Concurrent::ConcurrentQueue`1
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3788))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3788), inst: 2 })
// CS Name: System.Collections.Concurrent.ConcurrentQueue`1
class CORDL_TYPE ConcurrentQueue_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Enumerate_d__28 = ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>;

using Segment = ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>;

/// @brief Convert operator to ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>
constexpr operator  ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcurrentQueue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentQueue_1", modifiers: " const&", def_value: None }]
constexpr ConcurrentQueue_1(ConcurrentQueue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentQueue_1", modifiers: "&&", def_value: None }]
constexpr ConcurrentQueue_1(ConcurrentQueue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcurrentQueue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConcurrentQueue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcurrentQueue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcurrentQueue_1& operator=(ConcurrentQueue_1&& o) noexcept = default;
  constexpr ConcurrentQueue_1& operator=(ConcurrentQueue_1 const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__crossSegmentLock, put=__set__crossSegmentLock))  _crossSegmentLock;

constexpr void __set__crossSegmentLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__crossSegmentLock() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __get__tail() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> __get__head() const;


// Properties

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters []
explicit ConcurrentQueue_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item) ;

/// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake(ByRef<T> item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<T> ToArray() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method GetCount addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t GetCount(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> s, int32_t head, int32_t tail) ;

/// @brief Method GetCount addr 0x0 size 0xffffffffffffffff virtual false final false
static int64_t GetCount(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> head, int32_t headHead, ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> tail, int32_t tailTail) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method SnapForObservation addr 0x0 size 0xffffffffffffffff virtual false final false
 void SnapForObservation(ByRef<::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>> head, ByRef<int32_t> headHead, ByRef<::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>> tail, ByRef<int32_t> tailTail) ;

/// @brief Method GetItemWhenAvailable addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetItemWhenAvailable(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> segment, int32_t i) ;

/// @brief Method Enumerate addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IEnumerator_1<T> Enumerate(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> head, int32_t headHead, ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> tail, int32_t tailTail) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(T item) ;

/// @brief Method EnqueueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
 void EnqueueSlow(T item) ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<T> result) ;

/// @brief Method TryDequeueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeueSlow(ByRef<T> item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentQueue_1, "System.Collections.Concurrent", "ConcurrentQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1__Segment, "System.Collections.Concurrent", "ConcurrentQueue`1/Segment");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28, "System.Collections.Concurrent", "ConcurrentQueue`1/<Enumerate>d__28");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::______System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot, "System.Collections.Concurrent", "ConcurrentQueue`1/Segment/Slot");
