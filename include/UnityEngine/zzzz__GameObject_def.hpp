#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
struct PrimitiveType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System {
class Array;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class GameObject;
}
// Type: UnityEngine::GameObject
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10138))
// CS Name: UnityEngine.GameObject
class CORDL_TYPE GameObject : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GameObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: " const&", def_value: None }]
constexpr GameObject(GameObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "&&", def_value: None }]
constexpr GameObject(GameObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameObject(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr GameObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameObject& operator=(GameObject&& o) noexcept = default;
  constexpr GameObject& operator=(GameObject const& o) noexcept = default;
                


// Properties

 UnityEngine::Transform __declspec(property(get=get_transform))  transform;

 int32_t __declspec(property(get=get_layer, put=set_layer))  layer;

 bool __declspec(property(get=get_active, put=set_active))  active;

 bool __declspec(property(get=get_activeSelf))  activeSelf;

 bool __declspec(property(get=get_activeInHierarchy))  activeInHierarchy;

 bool __declspec(property(get=get_isStatic, put=set_isStatic))  isStatic;

 bool __declspec(property(get=get_isStaticBatchable))  isStaticBatchable;

 ::StringW __declspec(property(get=get_tag, put=set_tag))  tag;

 UnityEngine::SceneManagement::Scene __declspec(property(get=get_scene))  scene;

 uint64_t __declspec(property(get=get_sceneCullingMask))  sceneCullingMask;

 UnityEngine::GameObject __declspec(property(get=get_gameObject))  gameObject;


// Methods

/// @brief Method CreatePrimitive addr 0x2b568c0 size 0x3c virtual false final false
static UnityEngine::GameObject CreatePrimitive(UnityEngine::PrimitiveType type) ;

/// @brief Method GetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponent() ;

/// @brief Method GetComponent addr 0x2b568fc size 0x44 virtual false final false
 UnityEngine::Component GetComponent(System::Type type) ;

/// @brief Method GetComponentFastPath addr 0x2b56940 size 0x54 virtual false final false
 void GetComponentFastPath(System::Type type, ::cordl_internals::intptr_t oneFurtherThanResultValue) ;

/// @brief Method GetComponentByName addr 0x2b56994 size 0x44 virtual false final false
 UnityEngine::Component GetComponentByName(::StringW type) ;

/// @brief Method GetComponent addr 0x2b569d8 size 0x44 virtual false final false
 UnityEngine::Component GetComponent(::StringW type) ;

/// @brief Method GetComponentInChildren addr 0x2b56a1c size 0x54 virtual false final false
 UnityEngine::Component GetComponentInChildren(System::Type type, bool includeInactive) ;

/// @brief Method GetComponentInChildren addr 0x2b56a70 size 0x48 virtual false final false
 UnityEngine::Component GetComponentInChildren(System::Type type) ;

/// @brief Method GetComponentInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponentInChildren() ;

/// @brief Method GetComponentInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponentInChildren(bool includeInactive) ;

/// @brief Method GetComponentInParent addr 0x2b56ab8 size 0x54 virtual false final false
 UnityEngine::Component GetComponentInParent(System::Type type, bool includeInactive) ;

/// @brief Method GetComponentInParent addr 0x2b56b0c size 0x48 virtual false final false
 UnityEngine::Component GetComponentInParent(System::Type type) ;

/// @brief Method GetComponentInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponentInParent() ;

/// @brief Method GetComponentInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponentInParent(bool includeInactive) ;

/// @brief Method GetComponentsInternal addr 0x2b56b54 size 0x84 virtual false final false
 System::Array GetComponentsInternal(System::Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::bs_hook::Il2CppWrapperType resultList) ;

/// @brief Method GetComponents addr 0x2b56bd8 size 0xa8 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponents(System::Type type) ;

/// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponents() ;

/// @brief Method GetComponents addr 0x2b56c80 size 0x64 virtual false final false
 void GetComponents(System::Type type, System::Collections::Generic::List_1<UnityEngine::Component> results) ;

/// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponents(System::Collections::Generic::List_1<T> results) ;

/// @brief Method GetComponentsInChildren addr 0x2b56ce4 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponentsInChildren(System::Type type) ;

/// @brief Method GetComponentsInChildren addr 0x2b56cec size 0xb4 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponentsInChildren(System::Type type, bool includeInactive) ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInChildren(bool includeInactive) ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List_1<T> results) ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInChildren() ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponentsInChildren(System::Collections::Generic::List_1<T> results) ;

/// @brief Method GetComponentsInParent addr 0x2b56da0 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponentsInParent(System::Type type) ;

/// @brief Method GetComponentsInParent addr 0x2b56da8 size 0xb4 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponentsInParent(System::Type type, bool includeInactive) ;

/// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List_1<T> results) ;

/// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInParent(bool includeInactive) ;

/// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInParent() ;

/// @brief Method TryGetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool TryGetComponent(ByRef<T> component) ;

/// @brief Method TryGetComponent addr 0x2b56e5c size 0x9c virtual false final false
 bool TryGetComponent(System::Type type, ByRef<UnityEngine::Component> component) ;

/// @brief Method TryGetComponentInternal addr 0x2b56ef8 size 0x44 virtual false final false
 UnityEngine::Component TryGetComponentInternal(System::Type type) ;

/// @brief Method TryGetComponentFastPath addr 0x2b56f3c size 0x54 virtual false final false
 void TryGetComponentFastPath(System::Type type, ::cordl_internals::intptr_t oneFurtherThanResultValue) ;

/// @brief Method FindWithTag addr 0x2b56f90 size 0x3c virtual false final false
static UnityEngine::GameObject FindWithTag(::StringW tag) ;

/// @brief Method SendMessageUpwards addr 0x2b57008 size 0x58 virtual false final false
 void SendMessageUpwards(::StringW methodName, UnityEngine::SendMessageOptions options) ;

/// @brief Method SendMessage addr 0x2b570bc size 0x58 virtual false final false
 void SendMessage(::StringW methodName, UnityEngine::SendMessageOptions options) ;

/// @brief Method BroadcastMessage addr 0x2b57170 size 0x58 virtual false final false
 void BroadcastMessage(::StringW methodName, UnityEngine::SendMessageOptions options) ;

/// @brief Method AddComponentInternal addr 0x2b57224 size 0x44 virtual false final false
 UnityEngine::Component AddComponentInternal(::StringW className) ;

/// @brief Method Internal_AddComponentWithType addr 0x2b57268 size 0x44 virtual false final false
 UnityEngine::Component Internal_AddComponentWithType(System::Type componentType) ;

/// @brief Method AddComponent addr 0x2b572ac size 0x44 virtual false final false
 UnityEngine::Component AddComponent(System::Type componentType) ;

/// @brief Method AddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T AddComponent() ;

/// @brief Method get_transform addr 0x2b572f0 size 0x3c virtual false final false
 UnityEngine::Transform get_transform() ;

/// @brief Method get_layer addr 0x2b5732c size 0x3c virtual false final false
 int32_t get_layer() ;

/// @brief Method set_layer addr 0x2b57368 size 0x44 virtual false final false
 void set_layer(int32_t value) ;

/// @brief Method get_active addr 0x2b573ac size 0x3c virtual false final false
 bool get_active() ;

/// @brief Method set_active addr 0x2b573e8 size 0x44 virtual false final false
 void set_active(bool value) ;

/// @brief Method SetActive addr 0x2b5742c size 0x44 virtual false final false
 void SetActive(bool value) ;

/// @brief Method get_activeSelf addr 0x2b57470 size 0x3c virtual false final false
 bool get_activeSelf() ;

/// @brief Method get_activeInHierarchy addr 0x2b574ac size 0x3c virtual false final false
 bool get_activeInHierarchy() ;

/// @brief Method SetActiveRecursively addr 0x2b574e8 size 0x44 virtual false final false
 void SetActiveRecursively(bool state) ;

/// @brief Method get_isStatic addr 0x2b5752c size 0x3c virtual false final false
 bool get_isStatic() ;

/// @brief Method set_isStatic addr 0x2b57568 size 0x44 virtual false final false
 void set_isStatic(bool value) ;

/// @brief Method get_isStaticBatchable addr 0x2b575ac size 0x3c virtual false final false
 bool get_isStaticBatchable() ;

/// @brief Method get_tag addr 0x2b575e8 size 0x3c virtual false final false
 ::StringW get_tag() ;

/// @brief Method set_tag addr 0x2b57624 size 0x44 virtual false final false
 void set_tag(::StringW value) ;

/// @brief Method CompareTag addr 0x2b57668 size 0x44 virtual false final false
 bool CompareTag(::StringW tag) ;

/// @brief Method FindGameObjectWithTag addr 0x2b56fcc size 0x3c virtual false final false
static UnityEngine::GameObject FindGameObjectWithTag(::StringW tag) ;

/// @brief Method FindGameObjectsWithTag addr 0x2b576ac size 0x3c virtual false final false
static ::ArrayW<UnityEngine::GameObject> FindGameObjectsWithTag(::StringW tag) ;

/// @brief Method SendMessageUpwards addr 0x2b57060 size 0x5c virtual false final false
 void SendMessageUpwards(::StringW methodName, ::bs_hook::Il2CppWrapperType value, UnityEngine::SendMessageOptions options) ;

/// @brief Method SendMessageUpwards addr 0x2b576e8 size 0x58 virtual false final false
 void SendMessageUpwards(::StringW methodName, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SendMessageUpwards addr 0x2b57740 size 0x4c virtual false final false
 void SendMessageUpwards(::StringW methodName) ;

/// @brief Method SendMessage addr 0x2b57114 size 0x5c virtual false final false
 void SendMessage(::StringW methodName, ::bs_hook::Il2CppWrapperType value, UnityEngine::SendMessageOptions options) ;

/// @brief Method SendMessage addr 0x2b5778c size 0x58 virtual false final false
 void SendMessage(::StringW methodName, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SendMessage addr 0x2b577e4 size 0x4c virtual false final false
 void SendMessage(::StringW methodName) ;

/// @brief Method BroadcastMessage addr 0x2b571c8 size 0x5c virtual false final false
 void BroadcastMessage(::StringW methodName, ::bs_hook::Il2CppWrapperType parameter, UnityEngine::SendMessageOptions options) ;

/// @brief Method BroadcastMessage addr 0x2b57830 size 0x58 virtual false final false
 void BroadcastMessage(::StringW methodName, ::bs_hook::Il2CppWrapperType parameter) ;

/// @brief Method BroadcastMessage addr 0x2b57888 size 0x4c virtual false final false
 void BroadcastMessage(::StringW methodName) ;

static UnityEngine::GameObject New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x2b578d4 size 0x90 virtual false final false
 void _ctor(::StringW name) ;

static UnityEngine::GameObject New_ctor() ;

/// @brief Method .ctor addr 0x2b579b0 size 0x84 virtual false final false
 void _ctor() ;

static UnityEngine::GameObject New_ctor(::StringW name, ::ArrayW<System::Type> components) ;

/// @brief Method .ctor addr 0x2b57a34 size 0x110 virtual false final false
 void _ctor(::StringW name, ::ArrayW<System::Type> components) ;

/// @brief Method Internal_CreateGameObject addr 0x2b5796c size 0x44 virtual false final false
static void Internal_CreateGameObject(UnityEngine::GameObject self, ::StringW name) ;

/// @brief Method Find addr 0x2b57b44 size 0x3c virtual false final false
static UnityEngine::GameObject Find(::StringW name) ;

/// @brief Method get_scene addr 0x2b57b80 size 0x4c virtual false final false
 UnityEngine::SceneManagement::Scene get_scene() ;

/// @brief Method get_sceneCullingMask addr 0x2b57c10 size 0x3c virtual false final false
 uint64_t get_sceneCullingMask() ;

/// @brief Method get_gameObject addr 0x2b57c4c size 0x4 virtual false final false
 UnityEngine::GameObject get_gameObject() ;

/// @brief Method get_scene_Injected addr 0x2b57bcc size 0x44 virtual false final false
 void get_scene_Injected(ByRef<UnityEngine::SceneManagement::Scene> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GameObject);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GameObject, "UnityEngine", "GameObject");
