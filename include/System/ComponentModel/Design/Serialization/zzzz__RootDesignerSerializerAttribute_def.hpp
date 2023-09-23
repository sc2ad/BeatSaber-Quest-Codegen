#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::ComponentModel::Design::Serialization {
class RootDesignerSerializerAttribute;
}
// Type: System.ComponentModel.Design.Serialization::RootDesignerSerializerAttribute
namespace System::ComponentModel::Design::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8356))
// CS Name: System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
class CORDL_TYPE RootDesignerSerializerAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootDesignerSerializerAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootDesignerSerializerAttribute", modifiers: " const&", def_value: None }]
constexpr RootDesignerSerializerAttribute(RootDesignerSerializerAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootDesignerSerializerAttribute", modifiers: "&&", def_value: None }]
constexpr RootDesignerSerializerAttribute(RootDesignerSerializerAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootDesignerSerializerAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RootDesignerSerializerAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootDesignerSerializerAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootDesignerSerializerAttribute& operator=(RootDesignerSerializerAttribute&& o) noexcept = default;
  constexpr RootDesignerSerializerAttribute& operator=(RootDesignerSerializerAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__typeId, put=__set__typeId))  _typeId;

constexpr void __set__typeId(::StringW value) ;

constexpr ::StringW __get__typeId() const;

 bool __declspec(property(get=__get__Reloadable_k__BackingField, put=__set__Reloadable_k__BackingField))  _Reloadable_k__BackingField;

constexpr void __set__Reloadable_k__BackingField(bool value) ;

constexpr bool __get__Reloadable_k__BackingField() const;

 ::StringW __declspec(property(get=__get__SerializerTypeName_k__BackingField, put=__set__SerializerTypeName_k__BackingField))  _SerializerTypeName_k__BackingField;

constexpr void __set__SerializerTypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__SerializerTypeName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__SerializerBaseTypeName_k__BackingField, put=__set__SerializerBaseTypeName_k__BackingField))  _SerializerBaseTypeName_k__BackingField;

constexpr void __set__SerializerBaseTypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__SerializerBaseTypeName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_SerializerBaseTypeName))  SerializerBaseTypeName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypeId))  TypeId;


// Methods

// Ctor Parameters [CppParam { name: "serializerTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "baseSerializerTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "reloadable", ty: "bool", modifiers: "", def_value: None }]
explicit RootDesignerSerializerAttribute(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable) ;

/// @brief Method .ctor addr 0x27a8a94 size 0x3c virtual false final false
 void _ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable) ;

/// @brief Method get_SerializerBaseTypeName addr 0x27a8ad0 size 0x8 virtual false final false
 ::StringW get_SerializerBaseTypeName() ;

/// @brief Method get_TypeId addr 0x27a8ad8 size 0x8c virtual true final false
 ::bs_hook::Il2CppWrapperType get_TypeId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design::Serialization
NEED_NO_BOX(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
