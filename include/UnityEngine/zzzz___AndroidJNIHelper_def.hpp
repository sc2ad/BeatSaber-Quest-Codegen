#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Array;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
struct jvalue;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
// Forward declare root types
namespace UnityEngine {
class _AndroidJNIHelper;
}
// Type: UnityEngine::_AndroidJNIHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14884))
// CS Name: UnityEngine._AndroidJNIHelper
class CORDL_TYPE _AndroidJNIHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~_AndroidJNIHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: " const&", def_value: None }]
constexpr _AndroidJNIHelper(_AndroidJNIHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "&&", def_value: None }]
constexpr _AndroidJNIHelper(_AndroidJNIHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _AndroidJNIHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr _AndroidJNIHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr _AndroidJNIHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr _AndroidJNIHelper& operator=(_AndroidJNIHelper&& o) noexcept = default;
  constexpr _AndroidJNIHelper& operator=(_AndroidJNIHelper const& o) noexcept = default;
                


// Methods

/// @brief Method CreateJavaProxy addr 0x2b126a4 size 0x78 virtual false final false
static ::cordl_internals::intptr_t CreateJavaProxy(::cordl_internals::intptr_t delegateHandle, ::UnityEngine::AndroidJavaProxy proxy) ;

/// @brief Method CreateJavaRunnable addr 0x2b1271c size 0x60 virtual false final false
static ::cordl_internals::intptr_t CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable jrunnable) ;

/// @brief Method InvokeJavaProxyMethod addr 0x2b1277c size 0x498 virtual false final false
static ::cordl_internals::intptr_t InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy proxy, ::cordl_internals::intptr_t jmethodName, ::cordl_internals::intptr_t jargs) ;

/// @brief Method CreateJNIArgArray addr 0x2b12c14 size 0x60c virtual false final false
static ::ArrayW<::UnityEngine::jvalue> CreateJNIArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method UnboxArray addr 0x2b13bd8 size 0x698 virtual false final false
static ::bs_hook::Il2CppWrapperType UnboxArray(::UnityEngine::AndroidJavaObject obj) ;

/// @brief Method Unbox addr 0x2b0f974 size 0x8f8 virtual false final false
static ::bs_hook::Il2CppWrapperType Unbox(::UnityEngine::AndroidJavaObject obj) ;

/// @brief Method Box addr 0x2b0ec68 size 0x958 virtual false final false
static ::UnityEngine::AndroidJavaObject Box(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method DeleteJNIArgArray addr 0x2b14270 size 0x160 virtual false final false
static void DeleteJNIArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<::UnityEngine::jvalue> jniArgs) ;

/// @brief Method ConvertToJNIArray addr 0x2b13220 size 0x9b4 virtual false final false
static ::cordl_internals::intptr_t ConvertToJNIArray(::System::Array array) ;

/// @brief Method ConvertFromJNIArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ArrayType>
static ArrayType ConvertFromJNIArray(::cordl_internals::intptr_t array) ;

/// @brief Method GetConstructorID addr 0x2b14478 size 0x20 virtual false final false
static ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t jclass, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetMethodID addr 0x2b14590 size 0x38 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool isStatic) ;

/// @brief Method GetMethodID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool isStatic) ;

/// @brief Method GetFieldID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t jclass, ::StringW fieldName, bool isStatic) ;

/// @brief Method GetConstructorID addr 0x2b145c8 size 0x200 virtual false final false
static ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t jclass, ::StringW signature) ;

/// @brief Method GetMethodID addr 0x2b147c8 size 0x210 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::StringW signature, bool isStatic) ;

/// @brief Method GetMethodIDFallback addr 0x2b149d8 size 0xfc virtual false final false
static ::cordl_internals::intptr_t GetMethodIDFallback(::cordl_internals::intptr_t jclass, ::StringW methodName, ::StringW signature, bool isStatic) ;

/// @brief Method GetFieldID addr 0x2b14ad4 size 0x318 virtual false final false
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t jclass, ::StringW fieldName, ::StringW signature, bool isStatic) ;

/// @brief Method GetSignature addr 0x2b14e28 size 0xe74 virtual false final false
static ::StringW GetSignature(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetSignature addr 0x2b14498 size 0xf4 virtual false final false
static ::StringW GetSignature(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetSignature addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::StringW GetSignature(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

// Ctor Parameters []
explicit _AndroidJNIHelper() ;

/// @brief Method .ctor addr 0x2b15c9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::_AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_AndroidJNIHelper, "UnityEngine", "_AndroidJNIHelper");
