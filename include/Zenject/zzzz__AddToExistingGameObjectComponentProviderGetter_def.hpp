#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class AddToExistingGameObjectComponentProviderGetter;
}
// Type: Zenject::AddToExistingGameObjectComponentProviderGetter
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11127))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11125))
// CS Name: Zenject.AddToExistingGameObjectComponentProviderGetter
class CORDL_TYPE AddToExistingGameObjectComponentProviderGetter : public Zenject::AddToGameObjectComponentProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AddToExistingGameObjectComponentProviderGetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProviderGetter", modifiers: " const&", def_value: None }]
constexpr AddToExistingGameObjectComponentProviderGetter(AddToExistingGameObjectComponentProviderGetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProviderGetter", modifiers: "&&", def_value: None }]
constexpr AddToExistingGameObjectComponentProviderGetter(AddToExistingGameObjectComponentProviderGetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddToExistingGameObjectComponentProviderGetter(void* ptr) noexcept : Zenject::AddToGameObjectComponentProviderBase(ptr) {
}


  constexpr AddToExistingGameObjectComponentProviderGetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddToExistingGameObjectComponentProviderGetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddToExistingGameObjectComponentProviderGetter& operator=(AddToExistingGameObjectComponentProviderGetter&& o) noexcept = default;
  constexpr AddToExistingGameObjectComponentProviderGetter& operator=(AddToExistingGameObjectComponentProviderGetter const& o) noexcept = default;
                


// Fields

 System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> __declspec(property(get=__get__gameObjectGetter, put=__set__gameObjectGetter))  _gameObjectGetter;

constexpr void __set__gameObjectGetter(System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> value) ;

constexpr System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> __get__gameObjectGetter() const;


// Properties

 bool __declspec(property(get=get_ShouldToggleActive))  ShouldToggleActive;


// Methods

// Ctor Parameters [CppParam { name: "gameObjectGetter", ty: "System::Func_2<Zenject::InjectContext,UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "System::Collections::Generic::List_1<Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "concreteIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit AddToExistingGameObjectComponentProviderGetter(System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> gameObjectGetter, Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d8ce6c size 0x38 virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,UnityEngine::GameObject> gameObjectGetter, Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_ShouldToggleActive addr 0x2d8cea4 size 0x8 virtual true final false
 bool get_ShouldToggleActive() ;

/// @brief Method GetGameObject addr 0x2d8ceac size 0x78 virtual true final false
 UnityEngine::GameObject GetGameObject(Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::AddToExistingGameObjectComponentProviderGetter);
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToExistingGameObjectComponentProviderGetter, "Zenject", "AddToExistingGameObjectComponentProviderGetter");
