#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Attribute;
}
namespace System::Collections {
class IList;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::ComponentModel {
class ISite;
}
// Forward declare root types
namespace System::ComponentModel {
class MemberDescriptor;
}
// Type: System.ComponentModel::MemberDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8325))
// CS Name: System.ComponentModel.MemberDescriptor
class CORDL_TYPE MemberDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MemberDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberDescriptor", modifiers: " const&", def_value: None }]
constexpr MemberDescriptor(MemberDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberDescriptor", modifiers: "&&", def_value: None }]
constexpr MemberDescriptor(MemberDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemberDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberDescriptor& operator=(MemberDescriptor&& o) noexcept = default;
  constexpr MemberDescriptor& operator=(MemberDescriptor const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_displayName, put=__set_displayName))  displayName;

constexpr void __set_displayName(::StringW value) ;

constexpr ::StringW __get_displayName() const;

 int32_t __declspec(property(get=__get_nameHash, put=__set_nameHash))  nameHash;

constexpr void __set_nameHash(int32_t value) ;

constexpr int32_t __get_nameHash() const;

 System::ComponentModel::AttributeCollection __declspec(property(get=__get_attributeCollection, put=__set_attributeCollection))  attributeCollection;

constexpr void __set_attributeCollection(System::ComponentModel::AttributeCollection value) ;

constexpr System::ComponentModel::AttributeCollection __get_attributeCollection() const;

 ::ArrayW<System::Attribute> __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(::ArrayW<System::Attribute> value) ;

constexpr ::ArrayW<System::Attribute> __get_attributes() const;

 ::ArrayW<System::Attribute> __declspec(property(get=__get_originalAttributes, put=__set_originalAttributes))  originalAttributes;

constexpr void __set_originalAttributes(::ArrayW<System::Attribute> value) ;

constexpr ::ArrayW<System::Attribute> __get_originalAttributes() const;

 bool __declspec(property(get=__get_attributesFiltered, put=__set_attributesFiltered))  attributesFiltered;

constexpr void __set_attributesFiltered(bool value) ;

constexpr bool __get_attributesFiltered() const;

 bool __declspec(property(get=__get_attributesFilled, put=__set_attributesFilled))  attributesFilled;

constexpr void __set_attributesFilled(bool value) ;

constexpr bool __get_attributesFilled() const;

 int32_t __declspec(property(get=__get_metadataVersion, put=__set_metadataVersion))  metadataVersion;

constexpr void __set_metadataVersion(int32_t value) ;

constexpr int32_t __get_metadataVersion() const;

 ::StringW __declspec(property(get=__get_category, put=__set_category))  category;

constexpr void __set_category(::StringW value) ;

constexpr ::StringW __get_category() const;

 ::StringW __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(::StringW value) ;

constexpr ::StringW __get_description() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_lockCookie, put=__set_lockCookie))  lockCookie;

constexpr void __set_lockCookie(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_lockCookie() const;


// Properties

 ::ArrayW<System::Attribute> __declspec(property(get=get_AttributeArray, put=set_AttributeArray))  AttributeArray;

 System::ComponentModel::AttributeCollection __declspec(property(get=get_Attributes))  Attributes;

 ::StringW __declspec(property(get=get_Name))  Name;

 int32_t __declspec(property(get=get_NameHashCode))  NameHashCode;

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }]
explicit MemberDescriptor(::StringW name, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method .ctor addr 0x278a6fc size 0x1a4 virtual false final false
 void _ctor(::StringW name, ::ArrayW<System::Attribute> attributes) ;

// Ctor Parameters [CppParam { name: "oldMemberDescriptor", ty: "System::ComponentModel::MemberDescriptor", modifiers: "", def_value: None }, CppParam { name: "newAttributes", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }]
explicit MemberDescriptor(System::ComponentModel::MemberDescriptor oldMemberDescriptor, ::ArrayW<System::Attribute> newAttributes) ;

/// @brief Method .ctor addr 0x278a8a0 size 0x428 virtual false final false
 void _ctor(System::ComponentModel::MemberDescriptor oldMemberDescriptor, ::ArrayW<System::Attribute> newAttributes) ;

/// @brief Method get_AttributeArray addr 0x278acc8 size 0x20 virtual true final false
 ::ArrayW<System::Attribute> get_AttributeArray() ;

/// @brief Method set_AttributeArray addr 0x278b4e0 size 0xc4 virtual true final false
 void set_AttributeArray(::ArrayW<System::Attribute> value) ;

/// @brief Method get_Attributes addr 0x278b5a4 size 0xe8 virtual true final false
 System::ComponentModel::AttributeCollection get_Attributes() ;

/// @brief Method get_Name addr 0x278b68c size 0x50 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_NameHashCode addr 0x278b6dc size 0x8 virtual true final false
 int32_t get_NameHashCode() ;

/// @brief Method get_DisplayName addr 0x278b6e4 size 0x128 virtual true final false
 ::StringW get_DisplayName() ;

/// @brief Method CheckAttributesValid addr 0x278ace8 size 0xb0 virtual false final false
 void CheckAttributesValid() ;

/// @brief Method CreateAttributeCollection addr 0x278b80c size 0x7c virtual true final false
 System::ComponentModel::AttributeCollection CreateAttributeCollection() ;

/// @brief Method Equals addr 0x278b888 size 0x264 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FillAttributes addr 0x2784f78 size 0xf4 virtual true final false
 void FillAttributes(System::Collections::IList attributeList) ;

/// @brief Method FilterAttributesIfNeeded addr 0x278ad98 size 0x748 virtual false final false
 void FilterAttributesIfNeeded() ;

/// @brief Method FindMethod addr 0x27854bc size 0x8 virtual false final false
static System::Reflection::MethodInfo FindMethod(System::Type componentClass, ::StringW name, ::ArrayW<System::Type> args, System::Type returnType) ;

/// @brief Method FindMethod addr 0x278baec size 0xa4 virtual false final false
static System::Reflection::MethodInfo FindMethod(System::Type componentClass, ::StringW name, ::ArrayW<System::Type> args, System::Type returnType, bool publicOnly) ;

/// @brief Method GetHashCode addr 0x278bb90 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetInvocationTarget addr 0x278bb98 size 0x110 virtual true final false
 ::bs_hook::Il2CppWrapperType GetInvocationTarget(System::Type type, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetSite addr 0x278c37c size 0xfc virtual false final false
static System::ComponentModel::ISite GetSite(::bs_hook::Il2CppWrapperType component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::MemberDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::MemberDescriptor, "System.ComponentModel", "MemberDescriptor");
