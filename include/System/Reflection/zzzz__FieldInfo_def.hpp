#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
struct RuntimeFieldHandle;
}
namespace System::Reflection {
class Binder;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
struct MemberTypes;
}
// Forward declare root types
namespace System::Reflection {
class FieldInfo;
}
// Type: System.Reflection::FieldInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3466))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3461))
// CS Name: System.Reflection.FieldInfo
class CORDL_TYPE FieldInfo : public ::System::Reflection::MemberInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FieldInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldInfo", modifiers: " const&", def_value: None }]
constexpr FieldInfo(FieldInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldInfo", modifiers: "&&", def_value: None }]
constexpr FieldInfo(FieldInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FieldInfo(void* ptr) noexcept : ::System::Reflection::MemberInfo(ptr) {
}


  constexpr FieldInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FieldInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FieldInfo& operator=(FieldInfo&& o) noexcept = default;
  constexpr FieldInfo& operator=(FieldInfo const& o) noexcept = default;
                


// Properties

 ::System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 ::System::Reflection::FieldAttributes __declspec(property(get=get_Attributes))  Attributes;

 ::System::Type __declspec(property(get=get_FieldType))  FieldType;

 bool __declspec(property(get=get_IsInitOnly))  IsInitOnly;

 bool __declspec(property(get=get_IsLiteral))  IsLiteral;

 bool __declspec(property(get=get_IsNotSerialized))  IsNotSerialized;

 bool __declspec(property(get=get_IsStatic))  IsStatic;

 bool __declspec(property(get=get_IsPrivate))  IsPrivate;

 bool __declspec(property(get=get_IsPublic))  IsPublic;

 ::System::RuntimeFieldHandle __declspec(property(get=get_FieldHandle))  FieldHandle;


// Methods

// Ctor Parameters []
explicit FieldInfo() ;

/// @brief Method .ctor addr 0x2379560 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_MemberType addr 0x2379568 size 0x8 virtual true final false
 ::System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method get_Attributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Reflection::FieldAttributes get_Attributes() ;

/// @brief Method get_FieldType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_FieldType() ;

/// @brief Method get_IsInitOnly addr 0x2379570 size 0x20 virtual true final true
 bool get_IsInitOnly() ;

/// @brief Method get_IsLiteral addr 0x2379590 size 0x20 virtual true final true
 bool get_IsLiteral() ;

/// @brief Method get_IsNotSerialized addr 0x23795b0 size 0x20 virtual true final true
 bool get_IsNotSerialized() ;

/// @brief Method get_IsStatic addr 0x23795d0 size 0x20 virtual true final true
 bool get_IsStatic() ;

/// @brief Method get_IsPrivate addr 0x23795f0 size 0x28 virtual true final true
 bool get_IsPrivate() ;

/// @brief Method get_IsPublic addr 0x2379618 size 0x28 virtual true final true
 bool get_IsPublic() ;

/// @brief Method get_FieldHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::RuntimeFieldHandle get_FieldHandle() ;

/// @brief Method Equals addr 0x2379640 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2379648 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2379650 size 0x2c virtual false final false
static bool op_Equality(::System::Reflection::FieldInfo left, ::System::Reflection::FieldInfo right) ;

/// @brief Method op_Inequality addr 0x237967c size 0x3c virtual false final false
static bool op_Inequality(::System::Reflection::FieldInfo left, ::System::Reflection::FieldInfo right) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method SetValue addr 0x23796b8 size 0x8c virtual true final true
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::System::Globalization::CultureInfo culture) ;

/// @brief Method SetValueDirect addr 0x2379744 size 0x50 virtual true final false
 void SetValueDirect(/* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */ obj, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetRawConstantValue addr 0x2379794 size 0x50 virtual true final false
 ::bs_hook::Il2CppWrapperType GetRawConstantValue() ;

/// @brief Method internal_from_handle_type addr 0x23797e4 size 0x4 virtual false final false
static ::System::Reflection::FieldInfo internal_from_handle_type(::cordl_internals::intptr_t field_handle, ::cordl_internals::intptr_t type_handle) ;

/// @brief Method GetFieldFromHandle addr 0x23797e8 size 0xb8 virtual false final false
static ::System::Reflection::FieldInfo GetFieldFromHandle(::System::RuntimeFieldHandle handle) ;

/// @brief Method GetFieldFromHandle addr 0x23798a0 size 0xe8 virtual false final false
static ::System::Reflection::FieldInfo GetFieldFromHandle(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType) ;

/// @brief Method GetFieldOffset addr 0x2379988 size 0x50 virtual true final false
 int32_t GetFieldOffset() ;

/// @brief Method get_marshal_info addr 0x23799d8 size 0x4 virtual false final false
 ::System::Runtime::InteropServices::MarshalAsAttribute get_marshal_info() ;

/// @brief Method GetPseudoCustomAttributes addr 0x23799dc size 0x214 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetPseudoCustomAttributes() ;

/// @brief Method GetPseudoCustomAttributesData addr 0x2379bf0 size 0x58c virtual false final false
 ::ArrayW<::System::Reflection::CustomAttributeData> GetPseudoCustomAttributesData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::FieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::FieldInfo, "System.Reflection", "FieldInfo");
