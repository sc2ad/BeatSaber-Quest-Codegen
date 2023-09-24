#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
// Type: Microsoft.Win32.SafeHandles::SafePasswordHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3328))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2298))
// CS Name: Microsoft.Win32.SafeHandles.SafePasswordHandle
class CORDL_TYPE SafePasswordHandle : public System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafePasswordHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafePasswordHandle", modifiers: " const&", def_value: None }]
constexpr SafePasswordHandle(SafePasswordHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafePasswordHandle", modifiers: "&&", def_value: None }]
constexpr SafePasswordHandle(SafePasswordHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafePasswordHandle(void* ptr) noexcept : System::Runtime::InteropServices::SafeHandle(ptr) {
}


  constexpr SafePasswordHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafePasswordHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafePasswordHandle& operator=(SafePasswordHandle&& o) noexcept = default;
  constexpr SafePasswordHandle& operator=(SafePasswordHandle const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsInvalid))  IsInvalid;


// Methods

/// @brief Method CreateHandle addr 0x22be858 size 0x58 virtual false final false
 ::cordl_internals::intptr_t CreateHandle(::StringW password) ;

/// @brief Method FreeHandle addr 0x22be8b0 size 0x5c virtual false final false
 void FreeHandle() ;

static Microsoft::Win32::SafeHandles::SafePasswordHandle New_ctor(::StringW password) ;

/// @brief Method .ctor addr 0x22be90c size 0x78 virtual false final false
 void _ctor(::StringW password) ;

/// @brief Method ReleaseHandle addr 0x22be984 size 0x7c virtual true final false
 bool ReleaseHandle() ;

/// @brief Method Dispose addr 0x22bea00 size 0x70 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_IsInvalid addr 0x22bea70 size 0x28 virtual true final false
 bool get_IsInvalid() ;

/// @brief Method Mono_DangerousGetString addr 0x22bea98 size 0x5c virtual false final false
 ::StringW Mono_DangerousGetString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(Microsoft::Win32::SafeHandles::SafePasswordHandle);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafePasswordHandle, "Microsoft.Win32.SafeHandles", "SafePasswordHandle");
