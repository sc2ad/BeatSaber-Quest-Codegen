#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Forward declare root types
namespace Microsoft::Win32 {
class NativeMethods;
}
// Type: Microsoft.Win32::NativeMethods
namespace Microsoft::Win32 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7710))
// CS Name: Microsoft.Win32.NativeMethods
class CORDL_TYPE NativeMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: " const&", def_value: None }]
constexpr NativeMethods(NativeMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
constexpr NativeMethods(NativeMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeMethods& operator=(NativeMethods&& o) noexcept = default;
  constexpr NativeMethods& operator=(NativeMethods const& o) noexcept = default;
                


// Methods

/// @brief Method DuplicateHandle addr 0x2698f00 size 0x204 virtual false final false
static bool DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::SafeHandle hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<Microsoft::Win32::SafeHandles::SafeWaitHandle> targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions) ;

/// @brief Method DuplicateHandle addr 0x2699104 size 0x150 virtual false final false
static bool DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::HandleRef hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<Microsoft::Win32::SafeHandles::SafeProcessHandle> targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions) ;

/// @brief Method GetCurrentProcess addr 0x2699280 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetCurrentProcess() ;

/// @brief Method GetExitCodeProcess addr 0x2699284 size 0x4 virtual false final false
static bool GetExitCodeProcess(::cordl_internals::intptr_t processHandle, ByRef<int32_t> exitCode) ;

/// @brief Method GetExitCodeProcess addr 0x2699288 size 0xe8 virtual false final false
static bool GetExitCodeProcess(Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle, ByRef<int32_t> exitCode) ;

/// @brief Method GetProcessTimes addr 0x2699370 size 0x4 virtual false final false
static bool GetProcessTimes(::cordl_internals::intptr_t handle, ByRef<int64_t> creation, ByRef<int64_t> exit, ByRef<int64_t> kernel, ByRef<int64_t> user) ;

/// @brief Method GetProcessTimes addr 0x2699374 size 0x108 virtual false final false
static bool GetProcessTimes(Microsoft::Win32::SafeHandles::SafeProcessHandle handle, ByRef<int64_t> creation, ByRef<int64_t> exit, ByRef<int64_t> kernel, ByRef<int64_t> user) ;

/// @brief Method GetCurrentProcessId addr 0x269947c size 0x4 virtual false final false
static int32_t GetCurrentProcessId() ;

/// @brief Method CloseProcess addr 0x2699480 size 0x4 virtual false final false
static bool CloseProcess(::cordl_internals::intptr_t handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32
NEED_NO_BOX(Microsoft::Win32::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::NativeMethods, "Microsoft.Win32", "NativeMethods");
