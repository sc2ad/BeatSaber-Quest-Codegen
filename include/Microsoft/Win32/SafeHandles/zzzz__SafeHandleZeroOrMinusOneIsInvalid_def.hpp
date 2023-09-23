#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeHandleZeroOrMinusOneIsInvalid;
}
// Type: Microsoft.Win32.SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3328))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2301))
// CS Name: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
class CORDL_TYPE SafeHandleZeroOrMinusOneIsInvalid : public System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeHandleZeroOrMinusOneIsInvalid() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleZeroOrMinusOneIsInvalid", modifiers: " const&", def_value: None }]
constexpr SafeHandleZeroOrMinusOneIsInvalid(SafeHandleZeroOrMinusOneIsInvalid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleZeroOrMinusOneIsInvalid", modifiers: "&&", def_value: None }]
constexpr SafeHandleZeroOrMinusOneIsInvalid(SafeHandleZeroOrMinusOneIsInvalid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeHandleZeroOrMinusOneIsInvalid(void* ptr) noexcept : System::Runtime::InteropServices::SafeHandle(ptr) {
}


  constexpr SafeHandleZeroOrMinusOneIsInvalid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeHandleZeroOrMinusOneIsInvalid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeHandleZeroOrMinusOneIsInvalid& operator=(SafeHandleZeroOrMinusOneIsInvalid&& o) noexcept = default;
  constexpr SafeHandleZeroOrMinusOneIsInvalid& operator=(SafeHandleZeroOrMinusOneIsInvalid const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsInvalid))  IsInvalid;


// Methods

// Ctor Parameters [CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }]
explicit SafeHandleZeroOrMinusOneIsInvalid(bool ownsHandle) ;

/// @brief Method .ctor addr 0x22beb1c size 0x64 virtual false final false
 void _ctor(bool ownsHandle) ;

/// @brief Method get_IsInvalid addr 0x22bec40 size 0x5c virtual true final false
 bool get_IsInvalid() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid, "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid");
