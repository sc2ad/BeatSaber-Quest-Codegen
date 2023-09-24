#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonContainerAttribute;
}
// Type: Newtonsoft.Json::JsonContainerAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11757))
// CS Name: Newtonsoft.Json.JsonContainerAttribute
class CORDL_TYPE JsonContainerAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~JsonContainerAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: " const&", def_value: None }]
constexpr JsonContainerAttribute(JsonContainerAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "&&", def_value: None }]
constexpr JsonContainerAttribute(JsonContainerAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonContainerAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr JsonContainerAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonContainerAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonContainerAttribute& operator=(JsonContainerAttribute&& o) noexcept = default;
  constexpr JsonContainerAttribute& operator=(JsonContainerAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Id_k__BackingField, put=__set__Id_k__BackingField))  _Id_k__BackingField;

constexpr void __set__Id_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Id_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Title_k__BackingField, put=__set__Title_k__BackingField))  _Title_k__BackingField;

constexpr void __set__Title_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Title_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Description_k__BackingField, put=__set__Description_k__BackingField))  _Description_k__BackingField;

constexpr void __set__Description_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Description_k__BackingField() const;

 System::Type __declspec(property(get=__get__ItemConverterType_k__BackingField, put=__set__ItemConverterType_k__BackingField))  _ItemConverterType_k__BackingField;

constexpr void __set__ItemConverterType_k__BackingField(System::Type value) ;

constexpr System::Type __get__ItemConverterType_k__BackingField() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__ItemConverterParameters_k__BackingField, put=__set__ItemConverterParameters_k__BackingField))  _ItemConverterParameters_k__BackingField;

constexpr void __set__ItemConverterParameters_k__BackingField(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__ItemConverterParameters_k__BackingField() const;

 System::Nullable_1<bool> __declspec(property(get=__get__isReference, put=__set__isReference))  _isReference;

constexpr void __set__isReference(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__isReference() const;

 System::Nullable_1<bool> __declspec(property(get=__get__itemIsReference, put=__set__itemIsReference))  _itemIsReference;

constexpr void __set__itemIsReference(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__itemIsReference() const;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=__get__itemReferenceLoopHandling, put=__set__itemReferenceLoopHandling))  _itemReferenceLoopHandling;

constexpr void __set__itemReferenceLoopHandling(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __get__itemReferenceLoopHandling() const;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=__get__itemTypeNameHandling, put=__set__itemTypeNameHandling))  _itemTypeNameHandling;

constexpr void __set__itemTypeNameHandling(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __get__itemTypeNameHandling() const;


// Properties

 ::StringW __declspec(property(get=get_Id, put=set_Id))  Id;

 ::StringW __declspec(property(get=get_Title, put=set_Title))  Title;

 ::StringW __declspec(property(get=get_Description, put=set_Description))  Description;

 System::Type __declspec(property(get=get_ItemConverterType, put=set_ItemConverterType))  ItemConverterType;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ItemConverterParameters, put=set_ItemConverterParameters))  ItemConverterParameters;

 bool __declspec(property(get=get_IsReference, put=set_IsReference))  IsReference;

 bool __declspec(property(get=get_ItemIsReference, put=set_ItemIsReference))  ItemIsReference;

 Newtonsoft::Json::ReferenceLoopHandling __declspec(property(get=get_ItemReferenceLoopHandling, put=set_ItemReferenceLoopHandling))  ItemReferenceLoopHandling;

 Newtonsoft::Json::TypeNameHandling __declspec(property(get=get_ItemTypeNameHandling, put=set_ItemTypeNameHandling))  ItemTypeNameHandling;


// Methods

/// @brief Method get_Id addr 0x24c7fe4 size 0x8 virtual false final false
 ::StringW get_Id() ;

/// @brief Method set_Id addr 0x24c7fec size 0x8 virtual false final false
 void set_Id(::StringW value) ;

/// @brief Method get_Title addr 0x24c7ff4 size 0x8 virtual false final false
 ::StringW get_Title() ;

/// @brief Method set_Title addr 0x24c7ffc size 0x8 virtual false final false
 void set_Title(::StringW value) ;

/// @brief Method get_Description addr 0x24c8004 size 0x8 virtual false final false
 ::StringW get_Description() ;

/// @brief Method set_Description addr 0x24c800c size 0x8 virtual false final false
 void set_Description(::StringW value) ;

/// @brief Method get_ItemConverterType addr 0x24c8014 size 0x8 virtual false final false
 System::Type get_ItemConverterType() ;

/// @brief Method set_ItemConverterType addr 0x24c801c size 0x8 virtual false final false
 void set_ItemConverterType(System::Type value) ;

/// @brief Method get_ItemConverterParameters addr 0x24c8024 size 0x8 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_ItemConverterParameters() ;

/// @brief Method set_ItemConverterParameters addr 0x24c802c size 0x8 virtual false final false
 void set_ItemConverterParameters(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_IsReference addr 0x24c8034 size 0x5c virtual false final false
 bool get_IsReference() ;

/// @brief Method set_IsReference addr 0x24c8090 size 0x68 virtual false final false
 void set_IsReference(bool value) ;

/// @brief Method get_ItemIsReference addr 0x24c80f8 size 0x5c virtual false final false
 bool get_ItemIsReference() ;

/// @brief Method set_ItemIsReference addr 0x24c8154 size 0x68 virtual false final false
 void set_ItemIsReference(bool value) ;

/// @brief Method get_ItemReferenceLoopHandling addr 0x24c81bc size 0x50 virtual false final false
 Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling() ;

/// @brief Method set_ItemReferenceLoopHandling addr 0x24c820c size 0x68 virtual false final false
 void set_ItemReferenceLoopHandling(Newtonsoft::Json::ReferenceLoopHandling value) ;

/// @brief Method get_ItemTypeNameHandling addr 0x24c8274 size 0x50 virtual false final false
 Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling() ;

/// @brief Method set_ItemTypeNameHandling addr 0x24c82c4 size 0x68 virtual false final false
 void set_ItemTypeNameHandling(Newtonsoft::Json::TypeNameHandling value) ;

static Newtonsoft::Json::JsonContainerAttribute New_ctor() ;

/// @brief Method .ctor addr 0x24c738c size 0x8 virtual false final false
 void _ctor() ;

static Newtonsoft::Json::JsonContainerAttribute New_ctor(::StringW id) ;

/// @brief Method .ctor addr 0x24c73bc size 0x28 virtual false final false
 void _ctor(::StringW id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonContainerAttribute, "Newtonsoft.Json", "JsonContainerAttribute");
