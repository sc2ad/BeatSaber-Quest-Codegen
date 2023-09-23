#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class IServiceProvider;
}
// Type: System::IServiceProvider
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2514))
// CS Name: System.IServiceProvider
class CORDL_TYPE IServiceProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IServiceProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IServiceProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetService addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetService(System::Type serviceType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::IServiceProvider, "System", "IServiceProvider");
