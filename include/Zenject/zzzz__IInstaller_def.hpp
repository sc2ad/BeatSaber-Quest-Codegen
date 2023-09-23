#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Zenject {
class IInstaller;
}
// Type: Zenject::IInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11071))
// CS Name: Zenject.IInstaller
class CORDL_TYPE IInstaller : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInstaller() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInstaller(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_IsEnabled))  IsEnabled;


// Methods

/// @brief Method InstallBindings addr 0x0 size 0xffffffffffffffff virtual true final false
 void InstallBindings() ;

/// @brief Method get_IsEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsEnabled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IInstaller, "Zenject", "IInstaller");
