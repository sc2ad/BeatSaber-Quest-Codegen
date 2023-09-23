#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IReferenceService;
}
// Type: System.ComponentModel.Design::IReferenceService
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8353))
// CS Name: System.ComponentModel.Design.IReferenceService
class CORDL_TYPE IReferenceService : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IReferenceService() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReferenceService(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetReference(::StringW name) ;

/// @brief Method GetName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetName(::bs_hook::Il2CppWrapperType reference) ;

/// @brief Method GetReferences addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetReferences(System::Type baseType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
NEED_NO_BOX(System::ComponentModel::Design::IReferenceService);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::IReferenceService, "System.ComponentModel.Design", "IReferenceService");
