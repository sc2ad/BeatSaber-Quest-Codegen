#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeHandleMinusOneIsInvalid;
}
// Type: Microsoft.Win32.SafeHandles::SafeHandleMinusOneIsInvalid
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3328))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2302))
// CS Name: Microsoft.Win32.SafeHandles.SafeHandleMinusOneIsInvalid
class CORDL_TYPE SafeHandleMinusOneIsInvalid : public System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeHandleMinusOneIsInvalid() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleMinusOneIsInvalid", modifiers: " const&", def_value: None }]
constexpr SafeHandleMinusOneIsInvalid(SafeHandleMinusOneIsInvalid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleMinusOneIsInvalid", modifiers: "&&", def_value: None }]
constexpr SafeHandleMinusOneIsInvalid(SafeHandleMinusOneIsInvalid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeHandleMinusOneIsInvalid(void* ptr) noexcept : System::Runtime::InteropServices::SafeHandle(ptr) {
}


  constexpr SafeHandleMinusOneIsInvalid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeHandleMinusOneIsInvalid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeHandleMinusOneIsInvalid& operator=(SafeHandleMinusOneIsInvalid&& o) noexcept = default;
  constexpr SafeHandleMinusOneIsInvalid& operator=(SafeHandleMinusOneIsInvalid const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsInvalid))  IsInvalid;


// Methods

static Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid New_ctor(bool ownsHandle) ;

/// @brief Method .ctor addr 0x22bec9c size 0x44 virtual false final false
 void _ctor(bool ownsHandle) ;

/// @brief Method get_IsInvalid addr 0x22bece0 size 0x40 virtual true final false
 bool get_IsInvalid() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
NEED_NO_BOX(Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid);
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid, "Microsoft.Win32.SafeHandles", "SafeHandleMinusOneIsInvalid");
