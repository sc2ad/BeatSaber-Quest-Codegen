#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct RuntimeMethodHandle;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class Binder;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Exception;
}
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeConstructorInfo;
}
// Type: System.Reflection::RuntimeConstructorInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3516))
// CS Name: System.Reflection.RuntimeConstructorInfo
class CORDL_TYPE RuntimeConstructorInfo : public System::Reflection::ConstructorInfo {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RuntimeConstructorInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeConstructorInfo", modifiers: " const&", def_value: None }]
constexpr RuntimeConstructorInfo(RuntimeConstructorInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeConstructorInfo", modifiers: "&&", def_value: None }]
constexpr RuntimeConstructorInfo(RuntimeConstructorInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeConstructorInfo(void* ptr) noexcept : System::Reflection::ConstructorInfo(ptr) {
}


  constexpr RuntimeConstructorInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeConstructorInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeConstructorInfo& operator=(RuntimeConstructorInfo&& o) noexcept = default;
  constexpr RuntimeConstructorInfo& operator=(RuntimeConstructorInfo const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_mhandle, put=__set_mhandle))  mhandle;

constexpr void __set_mhandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_mhandle() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Type __declspec(property(get=__get_reftype, put=__set_reftype))  reftype;

constexpr void __set_reftype(System::Type value) ;

constexpr System::Type __get_reftype() const;


// Properties

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 System::Reflection::BindingFlags __declspec(property(get=get_BindingFlags))  BindingFlags;

 System::RuntimeType __declspec(property(get=get_ReflectedTypeInternal))  ReflectedTypeInternal;

 System::RuntimeMethodHandle __declspec(property(get=get_MethodHandle))  MethodHandle;

 System::Reflection::MethodAttributes __declspec(property(get=get_Attributes))  Attributes;

 System::Reflection::CallingConventions __declspec(property(get=get_CallingConvention))  CallingConvention;

 bool __declspec(property(get=get_ContainsGenericParameters))  ContainsGenericParameters;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 bool __declspec(property(get=get_IsSecurityCritical))  IsSecurityCritical;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;


// Methods

/// @brief Method get_Module addr 0x2388730 size 0x4 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method GetRuntimeModule addr 0x2388734 size 0x88 virtual false final false
 System::Reflection::RuntimeModule GetRuntimeModule() ;

/// @brief Method get_BindingFlags addr 0x23887bc size 0x8 virtual false final false
 System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_ReflectedTypeInternal addr 0x23887c4 size 0x84 virtual false final false
 System::RuntimeType get_ReflectedTypeInternal() ;

/// @brief Method GetObjectData addr 0x2388848 size 0xd8 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SerializationToString addr 0x2381ba4 size 0x14 virtual false final false
 ::StringW SerializationToString() ;

/// @brief Method SerializationInvoke addr 0x2388920 size 0x12c virtual false final false
 void SerializationInvoke(::bs_hook::Il2CppWrapperType target, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetMethodImplementationFlags addr 0x2388a4c size 0x2c virtual true final false
 System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method GetParameters addr 0x2388a78 size 0xc virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParameters() ;

/// @brief Method GetParametersInternal addr 0x2388a84 size 0xc virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParametersInternal() ;

/// @brief Method GetParametersCount addr 0x2388a90 size 0x20 virtual true final false
 int32_t GetParametersCount() ;

/// @brief Method InternalInvoke addr 0x2388ab0 size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType InternalInvoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ByRef<System::Exception> exc) ;

/// @brief Method Invoke addr 0x2388ab4 size 0x108 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture) ;

/// @brief Method DoInvoke addr 0x2388bbc size 0x1f4 virtual false final false
 ::bs_hook::Il2CppWrapperType DoInvoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture) ;

/// @brief Method InternalInvoke addr 0x2388db0 size 0x15c virtual false final false
 ::bs_hook::Il2CppWrapperType InternalInvoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, bool wrapExceptions) ;

/// @brief Method Invoke addr 0x2388f0c size 0x18 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture) ;

/// @brief Method get_MethodHandle addr 0x2388f24 size 0x8 virtual true final false
 System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_Attributes addr 0x2388f2c size 0x8 virtual true final false
 System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method get_CallingConvention addr 0x2388f34 size 0x2c virtual true final false
 System::Reflection::CallingConventions get_CallingConvention() ;

/// @brief Method get_ContainsGenericParameters addr 0x2388f60 size 0x2c virtual true final false
 bool get_ContainsGenericParameters() ;

/// @brief Method get_ReflectedType addr 0x2388f8c size 0x8 virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method get_DeclaringType addr 0x2388f94 size 0x2c virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x2388fc0 size 0x14 virtual true final false
 ::StringW get_Name() ;

/// @brief Method IsDefined addr 0x2388fd4 size 0x70 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x2389044 size 0x68 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23890ac size 0x70 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method ToString addr 0x238911c size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_core_clr_security_level addr 0x2389184 size 0x8 virtual false final false
static int32_t get_core_clr_security_level() ;

/// @brief Method get_IsSecurityCritical addr 0x238918c size 0x8 virtual true final false
 bool get_IsSecurityCritical() ;

/// @brief Method get_MetadataToken addr 0x2389194 size 0x4 virtual true final false
 int32_t get_MetadataToken() ;

/// @brief Method get_metadata_token addr 0x2389198 size 0x4 virtual false final false
static int32_t get_metadata_token(System::Reflection::RuntimeConstructorInfo method) ;

// Ctor Parameters []
explicit RuntimeConstructorInfo() ;

/// @brief Method .ctor addr 0x238919c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::RuntimeConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeConstructorInfo, "System.Reflection", "RuntimeConstructorInfo");
