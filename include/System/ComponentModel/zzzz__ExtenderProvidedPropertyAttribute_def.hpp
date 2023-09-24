#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ExtenderProvidedPropertyAttribute;
}
// Type: System.ComponentModel::ExtenderProvidedPropertyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8279))
// CS Name: System.ComponentModel.ExtenderProvidedPropertyAttribute
class CORDL_TYPE ExtenderProvidedPropertyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ExtenderProvidedPropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtenderProvidedPropertyAttribute", modifiers: " const&", def_value: None }]
constexpr ExtenderProvidedPropertyAttribute(ExtenderProvidedPropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtenderProvidedPropertyAttribute", modifiers: "&&", def_value: None }]
constexpr ExtenderProvidedPropertyAttribute(ExtenderProvidedPropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtenderProvidedPropertyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ExtenderProvidedPropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtenderProvidedPropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtenderProvidedPropertyAttribute& operator=(ExtenderProvidedPropertyAttribute&& o) noexcept = default;
  constexpr ExtenderProvidedPropertyAttribute& operator=(ExtenderProvidedPropertyAttribute const& o) noexcept = default;
                


// Fields

 System::ComponentModel::PropertyDescriptor __declspec(property(get=__get__ExtenderProperty_k__BackingField, put=__set__ExtenderProperty_k__BackingField))  _ExtenderProperty_k__BackingField;

constexpr void __set__ExtenderProperty_k__BackingField(System::ComponentModel::PropertyDescriptor value) ;

constexpr System::ComponentModel::PropertyDescriptor __get__ExtenderProperty_k__BackingField() const;

 System::ComponentModel::IExtenderProvider __declspec(property(get=__get__Provider_k__BackingField, put=__set__Provider_k__BackingField))  _Provider_k__BackingField;

constexpr void __set__Provider_k__BackingField(System::ComponentModel::IExtenderProvider value) ;

constexpr System::ComponentModel::IExtenderProvider __get__Provider_k__BackingField() const;

 System::Type __declspec(property(get=__get__ReceiverType_k__BackingField, put=__set__ReceiverType_k__BackingField))  _ReceiverType_k__BackingField;

constexpr void __set__ReceiverType_k__BackingField(System::Type value) ;

constexpr System::Type __get__ReceiverType_k__BackingField() const;


// Properties

 System::ComponentModel::PropertyDescriptor __declspec(property(get=get_ExtenderProperty, put=set_ExtenderProperty))  ExtenderProperty;

 System::ComponentModel::IExtenderProvider __declspec(property(get=get_Provider, put=set_Provider))  Provider;

 System::Type __declspec(property(get=get_ReceiverType, put=set_ReceiverType))  ReceiverType;


// Methods

/// @brief Method Create addr 0x277d964 size 0x78 virtual false final false
static System::ComponentModel::ExtenderProvidedPropertyAttribute Create(System::ComponentModel::PropertyDescriptor extenderProperty, System::Type receiverType, System::ComponentModel::IExtenderProvider provider) ;

static System::ComponentModel::ExtenderProvidedPropertyAttribute New_ctor() ;

/// @brief Method .ctor addr 0x277ddc4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_ExtenderProperty addr 0x277ddcc size 0x8 virtual false final false
 System::ComponentModel::PropertyDescriptor get_ExtenderProperty() ;

/// @brief Method set_ExtenderProperty addr 0x277ddd4 size 0x8 virtual false final false
 void set_ExtenderProperty(System::ComponentModel::PropertyDescriptor value) ;

/// @brief Method get_Provider addr 0x277dddc size 0x8 virtual false final false
 System::ComponentModel::IExtenderProvider get_Provider() ;

/// @brief Method set_Provider addr 0x277dde4 size 0x8 virtual false final false
 void set_Provider(System::ComponentModel::IExtenderProvider value) ;

/// @brief Method get_ReceiverType addr 0x277ddec size 0x8 virtual false final false
 System::Type get_ReceiverType() ;

/// @brief Method set_ReceiverType addr 0x277ddf4 size 0x8 virtual false final false
 void set_ReceiverType(System::Type value) ;

/// @brief Method Equals addr 0x277ddfc size 0xd4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x277ded0 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x277ded8 size 0x60 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ExtenderProvidedPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ExtenderProvidedPropertyAttribute, "System.ComponentModel", "ExtenderProvidedPropertyAttribute");
