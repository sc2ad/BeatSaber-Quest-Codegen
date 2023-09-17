#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::ComponentModel {
class ReflectPropertyDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ExtendedPropertyDescriptor;
}
// Type: System.ComponentModel::ExtendedPropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8295))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8278))
// CS Name: System.ComponentModel.ExtendedPropertyDescriptor
class CORDL_TYPE ExtendedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ExtendedPropertyDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: " const&", def_value: None }]
constexpr ExtendedPropertyDescriptor(ExtendedPropertyDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: "&&", def_value: None }]
constexpr ExtendedPropertyDescriptor(ExtendedPropertyDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtendedPropertyDescriptor(void* ptr) noexcept : ::System::ComponentModel::PropertyDescriptor(ptr) {
}


  constexpr ExtendedPropertyDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtendedPropertyDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtendedPropertyDescriptor& operator=(ExtendedPropertyDescriptor&& o) noexcept = default;
  constexpr ExtendedPropertyDescriptor& operator=(ExtendedPropertyDescriptor const& o) noexcept = default;
                


// Fields

 ::System::ComponentModel::ReflectPropertyDescriptor __declspec(property(get=__get__extenderInfo, put=__set__extenderInfo))  _extenderInfo;

constexpr void __set__extenderInfo(::System::ComponentModel::ReflectPropertyDescriptor value) ;

constexpr ::System::ComponentModel::ReflectPropertyDescriptor __get__extenderInfo() const;

 ::System::ComponentModel::IExtenderProvider __declspec(property(get=__get__provider, put=__set__provider))  _provider;

constexpr void __set__provider(::System::ComponentModel::IExtenderProvider value) ;

constexpr ::System::ComponentModel::IExtenderProvider __get__provider() const;


// Properties

 ::System::Type __declspec(property(get=get_ComponentType))  ComponentType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::System::Type __declspec(property(get=get_PropertyType))  PropertyType;

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;


// Methods

// Ctor Parameters [CppParam { name: "extenderInfo", ty: "::System::ComponentModel::ReflectPropertyDescriptor", modifiers: "", def_value: None }, CppParam { name: "receiverType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "::System::ComponentModel::IExtenderProvider", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::ArrayW<::System::Attribute>", modifiers: "", def_value: None }]
explicit ExtendedPropertyDescriptor(::System::ComponentModel::ReflectPropertyDescriptor extenderInfo, ::System::Type receiverType, ::System::ComponentModel::IExtenderProvider provider, ::ArrayW<::System::Attribute> attributes) ;

/// @brief Method .ctor addr 0x277d70c size 0x250 virtual false final false
 void _ctor(::System::ComponentModel::ReflectPropertyDescriptor extenderInfo, ::System::Type receiverType, ::System::ComponentModel::IExtenderProvider provider, ::ArrayW<::System::Attribute> attributes) ;

/// @brief Method CanResetValue addr 0x277d9dc size 0x28 virtual true final false
 bool CanResetValue(::bs_hook::Il2CppWrapperType comp) ;

/// @brief Method get_ComponentType addr 0x277da04 size 0x24 virtual true final false
 ::System::Type get_ComponentType() ;

/// @brief Method get_IsReadOnly addr 0x277da28 size 0xf8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x277db20 size 0x24 virtual true final false
 ::System::Type get_PropertyType() ;

/// @brief Method get_DisplayName addr 0x277db44 size 0x1dc virtual true final false
 ::StringW get_DisplayName() ;

/// @brief Method GetValue addr 0x277dd20 size 0x28 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType comp) ;

/// @brief Method ResetValue addr 0x277dd48 size 0x28 virtual true final false
 void ResetValue(::bs_hook::Il2CppWrapperType comp) ;

/// @brief Method SetValue addr 0x277dd70 size 0x2c virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType component, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ShouldSerializeValue addr 0x277dd9c size 0x28 virtual true final false
 bool ShouldSerializeValue(::bs_hook::Il2CppWrapperType comp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::ExtendedPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtendedPropertyDescriptor, "System.ComponentModel", "ExtendedPropertyDescriptor");
