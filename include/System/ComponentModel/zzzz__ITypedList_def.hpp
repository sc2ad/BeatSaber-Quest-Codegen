#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class ITypedList;
}
// Type: System.ComponentModel::ITypedList
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8286))
// CS Name: System.ComponentModel.ITypedList
class CORDL_TYPE ITypedList : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITypedList() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITypedList(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetListName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor> listAccessors) ;

/// @brief Method GetItemProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ComponentModel::PropertyDescriptorCollection GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor> listAccessors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::ITypedList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ITypedList, "System.ComponentModel", "ITypedList");
