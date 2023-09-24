#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaObject;
}
// Type: UnityEngine::AndroidJavaObject
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14881))
// CS Name: UnityEngine.AndroidJavaObject
class CORDL_TYPE AndroidJavaObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AndroidJavaObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: " const&", def_value: None }]
constexpr AndroidJavaObject(AndroidJavaObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: "&&", def_value: None }]
constexpr AndroidJavaObject(AndroidJavaObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJavaObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidJavaObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJavaObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJavaObject& operator=(AndroidJavaObject&& o) noexcept = default;
  constexpr AndroidJavaObject& operator=(AndroidJavaObject const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_enableDebugPrints, put=__set_enableDebugPrints))  enableDebugPrints;

static void __set_enableDebugPrints(bool value) ;

static bool __get_enableDebugPrints() ;

 UnityEngine::GlobalJavaObjectRef __declspec(property(get=__get_m_jobject, put=__set_m_jobject))  m_jobject;

constexpr void __set_m_jobject(UnityEngine::GlobalJavaObjectRef value) ;

constexpr UnityEngine::GlobalJavaObjectRef __get_m_jobject() const;

 UnityEngine::GlobalJavaObjectRef __declspec(property(get=__get_m_jclass, put=__set_m_jclass))  m_jclass;

constexpr void __set_m_jclass(UnityEngine::GlobalJavaObjectRef value) ;

constexpr UnityEngine::GlobalJavaObjectRef __get_m_jclass() const;


// Methods

static UnityEngine::AndroidJavaObject New_ctor(::StringW className, ::ArrayW<::StringW> args) ;

/// @brief Method .ctor addr 0x2b1084c size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<::StringW> args) ;

static UnityEngine::AndroidJavaObject New_ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaObject> args) ;

/// @brief Method .ctor addr 0x2b10b04 size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaObject> args) ;

static UnityEngine::AndroidJavaObject New_ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaClass> args) ;

/// @brief Method .ctor addr 0x2b10bb8 size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaClass> args) ;

static UnityEngine::AndroidJavaObject New_ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaProxy> args) ;

/// @brief Method .ctor addr 0x2b10c6c size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaProxy> args) ;

static UnityEngine::AndroidJavaObject New_ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaRunnable> args) ;

/// @brief Method .ctor addr 0x2b10d20 size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaRunnable> args) ;

static UnityEngine::AndroidJavaObject New_ctor(::StringW className, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method .ctor addr 0x2b10dd4 size 0x34 virtual false final false
 void _ctor(::StringW className, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Dispose addr 0x2b1026c size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Call(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method Call addr 0x2b10e08 size 0x4 virtual false final false
 void Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void CallStatic(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method CallStatic addr 0x2b10f48 size 0x4 virtual false final false
 void CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType Get(::StringW fieldName) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void Set(::StringW fieldName, FieldType val) ;

/// @brief Method GetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType GetStatic(::StringW fieldName) ;

/// @brief Method SetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void SetStatic(::StringW fieldName, FieldType val) ;

/// @brief Method GetRawObject addr 0x2b10390 size 0x5c virtual false final false
 ::cordl_internals::intptr_t GetRawObject() ;

/// @brief Method GetRawClass addr 0x2b110e4 size 0x1c virtual false final false
 ::cordl_internals::intptr_t GetRawClass() ;

/// @brief Method CloneReference addr 0x2b1111c size 0x15c virtual false final false
 UnityEngine::AndroidJavaObject CloneReference() ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType,typename T>
 ReturnType Call(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType,typename T>
 ReturnType CallStatic(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method DebugPrint addr 0x2b1136c size 0x88 virtual false final false
 void DebugPrint(::StringW msg) ;

/// @brief Method DebugPrint addr 0x2b113f4 size 0x358 virtual false final false
 void DebugPrint(::StringW call, ::StringW methodName, ::StringW signature, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _AndroidJavaObject addr 0x2b10908 size 0x1fc virtual false final false
 void _AndroidJavaObject(::StringW className, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static UnityEngine::AndroidJavaObject New_ctor(::cordl_internals::intptr_t jobject) ;

/// @brief Method .ctor addr 0x2b11770 size 0x124 virtual false final false
 void _ctor(::cordl_internals::intptr_t jobject) ;

static UnityEngine::AndroidJavaObject New_ctor() ;

/// @brief Method .ctor addr 0x2b10900 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2b11894 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2b11934 size 0x30 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method _Call addr 0x2b10e0c size 0x13c virtual false final false
 void _Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType _Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType _Get(::StringW fieldName) ;

/// @brief Method _Set addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void _Set(::StringW fieldName, FieldType val) ;

/// @brief Method _CallStatic addr 0x2b10f4c size 0x13c virtual false final false
 void _CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType _CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _GetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType _GetStatic(::StringW fieldName) ;

/// @brief Method _SetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void _SetStatic(::StringW fieldName, FieldType val) ;

/// @brief Method AndroidJavaObjectDeleteLocalRef addr 0x2b10554 size 0xc8 virtual false final false
static UnityEngine::AndroidJavaObject AndroidJavaObjectDeleteLocalRef(::cordl_internals::intptr_t jobject) ;

/// @brief Method AndroidJavaClassDeleteLocalRef addr 0x2b1199c size 0xc8 virtual false final false
static UnityEngine::AndroidJavaClass AndroidJavaClassDeleteLocalRef(::cordl_internals::intptr_t jclass) ;

/// @brief Method FromJavaArrayDeleteLocalRef addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ReturnType FromJavaArrayDeleteLocalRef(::cordl_internals::intptr_t jobject) ;

/// @brief Method _GetRawObject addr 0x2b11088 size 0x5c virtual false final false
 ::cordl_internals::intptr_t _GetRawObject() ;

/// @brief Method _GetRawClass addr 0x2b11100 size 0x1c virtual false final false
 ::cordl_internals::intptr_t _GetRawClass() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJavaObject);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaObject, "UnityEngine", "AndroidJavaObject");
