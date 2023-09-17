#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::ComponentModel::Design {
class IDictionaryService;
}
// Type: System.ComponentModel.Design::IDictionaryService
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8351))
// CS Name: System.ComponentModel.Design.IDictionaryService
class CORDL_TYPE IDictionaryService : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDictionaryService() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDictionaryService(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::Design::IDictionaryService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IDictionaryService, "System.ComponentModel.Design", "IDictionaryService");
