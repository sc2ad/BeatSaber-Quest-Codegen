#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleMinusOneIsInvalid_def.hpp"
#include <cstdint>
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace System::Net::Sockets {
class SafeSocketHandle;
}
// Type: System.Net.Sockets::SafeSocketHandle
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2302))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8207))
// CS Name: System.Net.Sockets.SafeSocketHandle
class CORDL_TYPE SafeSocketHandle : public Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SafeSocketHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeSocketHandle", modifiers: " const&", def_value: None }]
constexpr SafeSocketHandle(SafeSocketHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeSocketHandle", modifiers: "&&", def_value: None }]
constexpr SafeSocketHandle(SafeSocketHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeSocketHandle(void* ptr) noexcept : Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid(ptr) {
}


  constexpr SafeSocketHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeSocketHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeSocketHandle& operator=(SafeSocketHandle&& o) noexcept = default;
  constexpr SafeSocketHandle& operator=(SafeSocketHandle const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Threading::Thread> __declspec(property(get=__get_blocking_threads, put=__set_blocking_threads))  blocking_threads;

constexpr void __set_blocking_threads(System::Collections::Generic::List_1<System::Threading::Thread> value) ;

constexpr System::Collections::Generic::List_1<System::Threading::Thread> __get_blocking_threads() const;

 System::Collections::Generic::Dictionary_2<System::Threading::Thread,System::Diagnostics::StackTrace> __declspec(property(get=__get_threads_stacktraces, put=__set_threads_stacktraces))  threads_stacktraces;

constexpr void __set_threads_stacktraces(System::Collections::Generic::Dictionary_2<System::Threading::Thread,System::Diagnostics::StackTrace> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Threading::Thread,System::Diagnostics::StackTrace> __get_threads_stacktraces() const;

 bool __declspec(property(get=__get_in_cleanup, put=__set_in_cleanup))  in_cleanup;

constexpr void __set_in_cleanup(bool value) ;

constexpr bool __get_in_cleanup() const;

/// @brief Field SOCKET_CLOSED offset 0
static constexpr int32_t  SOCKET_CLOSED{10004};

/// @brief Field ABORT_RETRIES offset 0
static constexpr int32_t  ABORT_RETRIES{10};

static bool __declspec(property(get=__get_THROW_ON_ABORT_RETRIES, put=__set_THROW_ON_ABORT_RETRIES))  THROW_ON_ABORT_RETRIES;

static void __set_THROW_ON_ABORT_RETRIES(bool value) ;

static bool __get_THROW_ON_ABORT_RETRIES() ;


// Methods

// Ctor Parameters [CppParam { name: "preexistingHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }]
explicit SafeSocketHandle(::cordl_internals::intptr_t preexistingHandle, bool ownsHandle) ;

/// @brief Method .ctor addr 0x276b390 size 0xcc virtual false final false
 void _ctor(::cordl_internals::intptr_t preexistingHandle, bool ownsHandle) ;

/// @brief Method ReleaseHandle addr 0x276b45c size 0x5cc virtual true final false
 bool ReleaseHandle() ;

/// @brief Method RegisterForBlockingSyscall addr 0x276ba28 size 0x148 virtual false final false
 void RegisterForBlockingSyscall() ;

/// @brief Method UnRegisterForBlockingSyscall addr 0x276bb70 size 0x1f0 virtual false final false
 void UnRegisterForBlockingSyscall() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
NEED_NO_BOX(System::Net::Sockets::SafeSocketHandle);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SafeSocketHandle, "System.Net.Sockets", "SafeSocketHandle");
