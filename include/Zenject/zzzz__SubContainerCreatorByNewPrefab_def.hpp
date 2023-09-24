#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefab;
}
// Type: Zenject::SubContainerCreatorByNewPrefab
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11215))
// CS Name: Zenject.SubContainerCreatorByNewPrefab
class CORDL_TYPE SubContainerCreatorByNewPrefab : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::ISubContainerCreator
constexpr operator  Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SubContainerCreatorByNewPrefab() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefab", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefab(SubContainerCreatorByNewPrefab const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefab", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefab(SubContainerCreatorByNewPrefab&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefab(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorByNewPrefab& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefab& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefab& operator=(SubContainerCreatorByNewPrefab&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefab& operator=(SubContainerCreatorByNewPrefab const& o) noexcept = default;
                


// Fields

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;

 Zenject::IPrefabProvider __declspec(property(get=__get__prefabProvider, put=__set__prefabProvider))  _prefabProvider;

constexpr void __set__prefabProvider(Zenject::IPrefabProvider value) ;

constexpr Zenject::IPrefabProvider __get__prefabProvider() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;


// Methods

static Zenject::SubContainerCreatorByNewPrefab New_ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method .ctor addr 0x2d92aa8 size 0x3c virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method CreateSubContainer addr 0x2d92ae4 size 0x1a4 virtual true final true
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext parentContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewPrefab);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefab, "Zenject", "SubContainerCreatorByNewPrefab");
