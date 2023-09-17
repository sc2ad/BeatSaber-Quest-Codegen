#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System {
class Delegate;
}
namespace System {
class Exception;
}
namespace System::Reflection {
struct PInvokeAttributes;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeMethodInfo;
}
// Type: System.Reflection::RuntimeMethodInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3515))
// CS Name: System.Reflection.RuntimeMethodInfo
class CORDL_TYPE RuntimeMethodInfo : public ::System::Reflection::MethodInfo {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RuntimeMethodInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: " const&", def_value: None }]
constexpr RuntimeMethodInfo(RuntimeMethodInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: "&&", def_value: None }]
constexpr RuntimeMethodInfo(RuntimeMethodInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeMethodInfo(void* ptr) noexcept : ::System::Reflection::MethodInfo(ptr) {
}


  constexpr RuntimeMethodInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeMethodInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeMethodInfo& operator=(RuntimeMethodInfo&& o) noexcept = default;
  constexpr RuntimeMethodInfo& operator=(RuntimeMethodInfo const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_mhandle, put=__set_mhandle))  mhandle;

constexpr void __set_mhandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_mhandle() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::System::Type __declspec(property(get=__get_reftype, put=__set_reftype))  reftype;

constexpr void __set_reftype(::System::Type value) ;

constexpr ::System::Type __get_reftype() const;


// Properties

 ::System::Reflection::BindingFlags __declspec(property(get=get_BindingFlags))  BindingFlags;

 ::System::Reflection::Module __declspec(property(get=get_Module))  Module;

 ::System::RuntimeType __declspec(property(get=get_ReflectedTypeInternal))  ReflectedTypeInternal;

 ::System::Reflection::ParameterInfo __declspec(property(get=get_ReturnParameter))  ReturnParameter;

 ::System::Type __declspec(property(get=get_ReturnType))  ReturnType;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;

 ::System::RuntimeMethodHandle __declspec(property(get=get_MethodHandle))  MethodHandle;

 ::System::Reflection::MethodAttributes __declspec(property(get=get_Attributes))  Attributes;

 ::System::Reflection::CallingConventions __declspec(property(get=get_CallingConvention))  CallingConvention;

 ::System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 ::System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 bool __declspec(property(get=get_IsGenericMethodDefinition))  IsGenericMethodDefinition;

 bool __declspec(property(get=get_IsGenericMethod))  IsGenericMethod;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 bool __declspec(property(get=get_IsSecurityCritical))  IsSecurityCritical;


// Methods

/// @brief Method get_BindingFlags addr 0x23868f0 size 0x8 virtual false final false
 ::System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_Module addr 0x23868f8 size 0x4 virtual true final false
 ::System::Reflection::Module get_Module() ;

/// @brief Method get_ReflectedTypeInternal addr 0x2386988 size 0x84 virtual false final false
 ::System::RuntimeType get_ReflectedTypeInternal() ;

/// @brief Method FormatNameAndSig addr 0x2386a0c size 0x160 virtual true final false
 ::StringW FormatNameAndSig(bool serialization) ;

/// @brief Method CreateDelegate addr 0x2386d60 size 0x18 virtual true final false
 ::System::Delegate CreateDelegate(::System::Type delegateType, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method ToString addr 0x2386d78 size 0x90 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetRuntimeModule addr 0x23868fc size 0x8c virtual false final false
 ::System::Reflection::RuntimeModule GetRuntimeModule() ;

/// @brief Method GetObjectData addr 0x2386e08 size 0x120 virtual true final true
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SerializationToString addr 0x2381bb8 size 0x9c virtual false final false
 ::StringW SerializationToString() ;

/// @brief Method GetMethodFromHandleNoGenericCheck addr 0x2386f28 size 0x54 virtual false final false
static ::System::Reflection::MethodBase GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle) ;

/// @brief Method GetMethodFromHandleNoGenericCheck addr 0x2386f84 size 0x8 virtual false final false
static ::System::Reflection::MethodBase GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType) ;

/// @brief Method GetMethodFromHandleInternalType addr 0x237b6d4 size 0x8 virtual false final false
static ::System::Reflection::MethodBase GetMethodFromHandleInternalType(::cordl_internals::intptr_t method_handle, ::cordl_internals::intptr_t type_handle) ;

/// @brief Method GetMethodFromHandleInternalType_native addr 0x2386f7c size 0x8 virtual false final false
static ::System::Reflection::MethodBase GetMethodFromHandleInternalType_native(::cordl_internals::intptr_t method_handle, ::cordl_internals::intptr_t type_handle, bool genericCheck) ;

// Ctor Parameters []
explicit RuntimeMethodInfo() ;

/// @brief Method .ctor addr 0x2386f8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_name addr 0x2386f94 size 0x4 virtual false final false
static ::StringW get_name(::System::Reflection::MethodBase method) ;

/// @brief Method get_base_method addr 0x2386f98 size 0x8 virtual false final false
static ::System::Reflection::RuntimeMethodInfo get_base_method(::System::Reflection::RuntimeMethodInfo method, bool definition) ;

/// @brief Method get_metadata_token addr 0x2386fa0 size 0x4 virtual false final false
static int32_t get_metadata_token(::System::Reflection::RuntimeMethodInfo method) ;

/// @brief Method GetBaseDefinition addr 0x2386fa4 size 0x8 virtual true final false
 ::System::Reflection::MethodInfo GetBaseDefinition() ;

/// @brief Method GetBaseMethod addr 0x2386fac size 0x8 virtual false final false
 ::System::Reflection::MethodInfo GetBaseMethod() ;

/// @brief Method get_ReturnParameter addr 0x2386fb4 size 0x4 virtual true final false
 ::System::Reflection::ParameterInfo get_ReturnParameter() ;

/// @brief Method get_ReturnType addr 0x2386fb8 size 0x2c virtual true final false
 ::System::Type get_ReturnType() ;

/// @brief Method get_MetadataToken addr 0x2386fe4 size 0x4 virtual true final false
 int32_t get_MetadataToken() ;

/// @brief Method GetMethodImplementationFlags addr 0x2386fe8 size 0x2c virtual true final false
 ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method GetParameters addr 0x2387014 size 0x90 virtual true final false
 ::ArrayW<::System::Reflection::ParameterInfo> GetParameters() ;

/// @brief Method GetParametersInternal addr 0x23870a4 size 0xc virtual true final false
 ::ArrayW<::System::Reflection::ParameterInfo> GetParametersInternal() ;

/// @brief Method GetParametersCount addr 0x23870b0 size 0x24 virtual true final false
 int32_t GetParametersCount() ;

/// @brief Method InternalInvoke addr 0x23870d4 size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType InternalInvoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ByRef<::System::Exception> exc) ;

/// @brief Method Invoke addr 0x23870d8 size 0x2f4 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ::System::Globalization::CultureInfo culture) ;

/// @brief Method ConvertValues addr 0x23873cc size 0x2b8 virtual false final false
static void ConvertValues(::System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<::System::Reflection::ParameterInfo> pinfo, ::System::Globalization::CultureInfo culture, ::System::Reflection::BindingFlags invokeAttr) ;

/// @brief Method get_MethodHandle addr 0x2387684 size 0x8 virtual true final false
 ::System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_Attributes addr 0x238768c size 0x8 virtual true final false
 ::System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method get_CallingConvention addr 0x2387694 size 0x2c virtual true final false
 ::System::Reflection::CallingConventions get_CallingConvention() ;

/// @brief Method get_ReflectedType addr 0x23876c0 size 0x8 virtual true final false
 ::System::Type get_ReflectedType() ;

/// @brief Method get_DeclaringType addr 0x23876c8 size 0x2c virtual true final false
 ::System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x23876f4 size 0x14 virtual true final false
 ::StringW get_Name() ;

/// @brief Method IsDefined addr 0x2387708 size 0x70 virtual true final false
 bool IsDefined(::System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x2387778 size 0x68 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23877e0 size 0x70 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(::System::Type attributeType, bool inherit) ;

/// @brief Method GetPInvoke addr 0x2387850 size 0x4 virtual false final false
 void GetPInvoke(ByRef<::System::Reflection::PInvokeAttributes> flags, ByRef<::StringW> entryPoint, ByRef<::StringW> dllName) ;

/// @brief Method GetPseudoCustomAttributes addr 0x2387854 size 0x16c virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetPseudoCustomAttributes() ;

/// @brief Method GetPseudoCustomAttributesData addr 0x23879c0 size 0x1cc virtual false final false
 ::ArrayW<::System::Reflection::CustomAttributeData> GetPseudoCustomAttributesData() ;

/// @brief Method GetDllImportAttributeData addr 0x2387b8c size 0x71c virtual false final false
 ::System::Reflection::CustomAttributeData GetDllImportAttributeData() ;

/// @brief Method MakeGenericMethod addr 0x23882a8 size 0x34c virtual true final false
 ::System::Reflection::MethodInfo MakeGenericMethod(::ArrayW<::System::Type> methodInstantiation) ;

/// @brief Method MakeGenericMethod_impl addr 0x23885f4 size 0x4 virtual false final false
 ::System::Reflection::MethodInfo MakeGenericMethod_impl(::ArrayW<::System::Type> types) ;

/// @brief Method GetGenericArguments addr 0x23885f8 size 0x4 virtual true final false
 ::ArrayW<::System::Type> GetGenericArguments() ;

/// @brief Method GetGenericMethodDefinition_impl addr 0x23885fc size 0x4 virtual false final false
 ::System::Reflection::MethodInfo GetGenericMethodDefinition_impl() ;

/// @brief Method GetGenericMethodDefinition addr 0x2388600 size 0x50 virtual true final false
 ::System::Reflection::MethodInfo GetGenericMethodDefinition() ;

/// @brief Method get_IsGenericMethodDefinition addr 0x2388650 size 0x4 virtual true final false
 bool get_IsGenericMethodDefinition() ;

/// @brief Method get_IsGenericMethod addr 0x2388654 size 0x4 virtual true final false
 bool get_IsGenericMethod() ;

/// @brief Method get_ContainsGenericParameters addr 0x2388658 size 0xc8 virtual true final false
 bool get_ContainsGenericParameters() ;

/// @brief Method get_core_clr_security_level addr 0x2388720 size 0x8 virtual false final false
static int32_t get_core_clr_security_level() ;

/// @brief Method get_IsSecurityCritical addr 0x2388728 size 0x8 virtual true final false
 bool get_IsSecurityCritical() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::RuntimeMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeMethodInfo, "System.Reflection", "RuntimeMethodInfo");
