#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Forward declare root types
namespace System::ComponentModel {
class CustomTypeDescriptor;
}
// Type: System.ComponentModel::CustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8265))
// CS Name: System.ComponentModel.CustomTypeDescriptor
class CORDL_TYPE CustomTypeDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr operator  System::ComponentModel::ICustomTypeDescriptor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CustomTypeDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomTypeDescriptor", modifiers: " const&", def_value: None }]
constexpr CustomTypeDescriptor(CustomTypeDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomTypeDescriptor", modifiers: "&&", def_value: None }]
constexpr CustomTypeDescriptor(CustomTypeDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomTypeDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomTypeDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomTypeDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomTypeDescriptor& operator=(CustomTypeDescriptor&& o) noexcept = default;
  constexpr CustomTypeDescriptor& operator=(CustomTypeDescriptor const& o) noexcept = default;
                


// Fields

 System::ComponentModel::ICustomTypeDescriptor __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(System::ComponentModel::ICustomTypeDescriptor value) ;

constexpr System::ComponentModel::ICustomTypeDescriptor __get__parent() const;


// Methods

// Ctor Parameters []
explicit CustomTypeDescriptor() ;

/// @brief Method .ctor addr 0x277a2c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetAttributes addr 0x277a2cc size 0xd8 virtual true final false
 System::ComponentModel::AttributeCollection GetAttributes() ;

/// @brief Method GetClassName addr 0x277a3a4 size 0xb0 virtual true final false
 ::StringW GetClassName() ;

/// @brief Method GetComponentName addr 0x277a454 size 0xb0 virtual true final false
 ::StringW GetComponentName() ;

/// @brief Method GetConverter addr 0x277a504 size 0xe0 virtual true final false
 System::ComponentModel::TypeConverter GetConverter() ;

/// @brief Method GetDefaultEvent addr 0x277a5e4 size 0xb0 virtual true final false
 System::ComponentModel::EventDescriptor GetDefaultEvent() ;

/// @brief Method GetDefaultProperty addr 0x277a694 size 0xb0 virtual true final false
 System::ComponentModel::PropertyDescriptor GetDefaultProperty() ;

/// @brief Method GetEditor addr 0x277a744 size 0xb8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetEditor(System::Type editorBaseType) ;

/// @brief Method GetEvents addr 0x277a7fc size 0xdc virtual true final false
 System::ComponentModel::EventDescriptorCollection GetEvents() ;

/// @brief Method GetEvents addr 0x277a8d8 size 0xe4 virtual true final false
 System::ComponentModel::EventDescriptorCollection GetEvents(::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetProperties addr 0x277a9bc size 0xdc virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties() ;

/// @brief Method GetProperties addr 0x277aa98 size 0xe4 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertyOwner addr 0x277ab7c size 0xb8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::CustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::CustomTypeDescriptor, "System.ComponentModel", "CustomTypeDescriptor");
