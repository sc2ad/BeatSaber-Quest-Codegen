#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
class ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView;
}
namespace System::Threading {
struct SpinLock;
}
// Type: ::SystemThreading_SpinLockDebugView
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2699))
// CS Name: System.Threading.SpinLock::SystemThreading_SpinLockDebugView
class CORDL_TYPE ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Threading__SpinLock__SystemThreading_SpinLockDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__SpinLock__SystemThreading_SpinLockDebugView", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView(____System__Threading__SpinLock__SystemThreading_SpinLockDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__SpinLock__SystemThreading_SpinLockDebugView", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView(____System__Threading__SpinLock__SystemThreading_SpinLockDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView& operator=(____System__Threading__SpinLock__SystemThreading_SpinLockDebugView&& o) noexcept = default;
  constexpr ____System__Threading__SpinLock__SystemThreading_SpinLockDebugView& operator=(____System__Threading__SpinLock__SystemThreading_SpinLockDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::SpinLock
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2700))
// CS Name: System.Threading.SpinLock
struct CORDL_TYPE SpinLock : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using SystemThreading_SpinLockDebugView = ::System::Threading::____System__Threading__SpinLock__SystemThreading_SpinLockDebugView;

// Ctor Parameters [CppParam { name: "m_owner", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpinLock(int32_t m_owner) noexcept;


                    constexpr SpinLock(SpinLock const&) = default;
                    constexpr SpinLock(SpinLock&&) = default;
                    constexpr SpinLock& operator=(SpinLock const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpinLock& operator=(SpinLock&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpinLock(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_owner, put=__set_m_owner))  m_owner;

constexpr void __set_m_owner(int32_t value) ;

constexpr int32_t __get_m_owner() const;

static int32_t __declspec(property(get=__get_MAXIMUM_WAITERS, put=__set_MAXIMUM_WAITERS))  MAXIMUM_WAITERS;

static void __set_MAXIMUM_WAITERS(int32_t value) ;

static int32_t __get_MAXIMUM_WAITERS() ;


// Properties

 bool __declspec(property(get=get_IsHeldByCurrentThread))  IsHeldByCurrentThread;

 bool __declspec(property(get=get_IsThreadOwnerTrackingEnabled))  IsThreadOwnerTrackingEnabled;


// Methods

/// @brief Method .ctor addr 0x24a891c size 0x38 virtual false final false
 void _ctor(bool enableThreadOwnerTracking) ;

/// @brief Method Enter addr 0x24a8954 size 0x7c virtual false final false
 void Enter(ByRef<bool> lockTaken) ;

/// @brief Method TryEnter addr 0x24a8ea8 size 0x98 virtual false final false
 void TryEnter(int32_t millisecondsTimeout, ByRef<bool> lockTaken) ;

/// @brief Method ContinueTryEnter addr 0x24a8a20 size 0x488 virtual false final false
 void ContinueTryEnter(int32_t millisecondsTimeout, ByRef<bool> lockTaken) ;

/// @brief Method DecrementWaiters addr 0x24a90d4 size 0x60 virtual false final false
 void DecrementWaiters() ;

/// @brief Method ContinueTryEnterWithThreadTracking addr 0x24a8fac size 0x128 virtual false final false
 void ContinueTryEnterWithThreadTracking(int32_t millisecondsTimeout, uint32_t startTime, ByRef<bool> lockTaken) ;

/// @brief Method Exit addr 0x24a9264 size 0x50 virtual false final false
 void Exit(bool useMemoryBarrier) ;

/// @brief Method ExitSlowPath addr 0x24a92b4 size 0xe0 virtual false final false
 void ExitSlowPath(bool useMemoryBarrier) ;

/// @brief Method get_IsHeldByCurrentThread addr 0x24a9394 size 0xa0 virtual false final false
 bool get_IsHeldByCurrentThread() ;

/// @brief Method get_IsThreadOwnerTrackingEnabled addr 0x24a8f90 size 0x1c virtual false final false
 bool get_IsThreadOwnerTrackingEnabled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::____System__Threading__SpinLock__SystemThreading_SpinLockDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::____System__Threading__SpinLock__SystemThreading_SpinLockDebugView, "System.Threading", "SpinLock/SystemThreading_SpinLockDebugView");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SpinLock, "System.Threading", "SpinLock");
