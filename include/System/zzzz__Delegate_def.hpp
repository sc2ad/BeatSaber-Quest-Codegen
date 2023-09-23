#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class ICloneable;
}
namespace System {
class DelegateData;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class MulticastDelegate;
}
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System {
class Delegate;
}
// Type: System::Delegate
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2588))
// CS Name: System.Delegate
class CORDL_TYPE Delegate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~Delegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "Delegate", modifiers: " const&", def_value: None }]
constexpr Delegate(Delegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Delegate", modifiers: "&&", def_value: None }]
constexpr Delegate(Delegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Delegate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Delegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Delegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Delegate& operator=(Delegate&& o) noexcept = default;
  constexpr Delegate& operator=(Delegate const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_method_ptr, put=__set_method_ptr))  method_ptr;

constexpr void __set_method_ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_method_ptr() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_invoke_impl, put=__set_invoke_impl))  invoke_impl;

constexpr void __set_invoke_impl(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_invoke_impl() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_target, put=__set_m_target))  m_target;

constexpr void __set_m_target(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_target() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_method() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_delegate_trampoline, put=__set_delegate_trampoline))  delegate_trampoline;

constexpr void __set_delegate_trampoline(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_delegate_trampoline() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_extra_arg, put=__set_extra_arg))  extra_arg;

constexpr void __set_extra_arg(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_extra_arg() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_method_code, put=__set_method_code))  method_code;

constexpr void __set_method_code(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_method_code() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_interp_method, put=__set_interp_method))  interp_method;

constexpr void __set_interp_method(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_interp_method() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_interp_invoke_impl, put=__set_interp_invoke_impl))  interp_invoke_impl;

constexpr void __set_interp_invoke_impl(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_interp_invoke_impl() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_method_info, put=__set_method_info))  method_info;

constexpr void __set_method_info(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_method_info() const;

 System::Reflection::MethodInfo __declspec(property(get=__get_original_method_info, put=__set_original_method_info))  original_method_info;

constexpr void __set_original_method_info(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_original_method_info() const;

 System::DelegateData __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(System::DelegateData value) ;

constexpr System::DelegateData __get_data() const;

 bool __declspec(property(get=__get_method_is_virtual, put=__set_method_is_virtual))  method_is_virtual;

constexpr void __set_method_is_virtual(bool value) ;

constexpr bool __get_method_is_virtual() const;


// Properties

 System::Reflection::MethodInfo __declspec(property(get=get_Method))  Method;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Target))  Target;


// Methods

/// @brief Method get_Method addr 0x248978c size 0xc virtual false final false
 System::Reflection::MethodInfo get_Method() ;

/// @brief Method GetVirtualMethod_internal addr 0x2489798 size 0x4 virtual false final false
 System::Reflection::MethodInfo GetVirtualMethod_internal() ;

/// @brief Method get_Target addr 0x248979c size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Target() ;

/// @brief Method CreateDelegate_internal addr 0x24897a4 size 0x8 virtual false final false
static System::Delegate CreateDelegate_internal(System::Type type, ::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo info, bool throwOnBindFailure) ;

/// @brief Method arg_type_match addr 0x24897ac size 0x190 virtual false final false
static bool arg_type_match(System::Type delArgType, System::Type argType) ;

/// @brief Method arg_type_match_this addr 0x248993c size 0x14c virtual false final false
static bool arg_type_match_this(System::Type delArgType, System::Type argType, bool boxedThis) ;

/// @brief Method return_type_match addr 0x2489a88 size 0x214 virtual false final false
static bool return_type_match(System::Type delReturnType, System::Type returnType) ;

/// @brief Method CreateDelegate addr 0x2489c9c size 0x80c virtual false final false
static System::Delegate CreateDelegate(System::Type type, ::bs_hook::Il2CppWrapperType firstArgument, System::Reflection::MethodInfo method, bool throwOnBindFailure, bool allowClosed) ;

/// @brief Method CreateDelegate addr 0x248a4a8 size 0xc virtual false final false
static System::Delegate CreateDelegate(System::Type type, ::bs_hook::Il2CppWrapperType firstArgument, System::Reflection::MethodInfo method) ;

/// @brief Method CreateDelegate addr 0x248a4b4 size 0x18 virtual false final false
static System::Delegate CreateDelegate(System::Type type, System::Reflection::MethodInfo method, bool throwOnBindFailure) ;

/// @brief Method CreateDelegate addr 0x248a4cc size 0x14 virtual false final false
static System::Delegate CreateDelegate(System::Type type, System::Reflection::MethodInfo method) ;

/// @brief Method CreateDelegate addr 0x248a4e0 size 0xc virtual false final false
static System::Delegate CreateDelegate(System::Type type, ::bs_hook::Il2CppWrapperType target, ::StringW method) ;

/// @brief Method GetCandidateMethod addr 0x248a4f8 size 0x45c virtual false final false
static System::Reflection::MethodInfo GetCandidateMethod(System::Type type, System::Type target, ::StringW method, System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure) ;

/// @brief Method CreateDelegate addr 0x248a954 size 0x12c virtual false final false
static System::Delegate CreateDelegate(System::Type type, System::Type target, ::StringW method, bool ignoreCase, bool throwOnBindFailure) ;

/// @brief Method CreateDelegate addr 0x248aa80 size 0xc virtual false final false
static System::Delegate CreateDelegate(System::Type type, System::Type target, ::StringW method) ;

/// @brief Method CreateDelegate addr 0x248aa8c size 0xe0 virtual false final false
static System::Delegate CreateDelegate(System::Type type, ::bs_hook::Il2CppWrapperType target, ::StringW method, bool ignoreCase, bool throwOnBindFailure) ;

/// @brief Method CreateDelegate addr 0x248a4ec size 0xc virtual false final false
static System::Delegate CreateDelegate(System::Type type, ::bs_hook::Il2CppWrapperType target, ::StringW method, bool ignoreCase) ;

/// @brief Method DynamicInvoke addr 0x248ab6c size 0xc virtual false final false
 ::bs_hook::Il2CppWrapperType DynamicInvoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method InitializeDelegateData addr 0x248ab78 size 0xe8 virtual false final false
 void InitializeDelegateData() ;

/// @brief Method DynamicInvokeImpl addr 0x248ac60 size 0x2c0 virtual true final false
 ::bs_hook::Il2CppWrapperType DynamicInvokeImpl(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Clone addr 0x248af20 size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Equals addr 0x248af28 size 0x1a4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x248b0cc size 0x78 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetMethodImpl addr 0x248b144 size 0xfc virtual true final false
 System::Reflection::MethodInfo GetMethodImpl() ;

/// @brief Method GetObjectData addr 0x248b24c size 0x4 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetInvocationList addr 0x248b498 size 0x90 virtual true final false
 ::ArrayW<System::Delegate> GetInvocationList() ;

/// @brief Method Combine addr 0x2486610 size 0x174 virtual false final false
static System::Delegate Combine(System::Delegate a, System::Delegate b) ;

/// @brief Method Combine addr 0x248b528 size 0x64 virtual false final false
static System::Delegate Combine(::ArrayW<System::Delegate> delegates) ;

/// @brief Method CombineImpl addr 0x248b58c size 0x5c virtual true final false
 System::Delegate CombineImpl(System::Delegate d) ;

/// @brief Method Remove addr 0x248681c size 0x170 virtual false final false
static System::Delegate Remove(System::Delegate source, System::Delegate value) ;

/// @brief Method RemoveImpl addr 0x248b5e8 size 0x24 virtual true final false
 System::Delegate RemoveImpl(System::Delegate d) ;

/// @brief Method op_Equality addr 0x248b60c size 0x28 virtual false final false
static bool op_Equality(System::Delegate d1, System::Delegate d2) ;

/// @brief Method op_Inequality addr 0x248b634 size 0x38 virtual false final false
static bool op_Inequality(System::Delegate d1, System::Delegate d2) ;

/// @brief Method AllocDelegateLike_internal addr 0x248b66c size 0x4 virtual false final false
static System::MulticastDelegate AllocDelegateLike_internal(System::Delegate d) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Delegate);
DEFINE_IL2CPP_ARG_TYPE(System::Delegate, "System", "Delegate");
