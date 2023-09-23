#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include <cstdint>
namespace System::Threading {
class LockQueue;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Threading {
class ReaderWriterLock;
}
// Type: System.Threading::ReaderWriterLock
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2744))
// CS Name: System.Threading.ReaderWriterLock
class CORDL_TYPE ReaderWriterLock : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ReaderWriterLock() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLock", modifiers: " const&", def_value: None }]
constexpr ReaderWriterLock(ReaderWriterLock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLock", modifiers: "&&", def_value: None }]
constexpr ReaderWriterLock(ReaderWriterLock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReaderWriterLock(void* ptr) noexcept : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(ptr) {
}


  constexpr ReaderWriterLock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReaderWriterLock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReaderWriterLock& operator=(ReaderWriterLock&& o) noexcept = default;
  constexpr ReaderWriterLock& operator=(ReaderWriterLock const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_seq_num, put=__set_seq_num))  seq_num;

constexpr void __set_seq_num(int32_t value) ;

constexpr int32_t __get_seq_num() const;

 int32_t __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(int32_t value) ;

constexpr int32_t __get_state() const;

 int32_t __declspec(property(get=__get_readers, put=__set_readers))  readers;

constexpr void __set_readers(int32_t value) ;

constexpr int32_t __get_readers() const;

 int32_t __declspec(property(get=__get_writer_lock_owner, put=__set_writer_lock_owner))  writer_lock_owner;

constexpr void __set_writer_lock_owner(int32_t value) ;

constexpr int32_t __get_writer_lock_owner() const;

 System::Threading::LockQueue __declspec(property(get=__get_writer_queue, put=__set_writer_queue))  writer_queue;

constexpr void __set_writer_queue(System::Threading::LockQueue value) ;

constexpr System::Threading::LockQueue __get_writer_queue() const;

 System::Collections::Hashtable __declspec(property(get=__get_reader_locks, put=__set_reader_locks))  reader_locks;

constexpr void __set_reader_locks(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_reader_locks() const;


// Properties

 bool __declspec(property(get=get_IsWriterLockHeld))  IsWriterLockHeld;


// Methods

// Ctor Parameters []
explicit ReaderWriterLock() ;

/// @brief Method .ctor addr 0x24b100c size 0xd4 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x24b10e0 size 0x8 virtual true final false
 void Finalize() ;

/// @brief Method get_IsWriterLockHeld addr 0x24b10e8 size 0xdc virtual false final false
 bool get_IsWriterLockHeld() ;

/// @brief Method AcquireReaderLock addr 0x24b11c4 size 0x8 virtual false final false
 void AcquireReaderLock(int32_t millisecondsTimeout) ;

/// @brief Method AcquireReaderLock addr 0x24b11cc size 0x39c virtual false final false
 void AcquireReaderLock(int32_t millisecondsTimeout, int32_t initialLockCount) ;

/// @brief Method AcquireWriterLock addr 0x24b1744 size 0x8 virtual false final false
 void AcquireWriterLock(int32_t millisecondsTimeout) ;

/// @brief Method AcquireWriterLock addr 0x24b159c size 0x1a8 virtual false final false
 void AcquireWriterLock(int32_t millisecondsTimeout, int32_t initialLockCount) ;

/// @brief Method ReleaseReaderLock addr 0x24b174c size 0x1ec virtual false final false
 void ReleaseReaderLock() ;

/// @brief Method ReleaseReaderLock addr 0x24b1a68 size 0x120 virtual false final false
 void ReleaseReaderLock(int32_t currentCount, int32_t releaseCount) ;

/// @brief Method ReleaseWriterLock addr 0x24b1938 size 0x130 virtual false final false
 void ReleaseWriterLock() ;

/// @brief Method ReleaseWriterLock addr 0x24b1b88 size 0x60 virtual false final false
 void ReleaseWriterLock(int32_t releaseCount) ;

/// @brief Method HasWriterLock addr 0x24b1568 size 0x34 virtual false final false
 bool HasWriterLock() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ReaderWriterLock);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ReaderWriterLock, "System.Threading", "ReaderWriterLock");
