#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
class ICustomMarshaler;
}
// Type: System.Runtime.InteropServices::ICustomMarshaler
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3306))
// CS Name: System.Runtime.InteropServices.ICustomMarshaler
class CORDL_TYPE ICustomMarshaler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICustomMarshaler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICustomMarshaler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method MarshalNativeToManaged addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType MarshalNativeToManaged(::cordl_internals::intptr_t pNativeData) ;

/// @brief Method MarshalManagedToNative addr 0x0 size 0xffffffffffffffff virtual true final false
 ::cordl_internals::intptr_t MarshalManagedToNative(::bs_hook::Il2CppWrapperType ManagedObj) ;

/// @brief Method CleanUpNativeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void CleanUpNativeData(::cordl_internals::intptr_t pNativeData) ;

/// @brief Method CleanUpManagedData addr 0x0 size 0xffffffffffffffff virtual true final false
 void CleanUpManagedData(::bs_hook::Il2CppWrapperType ManagedObj) ;

/// @brief Method GetNativeDataSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetNativeDataSize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::ICustomMarshaler);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ICustomMarshaler, "System.Runtime.InteropServices", "ICustomMarshaler");
