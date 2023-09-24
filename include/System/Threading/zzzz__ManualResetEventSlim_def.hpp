#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
class ManualResetEventSlim;
}
// Type: System.Threading::ManualResetEventSlim
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2677))
// CS Name: System.Threading.ManualResetEventSlim
class CORDL_TYPE ManualResetEventSlim : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ManualResetEventSlim() = default;

// Ctor Parameters [CppParam { name: "", ty: "ManualResetEventSlim", modifiers: " const&", def_value: None }]
constexpr ManualResetEventSlim(ManualResetEventSlim const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ManualResetEventSlim", modifiers: "&&", def_value: None }]
constexpr ManualResetEventSlim(ManualResetEventSlim&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ManualResetEventSlim(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ManualResetEventSlim& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ManualResetEventSlim& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ManualResetEventSlim& operator=(ManualResetEventSlim&& o) noexcept = default;
  constexpr ManualResetEventSlim& operator=(ManualResetEventSlim const& o) noexcept = default;
                


// Fields

/// @brief Field DEFAULT_SPIN_SP offset 0
static constexpr int32_t  DEFAULT_SPIN_SP{1};

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_lock, put=__set_m_lock))  m_lock;

constexpr void __set_m_lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_lock() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_m_eventObj, put=__set_m_eventObj))  m_eventObj;

constexpr void __set_m_eventObj(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_m_eventObj() const;

 int32_t __declspec(property(get=__get_m_combinedState, put=__set_m_combinedState))  m_combinedState;

constexpr void __set_m_combinedState(int32_t value) ;

constexpr int32_t __get_m_combinedState() const;

/// @brief Field SignalledState_BitMask offset 0
static constexpr int32_t  SignalledState_BitMask{-2147483648};

/// @brief Field SignalledState_ShiftCount offset 0
static constexpr int32_t  SignalledState_ShiftCount{31};

/// @brief Field Dispose_BitMask offset 0
static constexpr int32_t  Dispose_BitMask{1073741824};

/// @brief Field SpinCountState_BitMask offset 0
static constexpr int32_t  SpinCountState_BitMask{1073217536};

/// @brief Field SpinCountState_ShiftCount offset 0
static constexpr int32_t  SpinCountState_ShiftCount{19};

/// @brief Field SpinCountState_MaxValue offset 0
static constexpr int32_t  SpinCountState_MaxValue{2047};

/// @brief Field NumWaitersState_BitMask offset 0
static constexpr int32_t  NumWaitersState_BitMask{524287};

/// @brief Field NumWaitersState_ShiftCount offset 0
static constexpr int32_t  NumWaitersState_ShiftCount{0};

/// @brief Field NumWaitersState_MaxValue offset 0
static constexpr int32_t  NumWaitersState_MaxValue{524287};

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_cancellationTokenCallback, put=__set_s_cancellationTokenCallback))  s_cancellationTokenCallback;

static void __set_s_cancellationTokenCallback(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_cancellationTokenCallback() ;


// Properties

 System::Threading::WaitHandle __declspec(property(get=get_WaitHandle))  WaitHandle;

 bool __declspec(property(get=get_IsSet, put=set_IsSet))  IsSet;

 int32_t __declspec(property(get=get_SpinCount, put=set_SpinCount))  SpinCount;

 int32_t __declspec(property(get=get_Waiters, put=set_Waiters))  Waiters;


// Methods

/// @brief Method get_WaitHandle addr 0x24a3920 size 0x3c virtual false final false
 System::Threading::WaitHandle get_WaitHandle() ;

/// @brief Method get_IsSet addr 0x24a3b28 size 0x5c virtual false final false
 bool get_IsSet() ;

/// @brief Method set_IsSet addr 0x24a3b8c size 0x20 virtual false final false
 void set_IsSet(bool value) ;

/// @brief Method get_SpinCount addr 0x24a3c50 size 0x5c virtual false final false
 int32_t get_SpinCount() ;

/// @brief Method set_SpinCount addr 0x24a3cb8 size 0x34 virtual false final false
 void set_SpinCount(int32_t value) ;

/// @brief Method get_Waiters addr 0x24a3cec size 0x5c virtual false final false
 int32_t get_Waiters() ;

/// @brief Method set_Waiters addr 0x24a3d48 size 0x94 virtual false final false
 void set_Waiters(int32_t value) ;

static System::Threading::ManualResetEventSlim New_ctor(bool initialState) ;

/// @brief Method .ctor addr 0x24a3ddc size 0x7c virtual false final false
 void _ctor(bool initialState) ;

static System::Threading::ManualResetEventSlim New_ctor(bool initialState, int32_t spinCount) ;

/// @brief Method .ctor addr 0x24a3f08 size 0x120 virtual false final false
 void _ctor(bool initialState, int32_t spinCount) ;

/// @brief Method Initialize addr 0x24a3e58 size 0xb0 virtual false final false
 void Initialize(bool initialState, int32_t spinCount) ;

/// @brief Method EnsureLockObjectCreated addr 0x24a4028 size 0x88 virtual false final false
 void EnsureLockObjectCreated() ;

/// @brief Method LazyInitializeEvent addr 0x24a39c0 size 0x168 virtual false final false
 bool LazyInitializeEvent() ;

/// @brief Method Set addr 0x24a4134 size 0x8 virtual false final false
 void Set() ;

/// @brief Method Set addr 0x24a413c size 0x1ac virtual false final false
 void Set(bool duringCancellation) ;

/// @brief Method Wait addr 0x24a4340 size 0x450 virtual false final false
 bool Wait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Dispose addr 0x24a4888 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x24a48f4 size 0xf4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ThrowIfDisposed addr 0x24a395c size 0x64 virtual false final false
 void ThrowIfDisposed() ;

/// @brief Method CancellationTokenCallback addr 0x24a49e8 size 0x120 virtual false final false
static void CancellationTokenCallback(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method UpdateStateAtomically addr 0x24a3bac size 0xa4 virtual false final false
 void UpdateStateAtomically(int32_t newBits, int32_t updateBitsMask) ;

/// @brief Method ExtractStatePortionAndShiftRight addr 0x24a3cac size 0xc virtual false final false
static int32_t ExtractStatePortionAndShiftRight(int32_t state, int32_t mask, int32_t rightBitShiftCount) ;

/// @brief Method ExtractStatePortion addr 0x24a3b84 size 0x8 virtual false final false
static int32_t ExtractStatePortion(int32_t state, int32_t mask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ManualResetEventSlim);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ManualResetEventSlim, "System.Threading", "ManualResetEventSlim");
