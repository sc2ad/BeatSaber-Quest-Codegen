#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
// Forward declare root types
namespace System::Threading {
class NativeEventCalls;
}
// Type: System.Threading::NativeEventCalls
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2743))
// CS Name: System.Threading.NativeEventCalls
class CORDL_TYPE NativeEventCalls : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeEventCalls() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeEventCalls", modifiers: " const&", def_value: None }]
constexpr NativeEventCalls(NativeEventCalls const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeEventCalls", modifiers: "&&", def_value: None }]
constexpr NativeEventCalls(NativeEventCalls&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeEventCalls(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NativeEventCalls& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeEventCalls& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeEventCalls& operator=(NativeEventCalls&& o) noexcept = default;
  constexpr NativeEventCalls& operator=(NativeEventCalls const& o) noexcept = default;
                


// Methods

/// @brief Method CreateEvent_internal addr 0x24b0ddc size 0x58 virtual false final false
static ::cordl_internals::intptr_t CreateEvent_internal(bool manual, bool initial, ::StringW name, ByRef<int32_t> errorCode) ;

/// @brief Method CreateEvent_icall addr 0x24b0e34 size 0xc virtual false final false
static ::cordl_internals::intptr_t CreateEvent_icall(bool manual, bool initial, void* name, int32_t name_length, ByRef<int32_t> errorCode) ;

/// @brief Method SetEvent addr 0x24b0e40 size 0xe0 virtual false final false
static bool SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle handle) ;

/// @brief Method SetEvent_internal addr 0x24b0f20 size 0x4 virtual false final false
static bool SetEvent_internal(::cordl_internals::intptr_t handle) ;

/// @brief Method ResetEvent addr 0x24b0f24 size 0xe0 virtual false final false
static bool ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle handle) ;

/// @brief Method ResetEvent_internal addr 0x24b1004 size 0x4 virtual false final false
static bool ResetEvent_internal(::cordl_internals::intptr_t handle) ;

/// @brief Method CloseEvent_internal addr 0x24b1008 size 0x4 virtual false final false
static void CloseEvent_internal(::cordl_internals::intptr_t handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::NativeEventCalls);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::NativeEventCalls, "System.Threading", "NativeEventCalls");
