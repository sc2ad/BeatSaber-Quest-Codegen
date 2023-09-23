#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
// Type: System.ComponentModel::ICustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8282))
// CS Name: System.ComponentModel.ICustomTypeDescriptor
class CORDL_TYPE ICustomTypeDescriptor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICustomTypeDescriptor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICustomTypeDescriptor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::AttributeCollection GetAttributes() ;

/// @brief Method GetClassName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetClassName() ;

/// @brief Method GetComponentName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetComponentName() ;

/// @brief Method GetConverter addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::TypeConverter GetConverter() ;

/// @brief Method GetDefaultEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::EventDescriptor GetDefaultEvent() ;

/// @brief Method GetDefaultProperty addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::PropertyDescriptor GetDefaultProperty() ;

/// @brief Method GetEditor addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetEditor(System::Type editorBaseType) ;

/// @brief Method GetEvents addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::EventDescriptorCollection GetEvents() ;

/// @brief Method GetEvents addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::EventDescriptorCollection GetEvents(::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties() ;

/// @brief Method GetProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ICustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ICustomTypeDescriptor, "System.ComponentModel", "ICustomTypeDescriptor");
