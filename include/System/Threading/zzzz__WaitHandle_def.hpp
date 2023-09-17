#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
struct TimeSpan;
}
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
namespace System {
class IDisposable;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace System::Threading {
class WaitHandle;
}
// Type: System.Threading::WaitHandle
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2739))
// CS Name: System.Threading.WaitHandle
class CORDL_TYPE WaitHandle : public ::System::MarshalByRefObject {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~WaitHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitHandle", modifiers: " const&", def_value: None }]
constexpr WaitHandle(WaitHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitHandle", modifiers: "&&", def_value: None }]
constexpr WaitHandle(WaitHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitHandle(void* ptr) noexcept : ::System::MarshalByRefObject(ptr) {
}


  constexpr WaitHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitHandle& operator=(WaitHandle&& o) noexcept = default;
  constexpr WaitHandle& operator=(WaitHandle const& o) noexcept = default;
                


// Fields

/// @brief Field WaitTimeout offset 0
static constexpr int32_t  WaitTimeout{258};

/// @brief Field MAX_WAITHANDLES offset 0
static constexpr int32_t  MAX_WAITHANDLES{64};

 ::cordl_internals::intptr_t __declspec(property(get=__get_waitHandle, put=__set_waitHandle))  waitHandle;

constexpr void __set_waitHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_waitHandle() const;

 ::Microsoft::Win32::SafeHandles::SafeWaitHandle __declspec(property(get=__get_safeWaitHandle, put=__set_safeWaitHandle))  safeWaitHandle;

constexpr void __set_safeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle value) ;

constexpr ::Microsoft::Win32::SafeHandles::SafeWaitHandle __get_safeWaitHandle() const;

 bool __declspec(property(get=__get_hasThreadAffinity, put=__set_hasThreadAffinity))  hasThreadAffinity;

constexpr void __set_hasThreadAffinity(bool value) ;

constexpr bool __get_hasThreadAffinity() const;

/// @brief Field WAIT_OBJECT_0 offset 0
static constexpr int32_t  WAIT_OBJECT_0{0};

/// @brief Field WAIT_ABANDONED offset 0
static constexpr int32_t  WAIT_ABANDONED{128};

/// @brief Field WAIT_FAILED offset 0
static constexpr int32_t  WAIT_FAILED{2147483647};

/// @brief Field ERROR_TOO_MANY_POSTS offset 0
static constexpr int32_t  ERROR_TOO_MANY_POSTS{298};

/// @brief Field ERROR_NOT_OWNED_BY_CALLER offset 0
static constexpr int32_t  ERROR_NOT_OWNED_BY_CALLER{299};

static ::cordl_internals::intptr_t __declspec(property(get=__get_InvalidHandle, put=__set_InvalidHandle))  InvalidHandle;

static void __set_InvalidHandle(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_InvalidHandle() ;

/// @brief Field MaxWaitHandles offset 0
static constexpr int32_t  MaxWaitHandles{64};


// Properties

 ::cordl_internals::intptr_t __declspec(property(put=set_Handle))  Handle;

 ::Microsoft::Win32::SafeHandles::SafeWaitHandle __declspec(property(get=get_SafeWaitHandle, put=set_SafeWaitHandle))  SafeWaitHandle;


// Methods

// Ctor Parameters []
explicit WaitHandle() ;

/// @brief Method .ctor addr 0x24af844 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x24af860 size 0x6c virtual false final false
 void Init() ;

/// @brief Method set_Handle addr 0x24af8cc size 0xec virtual true final false
 void set_Handle(::cordl_internals::intptr_t value) ;

/// @brief Method get_SafeWaitHandle addr 0x24af9b8 size 0xb8 virtual false final false
 ::Microsoft::Win32::SafeHandles::SafeWaitHandle get_SafeWaitHandle() ;

/// @brief Method set_SafeWaitHandle addr 0x24afa70 size 0x88 virtual false final false
 void set_SafeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle value) ;

/// @brief Method SetHandleInternal addr 0x24afaf8 size 0x34 virtual false final false
 void SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle handle) ;

/// @brief Method WaitOne addr 0x24afb2c size 0x84 virtual true final false
 bool WaitOne(int32_t millisecondsTimeout, bool exitContext) ;

/// @brief Method WaitOne addr 0x24afc30 size 0xcc virtual true final false
 bool WaitOne(::System::TimeSpan timeout, bool exitContext) ;

/// @brief Method WaitOne addr 0x24afcfc size 0x14 virtual true final false
 bool WaitOne() ;

/// @brief Method WaitOne addr 0x24afd10 size 0x10 virtual true final false
 bool WaitOne(int32_t millisecondsTimeout) ;

/// @brief Method WaitOne addr 0x24afd20 size 0x10 virtual true final false
 bool WaitOne(::System::TimeSpan timeout) ;

/// @brief Method WaitOne addr 0x24afbb0 size 0x80 virtual false final false
 bool WaitOne(int64_t timeout, bool exitContext) ;

/// @brief Method InternalWaitOne addr 0x24afd30 size 0xf4 virtual false final false
static bool InternalWaitOne(::System::Runtime::InteropServices::SafeHandle waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext) ;

/// @brief Method WaitAny addr 0x24b0028 size 0x308 virtual false final false
static int32_t WaitAny(::ArrayW<::System::Threading::WaitHandle> waitHandles, int32_t millisecondsTimeout, bool exitContext) ;

/// @brief Method WaitAny addr 0x24b0754 size 0x10c virtual false final false
static int32_t WaitAny(::ArrayW<::System::Threading::WaitHandle> waitHandles, ::System::TimeSpan timeout, bool exitContext) ;

/// @brief Method ThrowAbandonedMutexException addr 0x24affe8 size 0x40 virtual false final false
static void ThrowAbandonedMutexException() ;

/// @brief Method ThrowAbandonedMutexException addr 0x24b0700 size 0x54 virtual false final false
static void ThrowAbandonedMutexException(int32_t location, ::System::Threading::WaitHandle handle) ;

/// @brief Method Close addr 0x24b0860 size 0x70 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x24b08d0 size 0x48 virtual true final false
 void Dispose(bool explicitDisposing) ;

/// @brief Method Dispose addr 0x24b0918 size 0x70 virtual true final true
 void Dispose() ;

/// @brief Method WaitOneNative addr 0x24afe24 size 0x1c4 virtual false final false
static int32_t WaitOneNative(::System::Runtime::InteropServices::SafeHandle waitableSafeHandle, uint32_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext) ;

/// @brief Method WaitMultiple addr 0x24b0330 size 0x3d0 virtual false final false
static int32_t WaitMultiple(::ArrayW<::System::Threading::WaitHandle> waitHandles, int32_t millisecondsTimeout, bool exitContext, bool WaitAll) ;

/// @brief Method Wait_internal addr 0x24b0988 size 0x8 virtual false final false
static int32_t Wait_internal(void* handles, int32_t numHandles, bool waitAll, int32_t ms) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::WaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitHandle, "System.Threading", "WaitHandle");
