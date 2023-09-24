#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabDynamicContext;
}
// Type: Zenject::SubContainerCreatorByNewPrefabDynamicContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11237))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11216))
// CS Name: Zenject.SubContainerCreatorByNewPrefabDynamicContext
class CORDL_TYPE SubContainerCreatorByNewPrefabDynamicContext : public Zenject::SubContainerCreatorDynamicContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SubContainerCreatorByNewPrefabDynamicContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabDynamicContext", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabDynamicContext(SubContainerCreatorByNewPrefabDynamicContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabDynamicContext", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabDynamicContext(SubContainerCreatorByNewPrefabDynamicContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefabDynamicContext(void* ptr) noexcept : Zenject::SubContainerCreatorDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewPrefabDynamicContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabDynamicContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabDynamicContext& operator=(SubContainerCreatorByNewPrefabDynamicContext&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefabDynamicContext& operator=(SubContainerCreatorByNewPrefabDynamicContext const& o) noexcept = default;
                


// Fields

 Zenject::IPrefabProvider __declspec(property(get=__get__prefabProvider, put=__set__prefabProvider))  _prefabProvider;

constexpr void __set__prefabProvider(Zenject::IPrefabProvider value) ;

constexpr Zenject::IPrefabProvider __get__prefabProvider() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;


// Methods

static Zenject::SubContainerCreatorByNewPrefabDynamicContext New_ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method .ctor addr 0x2d92c88 size 0x3c virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method CreateGameObject addr 0x2d92cc4 size 0x1c0 virtual true final false
 UnityEngine::GameObject CreateGameObject(ByRef<bool> shouldMakeActive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewPrefabDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabDynamicContext, "Zenject", "SubContainerCreatorByNewPrefabDynamicContext");
