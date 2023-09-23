#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
// Forward declare root types
namespace System::Reflection {
struct MonoMethodInfo;
}
// Type: System.Reflection::MonoMethodInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3514))
// CS Name: System.Reflection.MonoMethodInfo
struct CORDL_TYPE MonoMethodInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "parent", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "ret", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "System::Reflection::MethodAttributes", modifiers: "", def_value: None }, CppParam { name: "iattrs", ty: "System::Reflection::MethodImplAttributes", modifiers: "", def_value: None }, CppParam { name: "callconv", ty: "System::Reflection::CallingConventions", modifiers: "", def_value: None }]
constexpr MonoMethodInfo(System::Type parent, System::Type ret, System::Reflection::MethodAttributes attrs, System::Reflection::MethodImplAttributes iattrs, System::Reflection::CallingConventions callconv) noexcept;


                    constexpr MonoMethodInfo(MonoMethodInfo const&) = default;
                    constexpr MonoMethodInfo(MonoMethodInfo&&) = default;
                    constexpr MonoMethodInfo& operator=(MonoMethodInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoMethodInfo& operator=(MonoMethodInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoMethodInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Type __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(System::Type value) ;

constexpr System::Type __get_parent() const;

 System::Type __declspec(property(get=__get_ret, put=__set_ret))  ret;

constexpr void __set_ret(System::Type value) ;

constexpr System::Type __get_ret() const;

 System::Reflection::MethodAttributes __declspec(property(get=__get_attrs, put=__set_attrs))  attrs;

constexpr void __set_attrs(System::Reflection::MethodAttributes value) ;

constexpr System::Reflection::MethodAttributes __get_attrs() const;

 System::Reflection::MethodImplAttributes __declspec(property(get=__get_iattrs, put=__set_iattrs))  iattrs;

constexpr void __set_iattrs(System::Reflection::MethodImplAttributes value) ;

constexpr System::Reflection::MethodImplAttributes __get_iattrs() const;

 System::Reflection::CallingConventions __declspec(property(get=__get_callconv, put=__set_callconv))  callconv;

constexpr void __set_callconv(System::Reflection::CallingConventions value) ;

constexpr System::Reflection::CallingConventions __get_callconv() const;


// Methods

/// @brief Method get_method_info addr 0x2386724 size 0x4 virtual false final false
static void get_method_info(::cordl_internals::intptr_t handle, ByRef<System::Reflection::MonoMethodInfo> info) ;

/// @brief Method get_method_attributes addr 0x2386728 size 0x4 virtual false final false
static int32_t get_method_attributes(::cordl_internals::intptr_t handle) ;

/// @brief Method GetMethodInfo addr 0x238672c size 0x30 virtual false final false
static System::Reflection::MonoMethodInfo GetMethodInfo(::cordl_internals::intptr_t handle) ;

/// @brief Method GetDeclaringType addr 0x238675c size 0x28 virtual false final false
static System::Type GetDeclaringType(::cordl_internals::intptr_t handle) ;

/// @brief Method GetReturnType addr 0x2386784 size 0x28 virtual false final false
static System::Type GetReturnType(::cordl_internals::intptr_t handle) ;

/// @brief Method GetAttributes addr 0x23867ac size 0x4 virtual false final false
static System::Reflection::MethodAttributes GetAttributes(::cordl_internals::intptr_t handle) ;

/// @brief Method GetCallingConvention addr 0x23867b0 size 0x28 virtual false final false
static System::Reflection::CallingConventions GetCallingConvention(::cordl_internals::intptr_t handle) ;

/// @brief Method GetMethodImplementationFlags addr 0x23867d8 size 0x28 virtual false final false
static System::Reflection::MethodImplAttributes GetMethodImplementationFlags(::cordl_internals::intptr_t handle) ;

/// @brief Method get_parameter_info addr 0x2386800 size 0x4 virtual false final false
static ::ArrayW<System::Reflection::ParameterInfo> get_parameter_info(::cordl_internals::intptr_t handle, System::Reflection::MemberInfo member) ;

/// @brief Method GetParametersInfo addr 0x2386804 size 0x4 virtual false final false
static ::ArrayW<System::Reflection::ParameterInfo> GetParametersInfo(::cordl_internals::intptr_t handle, System::Reflection::MemberInfo member) ;

/// @brief Method get_retval_marshal addr 0x2386808 size 0x4 virtual false final false
static System::Runtime::InteropServices::MarshalAsAttribute get_retval_marshal(::cordl_internals::intptr_t handle) ;

/// @brief Method GetReturnParameterInfo addr 0x238680c size 0x58 virtual false final false
static System::Reflection::ParameterInfo GetReturnParameterInfo(System::Reflection::RuntimeMethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoMethodInfo, "System.Reflection", "MonoMethodInfo");
