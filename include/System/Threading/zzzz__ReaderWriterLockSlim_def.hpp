#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Threading {
class ReaderWriterCount;
}
namespace System::Threading {
struct LockRecursionPolicy;
}
namespace System::Threading {
struct System__Threading__ReaderWriterLockSlim__TimeoutTracker;
}
namespace System::Threading {
class EventWaitHandle;
}
// Forward declare root types
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System::Threading {
struct System__Threading__ReaderWriterLockSlim__TimeoutTracker;
}
// Type: ::TimeoutTracker
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14600))
// CS Name: System.Threading.ReaderWriterLockSlim::TimeoutTracker
struct CORDL_TYPE System__Threading__ReaderWriterLockSlim__TimeoutTracker : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_total", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_start", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Threading__ReaderWriterLockSlim__TimeoutTracker(int32_t m_total, int32_t m_start) noexcept;


                    constexpr System__Threading__ReaderWriterLockSlim__TimeoutTracker(System__Threading__ReaderWriterLockSlim__TimeoutTracker const&) = default;
                    constexpr System__Threading__ReaderWriterLockSlim__TimeoutTracker(System__Threading__ReaderWriterLockSlim__TimeoutTracker&&) = default;
                    constexpr System__Threading__ReaderWriterLockSlim__TimeoutTracker& operator=(System__Threading__ReaderWriterLockSlim__TimeoutTracker const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__ReaderWriterLockSlim__TimeoutTracker& operator=(System__Threading__ReaderWriterLockSlim__TimeoutTracker&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ReaderWriterLockSlim__TimeoutTracker(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_total, put=__set_m_total))  m_total;

constexpr void __set_m_total(int32_t value) ;

constexpr int32_t __get_m_total() const;

 int32_t __declspec(property(get=__get_m_start, put=__set_m_start))  m_start;

constexpr void __set_m_start(int32_t value) ;

constexpr int32_t __get_m_start() const;


// Properties

 int32_t __declspec(property(get=get_RemainingMilliseconds))  RemainingMilliseconds;

 bool __declspec(property(get=get_IsExpired))  IsExpired;


// Methods

/// @brief Method .ctor addr 0x26828a4 size 0x88 virtual false final false
 void _ctor(int32_t millisecondsTimeout) ;

/// @brief Method get_RemainingMilliseconds addr 0x26844b8 size 0x48 virtual false final false
 int32_t get_RemainingMilliseconds() ;

/// @brief Method get_IsExpired addr 0x2683048 size 0x18 virtual false final false
 bool get_IsExpired() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::ReaderWriterLockSlim
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14601))
// CS Name: System.Threading.ReaderWriterLockSlim
class CORDL_TYPE ReaderWriterLockSlim : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TimeoutTracker = System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ReaderWriterLockSlim() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: " const&", def_value: None }]
constexpr ReaderWriterLockSlim(ReaderWriterLockSlim const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: "&&", def_value: None }]
constexpr ReaderWriterLockSlim(ReaderWriterLockSlim&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReaderWriterLockSlim(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReaderWriterLockSlim& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReaderWriterLockSlim& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReaderWriterLockSlim& operator=(ReaderWriterLockSlim&& o) noexcept = default;
  constexpr ReaderWriterLockSlim& operator=(ReaderWriterLockSlim const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_fIsReentrant, put=__set_fIsReentrant))  fIsReentrant;

constexpr void __set_fIsReentrant(bool value) ;

constexpr bool __get_fIsReentrant() const;

 int32_t __declspec(property(get=__get_myLock, put=__set_myLock))  myLock;

constexpr void __set_myLock(int32_t value) ;

constexpr int32_t __get_myLock() const;

/// @brief Field LockSpinCycles offset 0
static constexpr int32_t  LockSpinCycles{20};

/// @brief Field LockSpinCount offset 0
static constexpr int32_t  LockSpinCount{10};

/// @brief Field LockSleep0Count offset 0
static constexpr int32_t  LockSleep0Count{5};

 uint32_t __declspec(property(get=__get_numWriteWaiters, put=__set_numWriteWaiters))  numWriteWaiters;

constexpr void __set_numWriteWaiters(uint32_t value) ;

constexpr uint32_t __get_numWriteWaiters() const;

 uint32_t __declspec(property(get=__get_numReadWaiters, put=__set_numReadWaiters))  numReadWaiters;

constexpr void __set_numReadWaiters(uint32_t value) ;

constexpr uint32_t __get_numReadWaiters() const;

 uint32_t __declspec(property(get=__get_numWriteUpgradeWaiters, put=__set_numWriteUpgradeWaiters))  numWriteUpgradeWaiters;

constexpr void __set_numWriteUpgradeWaiters(uint32_t value) ;

constexpr uint32_t __get_numWriteUpgradeWaiters() const;

 uint32_t __declspec(property(get=__get_numUpgradeWaiters, put=__set_numUpgradeWaiters))  numUpgradeWaiters;

constexpr void __set_numUpgradeWaiters(uint32_t value) ;

constexpr uint32_t __get_numUpgradeWaiters() const;

 bool __declspec(property(get=__get_fNoWaiters, put=__set_fNoWaiters))  fNoWaiters;

constexpr void __set_fNoWaiters(bool value) ;

constexpr bool __get_fNoWaiters() const;

 int32_t __declspec(property(get=__get_upgradeLockOwnerId, put=__set_upgradeLockOwnerId))  upgradeLockOwnerId;

constexpr void __set_upgradeLockOwnerId(int32_t value) ;

constexpr int32_t __get_upgradeLockOwnerId() const;

 int32_t __declspec(property(get=__get_writeLockOwnerId, put=__set_writeLockOwnerId))  writeLockOwnerId;

constexpr void __set_writeLockOwnerId(int32_t value) ;

constexpr int32_t __get_writeLockOwnerId() const;

 System::Threading::EventWaitHandle __declspec(property(get=__get_writeEvent, put=__set_writeEvent))  writeEvent;

constexpr void __set_writeEvent(System::Threading::EventWaitHandle value) ;

constexpr System::Threading::EventWaitHandle __get_writeEvent() const;

 System::Threading::EventWaitHandle __declspec(property(get=__get_readEvent, put=__set_readEvent))  readEvent;

constexpr void __set_readEvent(System::Threading::EventWaitHandle value) ;

constexpr System::Threading::EventWaitHandle __get_readEvent() const;

 System::Threading::EventWaitHandle __declspec(property(get=__get_upgradeEvent, put=__set_upgradeEvent))  upgradeEvent;

constexpr void __set_upgradeEvent(System::Threading::EventWaitHandle value) ;

constexpr System::Threading::EventWaitHandle __get_upgradeEvent() const;

 System::Threading::EventWaitHandle __declspec(property(get=__get_waitUpgradeEvent, put=__set_waitUpgradeEvent))  waitUpgradeEvent;

constexpr void __set_waitUpgradeEvent(System::Threading::EventWaitHandle value) ;

constexpr System::Threading::EventWaitHandle __get_waitUpgradeEvent() const;

static int64_t __declspec(property(get=__get_s_nextLockID, put=__set_s_nextLockID))  s_nextLockID;

static void __set_s_nextLockID(int64_t value) ;

static int64_t __get_s_nextLockID() ;

 int64_t __declspec(property(get=__get_lockID, put=__set_lockID))  lockID;

constexpr void __set_lockID(int64_t value) ;

constexpr int64_t __get_lockID() const;

static System::Threading::ReaderWriterCount __declspec(property(get=__get_t_rwc, put=__set_t_rwc))  t_rwc;

static void __set_t_rwc(System::Threading::ReaderWriterCount value) ;

static System::Threading::ReaderWriterCount __get_t_rwc() ;

 bool __declspec(property(get=__get_fUpgradeThreadHoldingRead, put=__set_fUpgradeThreadHoldingRead))  fUpgradeThreadHoldingRead;

constexpr void __set_fUpgradeThreadHoldingRead(bool value) ;

constexpr bool __get_fUpgradeThreadHoldingRead() const;

/// @brief Field MaxSpinCount offset 0
static constexpr int32_t  MaxSpinCount{20};

 uint32_t __declspec(property(get=__get_owners, put=__set_owners))  owners;

constexpr void __set_owners(uint32_t value) ;

constexpr uint32_t __get_owners() const;

/// @brief Field WRITER_HELD offset 0
static constexpr uint32_t  WRITER_HELD{2147483648u};

/// @brief Field WAITING_WRITERS offset 0
static constexpr uint32_t  WAITING_WRITERS{1073741824u};

/// @brief Field WAITING_UPGRADER offset 0
static constexpr uint32_t  WAITING_UPGRADER{536870912u};

/// @brief Field MAX_READER offset 0
static constexpr uint32_t  MAX_READER{268435454u};

/// @brief Field READER_MASK offset 0
static constexpr uint32_t  READER_MASK{268435455u};

 bool __declspec(property(get=__get_fDisposed, put=__set_fDisposed))  fDisposed;

constexpr void __set_fDisposed(bool value) ;

constexpr bool __get_fDisposed() const;


// Properties

 bool __declspec(property(get=get_IsReadLockHeld))  IsReadLockHeld;

 bool __declspec(property(get=get_IsUpgradeableReadLockHeld))  IsUpgradeableReadLockHeld;

 bool __declspec(property(get=get_IsWriteLockHeld))  IsWriteLockHeld;

 int32_t __declspec(property(get=get_RecursiveReadCount))  RecursiveReadCount;

 int32_t __declspec(property(get=get_RecursiveUpgradeCount))  RecursiveUpgradeCount;

 int32_t __declspec(property(get=get_RecursiveWriteCount))  RecursiveWriteCount;

 int32_t __declspec(property(get=get_WaitingReadCount))  WaitingReadCount;

 int32_t __declspec(property(get=get_WaitingUpgradeCount))  WaitingUpgradeCount;

 int32_t __declspec(property(get=get_WaitingWriteCount))  WaitingWriteCount;


// Methods

/// @brief Method InitializeThreadCounts addr 0x2682650 size 0xc virtual false final false
 void InitializeThreadCounts() ;

static System::Threading::ReaderWriterLockSlim New_ctor(System::Threading::LockRecursionPolicy recursionPolicy) ;

/// @brief Method .ctor addr 0x268265c size 0x84 virtual false final false
 void _ctor(System::Threading::LockRecursionPolicy recursionPolicy) ;

/// @brief Method IsRWEntryEmpty addr 0x26826e0 size 0x40 virtual false final false
static bool IsRWEntryEmpty(System::Threading::ReaderWriterCount rwc) ;

/// @brief Method IsRwHashEntryChanged addr 0x2682720 size 0x24 virtual false final false
 bool IsRwHashEntryChanged(System::Threading::ReaderWriterCount lrwc) ;

/// @brief Method GetThreadRWCount addr 0x2682744 size 0x12c virtual false final false
 System::Threading::ReaderWriterCount GetThreadRWCount(bool dontAllocate) ;

/// @brief Method EnterReadLock addr 0x2682870 size 0x8 virtual false final false
 void EnterReadLock() ;

/// @brief Method TryEnterReadLock addr 0x2682878 size 0x2c virtual false final false
 bool TryEnterReadLock(int32_t millisecondsTimeout) ;

/// @brief Method TryEnterReadLock addr 0x268292c size 0x4 virtual false final false
 bool TryEnterReadLock(System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker timeout) ;

/// @brief Method TryEnterReadLockCore addr 0x2682930 size 0x700 virtual false final false
 bool TryEnterReadLockCore(System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker timeout) ;

/// @brief Method EnterWriteLock addr 0x2683320 size 0x8 virtual false final false
 void EnterWriteLock() ;

/// @brief Method TryEnterWriteLock addr 0x2683328 size 0x2c virtual false final false
 bool TryEnterWriteLock(int32_t millisecondsTimeout) ;

/// @brief Method TryEnterWriteLock addr 0x2683354 size 0x4 virtual false final false
 bool TryEnterWriteLock(System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker timeout) ;

/// @brief Method TryEnterWriteLockCore addr 0x2683358 size 0x668 virtual false final false
 bool TryEnterWriteLockCore(System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker timeout) ;

/// @brief Method EnterUpgradeableReadLock addr 0x26839ec size 0x8 virtual false final false
 void EnterUpgradeableReadLock() ;

/// @brief Method TryEnterUpgradeableReadLock addr 0x26839f4 size 0x2c virtual false final false
 bool TryEnterUpgradeableReadLock(int32_t millisecondsTimeout) ;

/// @brief Method TryEnterUpgradeableReadLock addr 0x2683a20 size 0x4 virtual false final false
 bool TryEnterUpgradeableReadLock(System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker timeout) ;

/// @brief Method TryEnterUpgradeableReadLockCore addr 0x2683a24 size 0x504 virtual false final false
 bool TryEnterUpgradeableReadLockCore(System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker timeout) ;

/// @brief Method ExitReadLock addr 0x2683f28 size 0x16c virtual false final false
 void ExitReadLock() ;

/// @brief Method ExitWriteLock addr 0x26840c0 size 0x230 virtual false final false
 void ExitWriteLock() ;

/// @brief Method ExitUpgradeableReadLock addr 0x2684300 size 0x198 virtual false final false
 void ExitUpgradeableReadLock() ;

/// @brief Method LazyCreateEvent addr 0x26830f8 size 0x100 virtual false final false
 void LazyCreateEvent(ByRef<System::Threading::EventWaitHandle> waitEvent, bool makeAutoResetEvent) ;

/// @brief Method WaitOnEvent addr 0x26831f8 size 0x128 virtual false final false
 bool WaitOnEvent(System::Threading::EventWaitHandle waitEvent, ByRef<uint32_t> numWaiters, System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker timeout, bool isWriteWaiter) ;

/// @brief Method ExitAndWakeUpAppropriateWaiters addr 0x2684094 size 0x2c virtual false final false
 void ExitAndWakeUpAppropriateWaiters() ;

/// @brief Method ExitAndWakeUpAppropriateWaitersPreferringWriters addr 0x2684500 size 0x84 virtual false final false
 void ExitAndWakeUpAppropriateWaitersPreferringWriters() ;

/// @brief Method ExitAndWakeUpAppropriateReadWaiters addr 0x2684584 size 0x94 virtual false final false
 void ExitAndWakeUpAppropriateReadWaiters() ;

/// @brief Method IsWriterAcquired addr 0x26839c0 size 0x10 virtual false final false
 bool IsWriterAcquired() ;

/// @brief Method SetWriterAcquired addr 0x26839d0 size 0x10 virtual false final false
 void SetWriterAcquired() ;

/// @brief Method ClearWriterAcquired addr 0x26842f0 size 0x10 virtual false final false
 void ClearWriterAcquired() ;

/// @brief Method SetWritersWaiting addr 0x2684498 size 0x10 virtual false final false
 void SetWritersWaiting() ;

/// @brief Method ClearWritersWaiting addr 0x2684618 size 0x10 virtual false final false
 void ClearWritersWaiting() ;

/// @brief Method SetUpgraderWaiting addr 0x26844a8 size 0x10 virtual false final false
 void SetUpgraderWaiting() ;

/// @brief Method ClearUpgraderWaiting addr 0x2684628 size 0x10 virtual false final false
 void ClearUpgraderWaiting() ;

/// @brief Method GetNumReaders addr 0x26839e0 size 0xc virtual false final false
 uint32_t GetNumReaders() ;

/// @brief Method EnterMyLock addr 0x2684638 size 0x34 virtual false final false
 void EnterMyLock() ;

/// @brief Method EnterMyLockSpin addr 0x268466c size 0xd8 virtual false final false
 void EnterMyLockSpin() ;

/// @brief Method ExitMyLock addr 0x2683030 size 0x18 virtual false final false
 void ExitMyLock() ;

/// @brief Method SpinWait addr 0x2683060 size 0x98 virtual false final false
static void SpinWait(int32_t SpinCount) ;

/// @brief Method Dispose addr 0x2684744 size 0x8 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x268474c size 0x140 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method get_IsReadLockHeld addr 0x268488c size 0x18 virtual false final false
 bool get_IsReadLockHeld() ;

/// @brief Method get_IsUpgradeableReadLockHeld addr 0x26848a4 size 0x18 virtual false final false
 bool get_IsUpgradeableReadLockHeld() ;

/// @brief Method get_IsWriteLockHeld addr 0x26848bc size 0x18 virtual false final false
 bool get_IsWriteLockHeld() ;

/// @brief Method get_RecursiveReadCount addr 0x26848d4 size 0x80 virtual false final false
 int32_t get_RecursiveReadCount() ;

/// @brief Method get_RecursiveUpgradeCount addr 0x2684954 size 0xb0 virtual false final false
 int32_t get_RecursiveUpgradeCount() ;

/// @brief Method get_RecursiveWriteCount addr 0x2684a04 size 0xb0 virtual false final false
 int32_t get_RecursiveWriteCount() ;

/// @brief Method get_WaitingReadCount addr 0x2684ab4 size 0x8 virtual false final false
 int32_t get_WaitingReadCount() ;

/// @brief Method get_WaitingUpgradeCount addr 0x2684abc size 0x8 virtual false final false
 int32_t get_WaitingUpgradeCount() ;

/// @brief Method get_WaitingWriteCount addr 0x2684ac4 size 0x8 virtual false final false
 int32_t get_WaitingWriteCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ReaderWriterLockSlim);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ReaderWriterLockSlim, "System.Threading", "ReaderWriterLockSlim");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__ReaderWriterLockSlim__TimeoutTracker, "System.Threading", "ReaderWriterLockSlim/TimeoutTracker");
