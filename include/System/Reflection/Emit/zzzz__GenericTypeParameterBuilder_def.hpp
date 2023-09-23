#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct Guid;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Module;
}
// Forward declare root types
namespace System::Reflection::Emit {
class GenericTypeParameterBuilder;
}
// Type: System.Reflection.Emit::GenericTypeParameterBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3494))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3532))
// CS Name: System.Reflection.Emit.GenericTypeParameterBuilder
class CORDL_TYPE GenericTypeParameterBuilder : public System::Reflection::TypeInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GenericTypeParameterBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: " const&", def_value: None }]
constexpr GenericTypeParameterBuilder(GenericTypeParameterBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: "&&", def_value: None }]
constexpr GenericTypeParameterBuilder(GenericTypeParameterBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericTypeParameterBuilder(void* ptr) noexcept : System::Reflection::TypeInfo(ptr) {
}


  constexpr GenericTypeParameterBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericTypeParameterBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericTypeParameterBuilder& operator=(GenericTypeParameterBuilder&& o) noexcept = default;
  constexpr GenericTypeParameterBuilder& operator=(GenericTypeParameterBuilder const& o) noexcept = default;
                


// Properties

 System::Reflection::Assembly __declspec(property(get=get_Assembly))  Assembly;

 ::StringW __declspec(property(get=get_AssemblyQualifiedName))  AssemblyQualifiedName;

 System::Type __declspec(property(get=get_BaseType))  BaseType;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 System::Guid __declspec(property(get=get_GUID))  GUID;

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Namespace))  Namespace;

 System::Type __declspec(property(get=get_UnderlyingSystemType))  UnderlyingSystemType;


// Methods

/// @brief Method get_Assembly addr 0x238d4d0 size 0x40 virtual true final false
 System::Reflection::Assembly get_Assembly() ;

/// @brief Method get_AssemblyQualifiedName addr 0x238d510 size 0x40 virtual true final false
 ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_BaseType addr 0x238d550 size 0x40 virtual true final false
 System::Type get_BaseType() ;

/// @brief Method get_FullName addr 0x238d590 size 0x40 virtual true final false
 ::StringW get_FullName() ;

/// @brief Method get_GUID addr 0x238d5d0 size 0x40 virtual true final false
 System::Guid get_GUID() ;

/// @brief Method get_Module addr 0x238d610 size 0x40 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method get_Name addr 0x238d650 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Namespace addr 0x238d690 size 0x40 virtual true final false
 ::StringW get_Namespace() ;

/// @brief Method get_UnderlyingSystemType addr 0x238d6d0 size 0x40 virtual true final false
 System::Type get_UnderlyingSystemType() ;

/// @brief Method GetAttributeFlagsImpl addr 0x238d710 size 0x40 virtual true final false
 System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetConstructorImpl addr 0x238d750 size 0x40 virtual true final false
 System::Reflection::ConstructorInfo GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetConstructors addr 0x238d790 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::ConstructorInfo> GetConstructors(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetCustomAttributes addr 0x238d7d0 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238d810 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetElementType addr 0x238d850 size 0x40 virtual true final false
 System::Type GetElementType() ;

/// @brief Method GetEvent addr 0x238d890 size 0x40 virtual true final false
 System::Reflection::EventInfo GetEvent(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetEvents addr 0x238d8d0 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::EventInfo> GetEvents(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetField addr 0x238d910 size 0x40 virtual true final false
 System::Reflection::FieldInfo GetField(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetFields addr 0x238d950 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::FieldInfo> GetFields(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetInterfaces addr 0x238d990 size 0x40 virtual true final false
 ::ArrayW<System::Type> GetInterfaces() ;

/// @brief Method GetMethodImpl addr 0x238d9d0 size 0x40 virtual true final false
 System::Reflection::MethodInfo GetMethodImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method GetMethods addr 0x238da10 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::MethodInfo> GetMethods(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetNestedType addr 0x238da50 size 0x40 virtual true final false
 System::Type GetNestedType(::StringW name, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetProperties addr 0x238da90 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::PropertyInfo> GetProperties(System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetPropertyImpl addr 0x238dad0 size 0x40 virtual true final false
 System::Reflection::PropertyInfo GetPropertyImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method HasElementTypeImpl addr 0x238db10 size 0x40 virtual true final false
 bool HasElementTypeImpl() ;

/// @brief Method InvokeMember addr 0x238db50 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType InvokeMember(::StringW name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> namedParameters) ;

/// @brief Method IsArrayImpl addr 0x238db90 size 0x40 virtual true final false
 bool IsArrayImpl() ;

/// @brief Method IsByRefImpl addr 0x238dbd0 size 0x40 virtual true final false
 bool IsByRefImpl() ;

/// @brief Method IsCOMObjectImpl addr 0x238dc10 size 0x40 virtual true final false
 bool IsCOMObjectImpl() ;

/// @brief Method IsDefined addr 0x238dc50 size 0x40 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method IsPointerImpl addr 0x238dc90 size 0x40 virtual true final false
 bool IsPointerImpl() ;

/// @brief Method IsPrimitiveImpl addr 0x238dcd0 size 0x40 virtual true final false
 bool IsPrimitiveImpl() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::GenericTypeParameterBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::GenericTypeParameterBuilder, "System.Reflection.Emit", "GenericTypeParameterBuilder");
