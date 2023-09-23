#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class ICustomAttributeProvider;
}
// Type: System.Reflection::ICustomAttributeProvider
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3463))
// CS Name: System.Reflection.ICustomAttributeProvider
class CORDL_TYPE ICustomAttributeProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICustomAttributeProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICustomAttributeProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetCustomAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method IsDefined addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::ICustomAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ICustomAttributeProvider, "System.Reflection", "ICustomAttributeProvider");
