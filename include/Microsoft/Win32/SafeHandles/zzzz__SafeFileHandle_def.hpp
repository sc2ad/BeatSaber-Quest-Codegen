#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
// Type: Microsoft.Win32.SafeHandles::SafeFileHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2299))
// CS Name: Microsoft.Win32.SafeHandles.SafeFileHandle
class CORDL_TYPE SafeFileHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeFileHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeFileHandle", modifiers: " const&", def_value: None }]
constexpr SafeFileHandle(SafeFileHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeFileHandle", modifiers: "&&", def_value: None }]
constexpr SafeFileHandle(SafeFileHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeFileHandle(void* ptr) noexcept : Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(ptr) {
}


  constexpr SafeFileHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeFileHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeFileHandle& operator=(SafeFileHandle&& o) noexcept = default;
  constexpr SafeFileHandle& operator=(SafeFileHandle const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "preexistingHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }]
explicit SafeFileHandle(::cordl_internals::intptr_t preexistingHandle, bool ownsHandle) ;

/// @brief Method .ctor addr 0x22beaf4 size 0x28 virtual false final false
 void _ctor(::cordl_internals::intptr_t preexistingHandle, bool ownsHandle) ;

/// @brief Method ReleaseHandle addr 0x22beb80 size 0x7c virtual true final false
 bool ReleaseHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(Microsoft::Win32::SafeHandles::SafeFileHandle);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeFileHandle, "Microsoft.Win32.SafeHandles", "SafeFileHandle");
