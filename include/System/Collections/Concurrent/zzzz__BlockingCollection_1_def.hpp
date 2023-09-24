#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Collections::Concurrent {
template<typename T>
class IProducerConsumerCollection_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class BlockingCollection_1;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type T>
class BlockingCollection_1<T>;
}
// Type: System.Collections.Concurrent::BlockingCollection`1
// Type: System.Collections.Concurrent::BlockingCollection`1
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8375))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8375), inst: 2 })
// CS Name: System.Collections.Concurrent.BlockingCollection`1
class CORDL_TYPE BlockingCollection_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BlockingCollection_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockingCollection_1", modifiers: " const&", def_value: None }]
constexpr BlockingCollection_1(BlockingCollection_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockingCollection_1", modifiers: "&&", def_value: None }]
constexpr BlockingCollection_1(BlockingCollection_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlockingCollection_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BlockingCollection_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlockingCollection_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlockingCollection_1& operator=(BlockingCollection_1&& o) noexcept = default;
  constexpr BlockingCollection_1& operator=(BlockingCollection_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Concurrent::IProducerConsumerCollection_1<T> __declspec(property(get=__get__collection, put=__set__collection))  _collection;

constexpr void __set__collection(System::Collections::Concurrent::IProducerConsumerCollection_1<T> value) ;

constexpr System::Collections::Concurrent::IProducerConsumerCollection_1<T> __get__collection() const;

 int32_t __declspec(property(get=__get__boundedCapacity, put=__set__boundedCapacity))  _boundedCapacity;

constexpr void __set__boundedCapacity(int32_t value) ;

constexpr int32_t __get__boundedCapacity() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__freeNodes, put=__set__freeNodes))  _freeNodes;

constexpr void __set__freeNodes(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__freeNodes() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__occupiedNodes, put=__set__occupiedNodes))  _occupiedNodes;

constexpr void __set__occupiedNodes(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__occupiedNodes() const;

 bool __declspec(property(get=__get__isDisposed, put=__set__isDisposed))  _isDisposed;

constexpr void __set__isDisposed(bool value) ;

constexpr bool __get__isDisposed() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__consumersCancellationTokenSource, put=__set__consumersCancellationTokenSource))  _consumersCancellationTokenSource;

constexpr void __set__consumersCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__consumersCancellationTokenSource() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__producersCancellationTokenSource, put=__set__producersCancellationTokenSource))  _producersCancellationTokenSource;

constexpr void __set__producersCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__producersCancellationTokenSource() const;

 int32_t __declspec(property(get=__get__currentAdders, put=__set__currentAdders))  _currentAdders;

constexpr void __set__currentAdders(int32_t value) ;

constexpr int32_t __get__currentAdders() const;


// Properties

 bool __declspec(property(get=get_IsAddingCompleted))  IsAddingCompleted;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;


// Methods

/// @brief Method get_IsAddingCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsAddingCompleted() ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

static System::Collections::Concurrent::BlockingCollection_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Collections::Concurrent::BlockingCollection_1<T> New_ctor(System::Collections::Concurrent::IProducerConsumerCollection_1<T> collection) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Concurrent::IProducerConsumerCollection_1<T> collection) ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Initialize(System::Collections::Concurrent::IProducerConsumerCollection_1<T> collection, int32_t boundedCapacity, int32_t collectionCount) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method TryAddWithNoTimeValidation addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryAddWithNoTimeValidation(T item, int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Take addr 0x0 size 0xffffffffffffffff virtual false final false
 T Take() ;

/// @brief Method TryTake addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryTake(ByRef<T> item, int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method TryTakeWithNoTimeValidation addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryTakeWithNoTimeValidation(ByRef<T> item, int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken, System::Threading::CancellationTokenSource combinedTokenSource) ;

/// @brief Method CompleteAdding addr 0x0 size 0xffffffffffffffff virtual false final false
 void CompleteAdding() ;

/// @brief Method CancelWaitingConsumers addr 0x0 size 0xffffffffffffffff virtual false final false
 void CancelWaitingConsumers() ;

/// @brief Method CancelWaitingProducers addr 0x0 size 0xffffffffffffffff virtual false final false
 void CancelWaitingProducers() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ValidateMillisecondsTimeout addr 0x0 size 0xffffffffffffffff virtual false final false
static void ValidateMillisecondsTimeout(int32_t millisecondsTimeout) ;

/// @brief Method CheckDisposed addr 0x0 size 0xffffffffffffffff virtual false final false
 void CheckDisposed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::BlockingCollection_1, "System.Collections.Concurrent", "BlockingCollection`1");
