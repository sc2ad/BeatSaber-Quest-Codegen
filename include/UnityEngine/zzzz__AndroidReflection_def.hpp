#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class GlobalJavaObjectRef;
}
namespace System {
class Type;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine {
class AndroidReflection;
}
// Type: UnityEngine::AndroidReflection
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14883))
// CS Name: UnityEngine.AndroidReflection
class CORDL_TYPE AndroidReflection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidReflection() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidReflection", modifiers: " const&", def_value: None }]
constexpr AndroidReflection(AndroidReflection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidReflection", modifiers: "&&", def_value: None }]
constexpr AndroidReflection(AndroidReflection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidReflection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidReflection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidReflection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidReflection& operator=(AndroidReflection&& o) noexcept = default;
  constexpr AndroidReflection& operator=(AndroidReflection const& o) noexcept = default;
                


// Fields

static ::UnityEngine::GlobalJavaObjectRef __declspec(property(get=__get_s_ReflectionHelperClass, put=__set_s_ReflectionHelperClass))  s_ReflectionHelperClass;

static void __set_s_ReflectionHelperClass(::UnityEngine::GlobalJavaObjectRef value) ;

static ::UnityEngine::GlobalJavaObjectRef __get_s_ReflectionHelperClass() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_ReflectionHelperGetConstructorID, put=__set_s_ReflectionHelperGetConstructorID))  s_ReflectionHelperGetConstructorID;

static void __set_s_ReflectionHelperGetConstructorID(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_ReflectionHelperGetConstructorID() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_ReflectionHelperGetMethodID, put=__set_s_ReflectionHelperGetMethodID))  s_ReflectionHelperGetMethodID;

static void __set_s_ReflectionHelperGetMethodID(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_ReflectionHelperGetMethodID() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_ReflectionHelperGetFieldID, put=__set_s_ReflectionHelperGetFieldID))  s_ReflectionHelperGetFieldID;

static void __set_s_ReflectionHelperGetFieldID(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_ReflectionHelperGetFieldID() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_ReflectionHelperGetFieldSignature, put=__set_s_ReflectionHelperGetFieldSignature))  s_ReflectionHelperGetFieldSignature;

static void __set_s_ReflectionHelperGetFieldSignature(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_ReflectionHelperGetFieldSignature() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_ReflectionHelperNewProxyInstance, put=__set_s_ReflectionHelperNewProxyInstance))  s_ReflectionHelperNewProxyInstance;

static void __set_s_ReflectionHelperNewProxyInstance(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_ReflectionHelperNewProxyInstance() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_ReflectionHelperSetNativeExceptionOnProxy, put=__set_s_ReflectionHelperSetNativeExceptionOnProxy))  s_ReflectionHelperSetNativeExceptionOnProxy;

static void __set_s_ReflectionHelperSetNativeExceptionOnProxy(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_ReflectionHelperSetNativeExceptionOnProxy() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_FieldGetDeclaringClass, put=__set_s_FieldGetDeclaringClass))  s_FieldGetDeclaringClass;

static void __set_s_FieldGetDeclaringClass(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_FieldGetDeclaringClass() ;


// Methods

/// @brief Method IsPrimitive addr 0x2b11b24 size 0x14 virtual false final false
static bool IsPrimitive(::System::Type t) ;

/// @brief Method IsAssignableFrom addr 0x2b11b38 size 0x20 virtual false final false
static bool IsAssignableFrom(::System::Type t, ::System::Type from) ;

/// @brief Method GetStaticMethodID addr 0x2b11b58 size 0x9c virtual false final false
static ::cordl_internals::intptr_t GetStaticMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) ;

/// @brief Method GetMethodID addr 0x2b11bf4 size 0x9c virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::StringW clazz, ::StringW methodName, ::StringW signature) ;

/// @brief Method GetConstructorMember addr 0x2b11c90 size 0x18c virtual false final false
static ::cordl_internals::intptr_t GetConstructorMember(::cordl_internals::intptr_t jclass, ::StringW signature) ;

/// @brief Method GetMethodMember addr 0x2b11e1c size 0x200 virtual false final false
static ::cordl_internals::intptr_t GetMethodMember(::cordl_internals::intptr_t jclass, ::StringW methodName, ::StringW signature, bool isStatic) ;

/// @brief Method GetFieldMember addr 0x2b1201c size 0x200 virtual false final false
static ::cordl_internals::intptr_t GetFieldMember(::cordl_internals::intptr_t jclass, ::StringW fieldName, ::StringW signature, bool isStatic) ;

/// @brief Method GetFieldClass addr 0x2b1221c size 0x64 virtual false final false
static ::cordl_internals::intptr_t GetFieldClass(::cordl_internals::intptr_t field) ;

/// @brief Method GetFieldSignature addr 0x2b12280 size 0xa8 virtual false final false
static ::StringW GetFieldSignature(::cordl_internals::intptr_t field) ;

/// @brief Method NewProxyInstance addr 0x2b12328 size 0xd0 virtual false final false
static ::cordl_internals::intptr_t NewProxyInstance(::cordl_internals::intptr_t delegateHandle, ::cordl_internals::intptr_t interfaze) ;

/// @brief Method SetNativeExceptionOnProxy addr 0x2b0f704 size 0x10c virtual false final false
static void SetNativeExceptionOnProxy(::cordl_internals::intptr_t proxy, ::System::Exception e, bool methodNotFound) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AndroidReflection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidReflection, "UnityEngine", "AndroidReflection");
