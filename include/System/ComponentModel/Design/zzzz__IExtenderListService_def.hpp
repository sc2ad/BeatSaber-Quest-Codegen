#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::ComponentModel {
class IExtenderProvider;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IExtenderListService;
}
// Type: System.ComponentModel.Design::IExtenderListService
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8352))
// CS Name: System.ComponentModel.Design.IExtenderListService
class CORDL_TYPE IExtenderListService : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IExtenderListService() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IExtenderListService(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetExtenderProviders addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::System::ComponentModel::IExtenderProvider> GetExtenderProviders() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::Design::IExtenderListService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IExtenderListService, "System.ComponentModel.Design", "IExtenderListService");
