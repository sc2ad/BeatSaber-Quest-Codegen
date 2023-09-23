#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
// Type: Microsoft.Win32.SafeHandles::SafeWaitHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2300))
// CS Name: Microsoft.Win32.SafeHandles.SafeWaitHandle
class CORDL_TYPE SafeWaitHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeWaitHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeWaitHandle", modifiers: " const&", def_value: None }]
constexpr SafeWaitHandle(SafeWaitHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeWaitHandle", modifiers: "&&", def_value: None }]
constexpr SafeWaitHandle(SafeWaitHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeWaitHandle(void* ptr) noexcept : Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(ptr) {
}


  constexpr SafeWaitHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeWaitHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeWaitHandle& operator=(SafeWaitHandle&& o) noexcept = default;
  constexpr SafeWaitHandle& operator=(SafeWaitHandle const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "existingHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }]
explicit SafeWaitHandle(::cordl_internals::intptr_t existingHandle, bool ownsHandle) ;

/// @brief Method .ctor addr 0x22bebfc size 0x28 virtual false final false
 void _ctor(::cordl_internals::intptr_t existingHandle, bool ownsHandle) ;

/// @brief Method ReleaseHandle addr 0x22bec24 size 0x1c virtual true final false
 bool ReleaseHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(Microsoft::Win32::SafeHandles::SafeWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeWaitHandle, "Microsoft.Win32.SafeHandles", "SafeWaitHandle");
