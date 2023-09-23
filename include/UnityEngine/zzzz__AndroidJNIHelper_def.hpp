#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Array;
}
namespace UnityEngine {
struct jvalue;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNIHelper;
}
// Type: UnityEngine::AndroidJNIHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14886))
// CS Name: UnityEngine.AndroidJNIHelper
class CORDL_TYPE AndroidJNIHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidJNIHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: " const&", def_value: None }]
constexpr AndroidJNIHelper(AndroidJNIHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "&&", def_value: None }]
constexpr AndroidJNIHelper(AndroidJNIHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJNIHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidJNIHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJNIHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJNIHelper& operator=(AndroidJNIHelper&& o) noexcept = default;
  constexpr AndroidJNIHelper& operator=(AndroidJNIHelper const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_debug, put=set_debug))  debug;


// Methods

/// @brief Method get_debug addr 0x2b15ca4 size 0x28 virtual false final false
static bool get_debug() ;

/// @brief Method set_debug addr 0x2b15ccc size 0x3c virtual false final false
static void set_debug(bool value) ;

/// @brief Method GetConstructorID addr 0x2b15d08 size 0x48 virtual false final false
static ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t javaClass) ;

/// @brief Method GetConstructorID addr 0x2b1458c size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t javaClass, ::StringW signature) ;

/// @brief Method GetMethodID addr 0x2b15d50 size 0x5c virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t javaClass, ::StringW methodName) ;

/// @brief Method GetMethodID addr 0x2b15dac size 0x8 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t javaClass, ::StringW methodName, ::StringW signature) ;

/// @brief Method GetMethodID addr 0x2b10844 size 0x8 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t javaClass, ::StringW methodName, ::StringW signature, bool isStatic) ;

/// @brief Method GetFieldID addr 0x2b15db4 size 0x5c virtual false final false
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t javaClass, ::StringW fieldName) ;

/// @brief Method GetFieldID addr 0x2b15e18 size 0x8 virtual false final false
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t javaClass, ::StringW fieldName, ::StringW signature) ;

/// @brief Method GetFieldID addr 0x2b15e10 size 0x8 virtual false final false
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t javaClass, ::StringW fieldName, ::StringW signature, bool isStatic) ;

/// @brief Method CreateJavaRunnable addr 0x2b13bd4 size 0x4 virtual false final false
static ::cordl_internals::intptr_t CreateJavaRunnable(UnityEngine::AndroidJavaRunnable jrunnable) ;

/// @brief Method CreateJavaProxy addr 0x2b10658 size 0xbc virtual false final false
static ::cordl_internals::intptr_t CreateJavaProxy(UnityEngine::AndroidJavaProxy proxy) ;

/// @brief Method ConvertToJNIArray addr 0x2b15e20 size 0x4 virtual false final false
static ::cordl_internals::intptr_t ConvertToJNIArray(System::Array array) ;

/// @brief Method CreateJNIArgArray addr 0x2b1174c size 0x4 virtual false final false
static ::ArrayW<UnityEngine::jvalue> CreateJNIArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method DeleteJNIArgArray addr 0x2b15e24 size 0x4 virtual false final false
static void DeleteJNIArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<UnityEngine::jvalue> jniArgs) ;

/// @brief Method GetConstructorID addr 0x2b11750 size 0x20 virtual false final false
static ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t jclass, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetMethodID addr 0x2b11964 size 0x38 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool isStatic) ;

/// @brief Method GetSignature addr 0x2b15e28 size 0x4 virtual false final false
static ::StringW GetSignature(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetSignature addr 0x2b15e2c size 0x4 virtual false final false
static ::StringW GetSignature(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method ConvertFromJNIArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ArrayType>
static ArrayType ConvertFromJNIArray(::cordl_internals::intptr_t array) ;

/// @brief Method GetMethodID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool isStatic) ;

/// @brief Method GetFieldID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t jclass, ::StringW fieldName, bool isStatic) ;

/// @brief Method GetSignature addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::StringW GetSignature(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNIHelper, "UnityEngine", "AndroidJNIHelper");
