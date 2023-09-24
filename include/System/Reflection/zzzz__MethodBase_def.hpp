#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct CallingConventions;
}
// Forward declare root types
namespace System::Reflection {
class MethodBase;
}
// Type: System.Reflection::MethodBase
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3466))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3469))
// CS Name: System.Reflection.MethodBase
class CORDL_TYPE MethodBase : public System::Reflection::MemberInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MethodBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: " const&", def_value: None }]
constexpr MethodBase(MethodBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodBase", modifiers: "&&", def_value: None }]
constexpr MethodBase(MethodBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodBase(void* ptr) noexcept : System::Reflection::MemberInfo(ptr) {
}


  constexpr MethodBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodBase& operator=(MethodBase&& o) noexcept = default;
  constexpr MethodBase& operator=(MethodBase const& o) noexcept = default;
                


// Properties

 System::Reflection::MethodAttributes __declspec(property(get=get_Attributes))  Attributes;

 System::Reflection::CallingConventions __declspec(property(get=get_CallingConvention))  CallingConvention;

 bool __declspec(property(get=get_IsAbstract))  IsAbstract;

 bool __declspec(property(get=get_IsConstructor))  IsConstructor;

 bool __declspec(property(get=get_IsStatic))  IsStatic;

 bool __declspec(property(get=get_IsVirtual))  IsVirtual;

 bool __declspec(property(get=get_IsPublic))  IsPublic;

 bool __declspec(property(get=get_IsGenericMethod))  IsGenericMethod;

 bool __declspec(property(get=get_IsGenericMethodDefinition))  IsGenericMethodDefinition;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 System::RuntimeMethodHandle __declspec(property(get=get_MethodHandle))  MethodHandle;

 bool __declspec(property(get=get_IsSecurityCritical))  IsSecurityCritical;


// Methods

static System::Reflection::MethodBase New_ctor() ;

/// @brief Method .ctor addr 0x2378ec0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParameters() ;

/// @brief Method get_Attributes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method GetMethodImplementationFlags addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method get_CallingConvention addr 0x237ae18 size 0x8 virtual true final false
 System::Reflection::CallingConventions get_CallingConvention() ;

/// @brief Method get_IsAbstract addr 0x237ae20 size 0x20 virtual true final true
 bool get_IsAbstract() ;

/// @brief Method get_IsConstructor addr 0x237ae40 size 0xa4 virtual true final true
 bool get_IsConstructor() ;

/// @brief Method get_IsStatic addr 0x237aee4 size 0x20 virtual true final true
 bool get_IsStatic() ;

/// @brief Method get_IsVirtual addr 0x237af04 size 0x20 virtual true final true
 bool get_IsVirtual() ;

/// @brief Method get_IsPublic addr 0x237af24 size 0x28 virtual true final true
 bool get_IsPublic() ;

/// @brief Method get_IsGenericMethod addr 0x237af4c size 0x8 virtual true final false
 bool get_IsGenericMethod() ;

/// @brief Method get_IsGenericMethodDefinition addr 0x237af54 size 0x8 virtual true final false
 bool get_IsGenericMethodDefinition() ;

/// @brief Method GetGenericArguments addr 0x237af5c size 0x50 virtual true final false
 ::ArrayW<System::Type> GetGenericArguments() ;

/// @brief Method get_ContainsGenericParameters addr 0x237afac size 0x8 virtual true final false
 bool get_ContainsGenericParameters() ;

/// @brief Method Invoke addr 0x237afb4 size 0x20 virtual true final true
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture) ;

/// @brief Method get_MethodHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_IsSecurityCritical addr 0x237afd4 size 0x28 virtual true final false
 bool get_IsSecurityCritical() ;

/// @brief Method Equals addr 0x2378ef8 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2378f08 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x237abe4 size 0x1b4 virtual false final false
static bool op_Equality(System::Reflection::MethodBase left, System::Reflection::MethodBase right) ;

/// @brief Method op_Inequality addr 0x237abcc size 0x18 virtual false final false
static bool op_Inequality(System::Reflection::MethodBase left, System::Reflection::MethodBase right) ;

/// @brief Method GetParametersInternal addr 0x237b064 size 0x10 virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParametersInternal() ;

/// @brief Method GetParametersCount addr 0x237b074 size 0x28 virtual true final false
 int32_t GetParametersCount() ;

/// @brief Method FormatNameAndSig addr 0x237b09c size 0x12c virtual true final false
 ::StringW FormatNameAndSig(bool serialization) ;

/// @brief Method GetParameterTypes addr 0x237b3b4 size 0x108 virtual true final false
 ::ArrayW<System::Type> GetParameterTypes() ;

/// @brief Method GetParametersNoCopy addr 0x237b4bc size 0x10 virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParametersNoCopy() ;

/// @brief Method GetMethodFromHandle addr 0x237b4cc size 0x208 virtual false final false
static System::Reflection::MethodBase GetMethodFromHandle(System::RuntimeMethodHandle handle) ;

/// @brief Method ConstructParameters addr 0x237b1c8 size 0x1ec virtual false final false
static ::StringW ConstructParameters(::ArrayW<System::Type> parameterTypes, System::Reflection::CallingConventions callingConvention, bool serialization) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::MethodBase);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodBase, "System.Reflection", "MethodBase");
