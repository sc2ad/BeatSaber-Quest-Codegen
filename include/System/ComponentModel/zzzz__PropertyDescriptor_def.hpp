#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System {
class Type;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System {
class EventArgs;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Type: System.ComponentModel::PropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8325))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8295))
// CS Name: System.ComponentModel.PropertyDescriptor
class CORDL_TYPE PropertyDescriptor : public System::ComponentModel::MemberDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~PropertyDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: " const&", def_value: None }]
constexpr PropertyDescriptor(PropertyDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: "&&", def_value: None }]
constexpr PropertyDescriptor(PropertyDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyDescriptor(void* ptr) noexcept : System::ComponentModel::MemberDescriptor(ptr) {
}


  constexpr PropertyDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyDescriptor& operator=(PropertyDescriptor&& o) noexcept = default;
  constexpr PropertyDescriptor& operator=(PropertyDescriptor const& o) noexcept = default;
                


// Fields

 System::ComponentModel::TypeConverter __declspec(property(get=__get__converter, put=__set__converter))  _converter;

constexpr void __set__converter(System::ComponentModel::TypeConverter value) ;

constexpr System::ComponentModel::TypeConverter __get__converter() const;

 System::Collections::Hashtable __declspec(property(get=__get__valueChangedHandlers, put=__set__valueChangedHandlers))  _valueChangedHandlers;

constexpr void __set__valueChangedHandlers(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__valueChangedHandlers() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__editors, put=__set__editors))  _editors;

constexpr void __set__editors(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__editors() const;

 ::ArrayW<System::Type> __declspec(property(get=__get__editorTypes, put=__set__editorTypes))  _editorTypes;

constexpr void __set__editorTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get__editorTypes() const;

 int32_t __declspec(property(get=__get__editorCount, put=__set__editorCount))  _editorCount;

constexpr void __set__editorCount(int32_t value) ;

constexpr int32_t __get__editorCount() const;


// Properties

 System::Type __declspec(property(get=get_ComponentType))  ComponentType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }]
explicit PropertyDescriptor(::StringW name, ::ArrayW<System::Attribute> attrs) ;

/// @brief Method .ctor addr 0x277f7e4 size 0x8 virtual false final false
 void _ctor(::StringW name, ::ArrayW<System::Attribute> attrs) ;

// Ctor Parameters [CppParam { name: "descr", ty: "System::ComponentModel::MemberDescriptor", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }]
explicit PropertyDescriptor(System::ComponentModel::MemberDescriptor descr, ::ArrayW<System::Attribute> attrs) ;

/// @brief Method .ctor addr 0x277d95c size 0x8 virtual false final false
 void _ctor(System::ComponentModel::MemberDescriptor descr, ::ArrayW<System::Attribute> attrs) ;

/// @brief Method get_ComponentType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_ComponentType() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method CanResetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method Equals addr 0x277f7ec size 0x200 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FillAttributes addr 0x277f9ec size 0x14 virtual true final false
 void FillAttributes(System::Collections::IList attributeList) ;

/// @brief Method GetHashCode addr 0x277fa00 size 0x54 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetInvocationTarget addr 0x277fa54 size 0xe8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetInvocationTarget(System::Type type, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method OnValueChanged addr 0x277fb3c size 0xb0 virtual true final false
 void OnValueChanged(::bs_hook::Il2CppWrapperType component, System::EventArgs e) ;

/// @brief Method ResetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResetValue(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType component, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ShouldSerializeValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ShouldSerializeValue(::bs_hook::Il2CppWrapperType component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::PropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::PropertyDescriptor, "System.ComponentModel", "PropertyDescriptor");
