#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ICommandLineArgsProvider;
}
// Type: ::ICommandLineArgsProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6034))
// CS Name: ICommandLineArgsProvider
class CORDL_TYPE ICommandLineArgsProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICommandLineArgsProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICommandLineArgsProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetCommandLineArgs addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::StringW> GetCommandLineArgs() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ICommandLineArgsProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICommandLineArgsProvider, "", "ICommandLineArgsProvider");
