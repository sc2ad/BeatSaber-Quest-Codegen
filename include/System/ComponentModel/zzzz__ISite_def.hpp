#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class IServiceProvider;
}
namespace System::ComponentModel {
class IContainer;
}
// Forward declare root types
namespace System::ComponentModel {
class ISite;
}
// Type: System.ComponentModel::ISite
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8248))
// CS Name: System.ComponentModel.ISite
class CORDL_TYPE ISite : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IServiceProvider
constexpr operator  ::System::IServiceProvider() const noexcept;

~ISite() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISite(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::ComponentModel::IContainer __declspec(property(get=get_Container))  Container;

 bool __declspec(property(get=get_DesignMode))  DesignMode;

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ComponentModel::IContainer get_Container() ;

/// @brief Method get_DesignMode addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_DesignMode() ;

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::ISite);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ISite, "System.ComponentModel", "ISite");
