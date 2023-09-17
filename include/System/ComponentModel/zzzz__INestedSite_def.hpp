#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class IServiceProvider;
}
namespace System::ComponentModel {
class ISite;
}
// Forward declare root types
namespace System::ComponentModel {
class INestedSite;
}
// Type: System.ComponentModel::INestedSite
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8284))
// CS Name: System.ComponentModel.INestedSite
class CORDL_TYPE INestedSite : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::ComponentModel::ISite
constexpr operator  ::System::ComponentModel::ISite() const noexcept;

/// @brief Convert operator to ::System::IServiceProvider
constexpr operator  ::System::IServiceProvider() const noexcept;

~INestedSite() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INestedSite(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_FullName))  FullName;


// Methods

/// @brief Method get_FullName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_FullName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::INestedSite);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::INestedSite, "System.ComponentModel", "INestedSite");
