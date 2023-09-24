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
class Transform;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine {
class Component;
}
// Type: UnityEngine::Component
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10179))
// CS Name: UnityEngine.Component
class CORDL_TYPE Component : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Component() = default;

// Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: " const&", def_value: None }]
constexpr Component(Component const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "&&", def_value: None }]
constexpr Component(Component&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Component(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Component& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Component& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Component& operator=(Component&& o) noexcept = default;
  constexpr Component& operator=(Component const& o) noexcept = default;
                


// Properties

 UnityEngine::Transform __declspec(property(get=get_transform))  transform;

 UnityEngine::GameObject __declspec(property(get=get_gameObject))  gameObject;

 ::StringW __declspec(property(get=get_tag, put=set_tag))  tag;


// Methods

/// @brief Method get_transform addr 0x2b5c7ac size 0x3c virtual false final false
 UnityEngine::Transform get_transform() ;

/// @brief Method get_gameObject addr 0x2b5c7e8 size 0x3c virtual false final false
 UnityEngine::GameObject get_gameObject() ;

/// @brief Method GetComponent addr 0x2b5c824 size 0x78 virtual false final false
 UnityEngine::Component GetComponent(System::Type type) ;

/// @brief Method GetComponentFastPath addr 0x2b5c89c size 0x54 virtual false final false
 void GetComponentFastPath(System::Type type, ::cordl_internals::intptr_t oneFurtherThanResultValue) ;

/// @brief Method GetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponent() ;

/// @brief Method TryGetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool TryGetComponent(ByRef<T> component) ;

/// @brief Method GetComponent addr 0x2b5c8f0 size 0x44 virtual false final false
 UnityEngine::Component GetComponent(::StringW type) ;

/// @brief Method GetComponentInChildren addr 0x2b5c934 size 0x88 virtual false final false
 UnityEngine::Component GetComponentInChildren(System::Type t, bool includeInactive) ;

/// @brief Method GetComponentInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponentInChildren(bool includeInactive) ;

/// @brief Method GetComponentInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponentInChildren() ;

/// @brief Method GetComponentsInChildren addr 0x2b5c9bc size 0x60 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponentsInChildren(System::Type t, bool includeInactive) ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInChildren(bool includeInactive) ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List_1<T> result) ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInChildren() ;

/// @brief Method GetComponentsInChildren addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponentsInChildren(System::Collections::Generic::List_1<T> results) ;

/// @brief Method GetComponentInParent addr 0x2b5ca1c size 0x88 virtual false final false
 UnityEngine::Component GetComponentInParent(System::Type t, bool includeInactive) ;

/// @brief Method GetComponentInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetComponentInParent() ;

/// @brief Method GetComponentsInParent addr 0x2b5caa4 size 0x60 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponentsInParent(System::Type t, bool includeInactive) ;

/// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInParent(bool includeInactive) ;

/// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List_1<T> results) ;

/// @brief Method GetComponentsInParent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponentsInParent() ;

/// @brief Method GetComponents addr 0x2b5cb04 size 0x50 virtual false final false
 ::ArrayW<UnityEngine::Component> GetComponents(System::Type type) ;

/// @brief Method GetComponentsForListInternal addr 0x2b5cb54 size 0x54 virtual false final false
 void GetComponentsForListInternal(System::Type searchType, ::bs_hook::Il2CppWrapperType resultList) ;

/// @brief Method GetComponents addr 0x2b5cba8 size 0x54 virtual false final false
 void GetComponents(System::Type type, System::Collections::Generic::List_1<UnityEngine::Component> results) ;

/// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetComponents(System::Collections::Generic::List_1<T> results) ;

/// @brief Method get_tag addr 0x2b5cbfc size 0x70 virtual false final false
 ::StringW get_tag() ;

/// @brief Method set_tag addr 0x2b5cc6c size 0x78 virtual false final false
 void set_tag(::StringW value) ;

/// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetComponents() ;

/// @brief Method CompareTag addr 0x2b5cce4 size 0x78 virtual false final false
 bool CompareTag(::StringW tag) ;

/// @brief Method SendMessage addr 0x2b5cd5c size 0x5c virtual false final false
 void SendMessage(::StringW methodName, ::bs_hook::Il2CppWrapperType value, UnityEngine::SendMessageOptions options) ;

/// @brief Method SendMessage addr 0x2b5cdb8 size 0x58 virtual false final false
 void SendMessage(::StringW methodName, UnityEngine::SendMessageOptions options) ;

/// @brief Method BroadcastMessage addr 0x2b5ce10 size 0x5c virtual false final false
 void BroadcastMessage(::StringW methodName, ::bs_hook::Il2CppWrapperType parameter, UnityEngine::SendMessageOptions options) ;

static UnityEngine::Component New_ctor() ;

/// @brief Method .ctor addr 0x2b55f5c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Component);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Component, "UnityEngine", "Component");
