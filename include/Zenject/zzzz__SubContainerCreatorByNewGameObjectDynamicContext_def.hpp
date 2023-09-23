#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewGameObjectDynamicContext;
}
// Type: Zenject::SubContainerCreatorByNewGameObjectDynamicContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11237))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11197))
// CS Name: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
class CORDL_TYPE SubContainerCreatorByNewGameObjectDynamicContext : public Zenject::SubContainerCreatorDynamicContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SubContainerCreatorByNewGameObjectDynamicContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectDynamicContext", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewGameObjectDynamicContext(SubContainerCreatorByNewGameObjectDynamicContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectDynamicContext", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewGameObjectDynamicContext(SubContainerCreatorByNewGameObjectDynamicContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewGameObjectDynamicContext(void* ptr) noexcept : Zenject::SubContainerCreatorDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewGameObjectDynamicContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewGameObjectDynamicContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewGameObjectDynamicContext& operator=(SubContainerCreatorByNewGameObjectDynamicContext&& o) noexcept = default;
  constexpr SubContainerCreatorByNewGameObjectDynamicContext& operator=(SubContainerCreatorByNewGameObjectDynamicContext const& o) noexcept = default;
                


// Fields

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }]
explicit SubContainerCreatorByNewGameObjectDynamicContext(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method .ctor addr 0x2d9235c size 0x2c virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method CreateGameObject addr 0x2d923b0 size 0x4c virtual true final false
 UnityEngine::GameObject CreateGameObject(ByRef<bool> shouldMakeActive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewGameObjectDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectDynamicContext, "Zenject", "SubContainerCreatorByNewGameObjectDynamicContext");
