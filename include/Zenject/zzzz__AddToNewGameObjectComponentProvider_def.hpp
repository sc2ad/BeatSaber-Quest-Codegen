#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Zenject {
class AddToNewGameObjectComponentProvider;
}
// Type: Zenject::AddToNewGameObjectComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11127))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11128))
// CS Name: Zenject.AddToNewGameObjectComponentProvider
class CORDL_TYPE AddToNewGameObjectComponentProvider : public ::Zenject::AddToGameObjectComponentProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AddToNewGameObjectComponentProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToNewGameObjectComponentProvider", modifiers: " const&", def_value: None }]
constexpr AddToNewGameObjectComponentProvider(AddToNewGameObjectComponentProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToNewGameObjectComponentProvider", modifiers: "&&", def_value: None }]
constexpr AddToNewGameObjectComponentProvider(AddToNewGameObjectComponentProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddToNewGameObjectComponentProvider(void* ptr) noexcept : ::Zenject::AddToGameObjectComponentProviderBase(ptr) {
}


  constexpr AddToNewGameObjectComponentProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddToNewGameObjectComponentProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddToNewGameObjectComponentProvider& operator=(AddToNewGameObjectComponentProvider&& o) noexcept = default;
  constexpr AddToNewGameObjectComponentProvider& operator=(AddToNewGameObjectComponentProvider const& o) noexcept = default;
                


// Fields

 ::Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters value) ;

constexpr ::Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;


// Properties

 bool __declspec(property(get=get_ShouldToggleActive))  ShouldToggleActive;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "componentType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "::Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "concreteIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit AddToNewGameObjectComponentProvider(::Zenject::DiContainer container, ::System::Type componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::bs_hook::Il2CppWrapperType concreteIdentifier, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2d8d680 size 0x2c virtual false final false
 void _ctor(::Zenject::DiContainer container, ::System::Type componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArguments, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::bs_hook::Il2CppWrapperType concreteIdentifier, ::System::Action_2<::Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_ShouldToggleActive addr 0x2d8d6ac size 0x8 virtual true final false
 bool get_ShouldToggleActive() ;

/// @brief Method GetGameObject addr 0x2d8d6b4 size 0x5c virtual true final false
 ::UnityEngine::GameObject GetGameObject(::Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::AddToNewGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToNewGameObjectComponentProvider, "Zenject", "AddToNewGameObjectComponentProvider");
