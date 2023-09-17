#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Zenject {
class IInstantiator;
}
// Type: Zenject::IInstantiator
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11109))
// CS Name: Zenject.IInstantiator
class CORDL_TYPE IInstantiator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInstantiator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInstantiator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T Instantiate() ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T Instantiate(::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType Instantiate(::System::Type concreteType) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType Instantiate(::System::Type concreteType, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename TContract>
 TContract InstantiateComponent(::UnityEngine::GameObject gameObject) ;

/// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename TContract>
 TContract InstantiateComponent(::UnityEngine::GameObject gameObject, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Component InstantiateComponent(::System::Type componentType, ::UnityEngine::GameObject gameObject) ;

/// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Component InstantiateComponent(::System::Type componentType, ::UnityEngine::GameObject gameObject, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiateComponentOnNewGameObject() ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiateComponentOnNewGameObject(::StringW gameObjectName) ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiateComponentOnNewGameObject(::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiateComponentOnNewGameObject(::StringW gameObjectName, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefab addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject InstantiatePrefab(::UnityEngine::Object prefab) ;

/// @brief Method InstantiatePrefab addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject InstantiatePrefab(::UnityEngine::Object prefab, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefab addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject InstantiatePrefab(::UnityEngine::Object prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResource addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject InstantiatePrefabResource(::StringW resourcePath) ;

/// @brief Method InstantiatePrefabResource addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResource addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabForComponent(::UnityEngine::Object prefab) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabForComponent(::UnityEngine::Object prefab, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabForComponent(::UnityEngine::Object prefab, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabForComponent(::UnityEngine::Object prefab, ::UnityEngine::Transform parentTransform, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabForComponent(::UnityEngine::Object prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabForComponent(::UnityEngine::Object prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parentTransform, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabForComponent(::System::Type concreteType, ::UnityEngine::Object prefab, ::UnityEngine::Transform parentTransform, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform parentTransform, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parentTransform) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform parentTransform, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType InstantiatePrefabResourceForComponent(::System::Type concreteType, ::StringW resourcePath, ::UnityEngine::Transform parentTransform, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiateScriptableObjectResource(::StringW resourcePath) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T InstantiateScriptableObjectResource(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType InstantiateScriptableObjectResource(::System::Type scriptableObjectType, ::StringW resourcePath) ;

/// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType InstantiateScriptableObjectResource(::System::Type scriptableObjectType, ::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method CreateEmptyGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject CreateEmptyGameObject(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IInstantiator, "Zenject", "IInstantiator");
