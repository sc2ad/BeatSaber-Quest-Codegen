#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessWaitHandle;
}
// Type: System.Diagnostics::ProcessWaitHandle
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2739))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7808))
// CS Name: System.Diagnostics.ProcessWaitHandle
class CORDL_TYPE ProcessWaitHandle : public System::Threading::WaitHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ProcessWaitHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessWaitHandle", modifiers: " const&", def_value: None }]
constexpr ProcessWaitHandle(ProcessWaitHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessWaitHandle", modifiers: "&&", def_value: None }]
constexpr ProcessWaitHandle(ProcessWaitHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProcessWaitHandle(void* ptr) noexcept : System::Threading::WaitHandle(ptr) {
}


  constexpr ProcessWaitHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProcessWaitHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProcessWaitHandle& operator=(ProcessWaitHandle&& o) noexcept = default;
  constexpr ProcessWaitHandle& operator=(ProcessWaitHandle const& o) noexcept = default;
                


// Methods

static System::Diagnostics::ProcessWaitHandle New_ctor(Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle) ;

/// @brief Method .ctor addr 0x27dd4c4 size 0x154 virtual false final false
 void _ctor(Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::ProcessWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessWaitHandle, "System.Diagnostics", "ProcessWaitHandle");
