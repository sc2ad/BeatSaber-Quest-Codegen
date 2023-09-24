#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Type: Microsoft.Win32.SafeHandles::SafeProcessHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7711))
// CS Name: Microsoft.Win32.SafeHandles.SafeProcessHandle
class CORDL_TYPE SafeProcessHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeProcessHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: " const&", def_value: None }]
constexpr SafeProcessHandle(SafeProcessHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: "&&", def_value: None }]
constexpr SafeProcessHandle(SafeProcessHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeProcessHandle(void* ptr) noexcept : Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(ptr) {
}


  constexpr SafeProcessHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeProcessHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeProcessHandle& operator=(SafeProcessHandle&& o) noexcept = default;
  constexpr SafeProcessHandle& operator=(SafeProcessHandle const& o) noexcept = default;
                


// Fields

static Microsoft::Win32::SafeHandles::SafeProcessHandle __declspec(property(get=__get_InvalidHandle, put=__set_InvalidHandle))  InvalidHandle;

static void __set_InvalidHandle(Microsoft::Win32::SafeHandles::SafeProcessHandle value) ;

static Microsoft::Win32::SafeHandles::SafeProcessHandle __get_InvalidHandle() ;


// Methods

static Microsoft::Win32::SafeHandles::SafeProcessHandle New_ctor(::cordl_internals::intptr_t handle) ;

/// @brief Method .ctor addr 0x2699484 size 0x2c virtual false final false
 void _ctor(::cordl_internals::intptr_t handle) ;

static Microsoft::Win32::SafeHandles::SafeProcessHandle New_ctor(::cordl_internals::intptr_t existingHandle, bool ownsHandle) ;

/// @brief Method .ctor addr 0x2699254 size 0x2c virtual false final false
 void _ctor(::cordl_internals::intptr_t existingHandle, bool ownsHandle) ;

/// @brief Method ReleaseHandle addr 0x26994b0 size 0x8 virtual true final false
 bool ReleaseHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(Microsoft::Win32::SafeHandles::SafeProcessHandle);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeProcessHandle, "Microsoft.Win32.SafeHandles", "SafeProcessHandle");
