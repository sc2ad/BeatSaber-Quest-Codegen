#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabMethod;
}
// Type: Zenject::SubContainerCreatorByNewPrefabMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11216))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11219))
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod : public Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByNewPrefabMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod(SubContainerCreatorByNewPrefabMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod(SubContainerCreatorByNewPrefabMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefabMethod(void* ptr) noexcept : Zenject::SubContainerCreatorByNewPrefabDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewPrefabMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod& operator=(SubContainerCreatorByNewPrefabMethod&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefabMethod& operator=(SubContainerCreatorByNewPrefabMethod const& o) noexcept = default;
                


// Fields

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get__installerMethod, put=__set__installerMethod))  _installerMethod;

constexpr void __set__installerMethod(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get__installerMethod() const;


// Methods

static Zenject::SubContainerCreatorByNewPrefabMethod New_ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_1<Zenject::DiContainer> installerMethod) ;

/// @brief Method .ctor addr 0x2d933ec size 0x40 virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_1<Zenject::DiContainer> installerMethod) ;

/// @brief Method AddInstallers addr 0x2d9342c size 0xb4 virtual true final false
 void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::GameObjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewPrefabMethod);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabMethod, "Zenject", "SubContainerCreatorByNewPrefabMethod");
