#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class IPrefabInstantiator;
}
// Type: Zenject::IPrefabInstantiator
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11169))
// CS Name: Zenject.IPrefabInstantiator
class CORDL_TYPE IPrefabInstantiator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPrefabInstantiator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPrefabInstantiator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Type __declspec(property(get=get_ArgumentTarget))  ArgumentTarget;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=get_ExtraArguments))  ExtraArguments;

 ::Zenject::GameObjectCreationParameters __declspec(property(get=get_GameObjectCreationParameters))  GameObjectCreationParameters;


// Methods

/// @brief Method get_ArgumentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_ArgumentTarget() ;

/// @brief Method get_ExtraArguments addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> get_ExtraArguments() ;

/// @brief Method get_GameObjectCreationParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Zenject::GameObjectCreationParameters get_GameObjectCreationParameters() ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject Instantiate(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction) ;

/// @brief Method GetPrefab addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Object GetPrefab() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IPrefabInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPrefabInstantiator, "Zenject", "IPrefabInstantiator");
