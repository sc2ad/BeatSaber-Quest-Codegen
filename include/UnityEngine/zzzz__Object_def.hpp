#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/unityw.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct HideFlags;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class Object;
}
// Type: UnityEngine::Object
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10142))
// CS Name: UnityEngine.Object
class CORDL_TYPE Object : public bs_hook::UnityW {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Object() = default;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: " const&", def_value: None }]
constexpr Object(Object const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
constexpr Object(Object&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Object(void* ptr) noexcept : UnityW(ptr) {
}


  constexpr Object& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Object& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Object& operator=(Object&& o) noexcept = default;
  constexpr Object& operator=(Object const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_CachedPtr, put=__set_m_CachedPtr))  m_CachedPtr;

constexpr void __set_m_CachedPtr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_CachedPtr() const;

static int32_t __declspec(property(get=__get_OffsetOfInstanceIDInCPlusPlusObject, put=__set_OffsetOfInstanceIDInCPlusPlusObject))  OffsetOfInstanceIDInCPlusPlusObject;

static void __set_OffsetOfInstanceIDInCPlusPlusObject(int32_t value) ;

static int32_t __get_OffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Field objectIsNullMessage offset 0
static constexpr ::ConstString  objectIsNullMessage{u"The Object you want to instantiate is null."};

/// @brief Field cloneDestroyedMessage offset 0
static constexpr ::ConstString  cloneDestroyedMessage{u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake."};


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 ::UnityEngine::HideFlags __declspec(property(get=get_hideFlags, put=set_hideFlags))  hideFlags;


// Methods

/// @brief Method GetInstanceID addr 0x2b4d54c size 0x134 virtual false final false
 int32_t GetInstanceID() ;

/// @brief Method GetHashCode addr 0x2b57cec size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b57cf4 size 0xfc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method op_Implicit addr 0x2b57ef4 size 0x64 virtual false final false
static bool op_Implicit_bool(::UnityEngine::Object exists) ;

/// @brief Method CompareBaseObjects addr 0x2b57e54 size 0xa0 virtual false final false
static bool CompareBaseObjects(::UnityEngine::Object lhs, ::UnityEngine::Object rhs) ;

/// @brief Method EnsureRunningOnMainThread addr 0x2b57fb4 size 0xc0 virtual false final false
 void EnsureRunningOnMainThread() ;

/// @brief Method IsNativeObjectAlive addr 0x2b57f58 size 0x5c virtual false final false
static bool IsNativeObjectAlive(::UnityEngine::Object o) ;

/// @brief Method GetCachedPtr addr 0x2b5809c size 0x8 virtual false final false
 ::cordl_internals::intptr_t GetCachedPtr() ;

/// @brief Method get_name addr 0x2b580a4 size 0x74 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2b58154 size 0x84 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method Instantiate addr 0x2b5821c size 0x1b8 virtual false final false
static ::UnityEngine::Object Instantiate(::UnityEngine::Object original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) ;

/// @brief Method Instantiate addr 0x2b58538 size 0x1a8 virtual false final false
static ::UnityEngine::Object Instantiate(::UnityEngine::Object original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x2b58788 size 0xf4 virtual false final false
static ::UnityEngine::Object Instantiate(::UnityEngine::Object original) ;

/// @brief Method Instantiate addr 0x2b588b8 size 0x68 virtual false final false
static ::UnityEngine::Object Instantiate(::UnityEngine::Object original, ::UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x2b58920 size 0x14c virtual false final false
static ::UnityEngine::Object Instantiate(::UnityEngine::Object original, ::UnityEngine::Transform parent, bool instantiateInWorldSpace) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, ::UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, ::UnityEngine::Transform parent, bool worldPositionStays) ;

/// @brief Method Destroy addr 0x2b58ac0 size 0x4c virtual false final false
static void Destroy(::UnityEngine::Object obj, float_t t) ;

/// @brief Method Destroy addr 0x2b58b0c size 0x78 virtual false final false
static void Destroy(::UnityEngine::Object obj) ;

/// @brief Method DestroyImmediate addr 0x2b58b84 size 0x44 virtual false final false
static void DestroyImmediate(::UnityEngine::Object obj, bool allowDestroyingAssets) ;

/// @brief Method DestroyImmediate addr 0x2b58bc8 size 0x78 virtual false final false
static void DestroyImmediate(::UnityEngine::Object obj) ;

/// @brief Method FindObjectsOfType addr 0x2b58c40 size 0x78 virtual false final false
static ::ArrayW<::UnityEngine::Object> FindObjectsOfType(::System::Type type) ;

/// @brief Method FindObjectsOfType addr 0x2b58cb8 size 0x44 virtual false final false
static ::ArrayW<::UnityEngine::Object> FindObjectsOfType(::System::Type type, bool includeInactive) ;

/// @brief Method DontDestroyOnLoad addr 0x2b58cfc size 0x3c virtual false final false
static void DontDestroyOnLoad(::UnityEngine::Object target) ;

/// @brief Method get_hideFlags addr 0x2b58d38 size 0x3c virtual false final false
 ::UnityEngine::HideFlags get_hideFlags() ;

/// @brief Method set_hideFlags addr 0x2b58d74 size 0x44 virtual false final false
 void set_hideFlags(::UnityEngine::HideFlags value) ;

/// @brief Method DestroyObject addr 0x2b58db8 size 0x84 virtual false final false
static void DestroyObject(::UnityEngine::Object obj, float_t t) ;

/// @brief Method DestroyObject addr 0x2b58e3c size 0x78 virtual false final false
static void DestroyObject(::UnityEngine::Object obj) ;

/// @brief Method FindSceneObjectsOfType addr 0x2b58eb4 size 0x54 virtual false final false
static ::ArrayW<::UnityEngine::Object> FindSceneObjectsOfType(::System::Type type) ;

/// @brief Method FindObjectsOfTypeIncludingAssets addr 0x2b58f08 size 0x3c virtual false final false
static ::ArrayW<::UnityEngine::Object> FindObjectsOfTypeIncludingAssets(::System::Type type) ;

/// @brief Method FindObjectsOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> FindObjectsOfType() ;

/// @brief Method FindObjectsOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> FindObjectsOfType(bool includeInactive) ;

/// @brief Method FindObjectOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T FindObjectOfType() ;

/// @brief Method FindObjectOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T FindObjectOfType(bool includeInactive) ;

/// @brief Method FindObjectsOfTypeAll addr 0x2b58f44 size 0x8 virtual false final false
static ::ArrayW<::UnityEngine::Object> FindObjectsOfTypeAll(::System::Type type) ;

/// @brief Method CheckNullArgument addr 0x2b583d4 size 0x54 virtual false final false
static void CheckNullArgument(::bs_hook::Il2CppWrapperType arg, ::StringW message) ;

/// @brief Method FindObjectOfType addr 0x2b58f4c size 0x98 virtual false final false
static ::UnityEngine::Object FindObjectOfType(::System::Type type) ;

/// @brief Method FindObjectOfType addr 0x2b58fe4 size 0xa4 virtual false final false
static ::UnityEngine::Object FindObjectOfType(::System::Type type, bool includeInactive) ;

/// @brief Method ToString addr 0x2b59088 size 0x74 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x2b57df0 size 0x64 virtual false final false
static bool op_Equality(::UnityEngine::Object x, ::UnityEngine::Object y) ;

/// @brief Method op_Inequality addr 0x2b4d4dc size 0x70 virtual false final false
static bool op_Inequality(::UnityEngine::Object x, ::UnityEngine::Object y) ;

/// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject addr 0x2b57cc4 size 0x28 virtual false final false
static int32_t GetOffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method CurrentThreadIsMainThread addr 0x2b58074 size 0x28 virtual false final false
static bool CurrentThreadIsMainThread() ;

/// @brief Method Internal_CloneSingle addr 0x2b5887c size 0x3c virtual false final false
static ::UnityEngine::Object Internal_CloneSingle(::UnityEngine::Object data) ;

/// @brief Method Internal_CloneSingleWithParent addr 0x2b58a6c size 0x54 virtual false final false
static ::UnityEngine::Object Internal_CloneSingleWithParent(::UnityEngine::Object data, ::UnityEngine::Transform parent, bool worldPositionStays) ;

/// @brief Method Internal_InstantiateSingle addr 0x2b58428 size 0x98 virtual false final false
static ::UnityEngine::Object Internal_InstantiateSingle(::UnityEngine::Object data, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) ;

/// @brief Method Internal_InstantiateSingleWithParent addr 0x2b586e0 size 0xa8 virtual false final false
static ::UnityEngine::Object Internal_InstantiateSingleWithParent(::UnityEngine::Object data, ::UnityEngine::Transform parent, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) ;

/// @brief Method ToString addr 0x2b590fc size 0x3c virtual false final false
static ::StringW ToString(::UnityEngine::Object obj) ;

/// @brief Method GetName addr 0x2b58118 size 0x3c virtual false final false
static ::StringW GetName(::UnityEngine::Object obj) ;

/// @brief Method IsPersistent addr 0x2b591e8 size 0x3c virtual false final false
static bool IsPersistent(::UnityEngine::Object obj) ;

/// @brief Method SetName addr 0x2b581d8 size 0x44 virtual false final false
static void SetName(::UnityEngine::Object obj, ::StringW name) ;

/// @brief Method DoesObjectWithInstanceIDExist addr 0x2b59224 size 0x3c virtual false final false
static bool DoesObjectWithInstanceIDExist(int32_t instanceID) ;

/// @brief Method FindObjectFromInstanceID addr 0x2b59260 size 0x3c virtual false final false
static ::UnityEngine::Object FindObjectFromInstanceID(int32_t instanceID) ;

/// @brief Method ForceLoadFromInstanceID addr 0x2b5929c size 0x3c virtual false final false
static ::UnityEngine::Object ForceLoadFromInstanceID(int32_t instanceID) ;

// Ctor Parameters []
explicit Object() ;

/// @brief Method .ctor addr 0x2b57964 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Internal_InstantiateSingle_Injected addr 0x2b59138 size 0x54 virtual false final false
static ::UnityEngine::Object Internal_InstantiateSingle_Injected(::UnityEngine::Object data, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot) ;

/// @brief Method Internal_InstantiateSingleWithParent_Injected addr 0x2b5918c size 0x5c virtual false final false
static ::UnityEngine::Object Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object data, ::UnityEngine::Transform parent, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object, "UnityEngine", "Object");
