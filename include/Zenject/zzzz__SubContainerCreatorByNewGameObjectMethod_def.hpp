#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class DiContainer;
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
class SubContainerCreatorByNewGameObjectMethod;
}
// Type: Zenject::SubContainerCreatorByNewGameObjectMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11197))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11200))
// CS Name: Zenject.SubContainerCreatorByNewGameObjectMethod
class CORDL_TYPE SubContainerCreatorByNewGameObjectMethod : public Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SubContainerCreatorByNewGameObjectMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewGameObjectMethod(SubContainerCreatorByNewGameObjectMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewGameObjectMethod(SubContainerCreatorByNewGameObjectMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewGameObjectMethod(void* ptr) noexcept : Zenject::SubContainerCreatorByNewGameObjectDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewGameObjectMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewGameObjectMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewGameObjectMethod& operator=(SubContainerCreatorByNewGameObjectMethod&& o) noexcept = default;
  constexpr SubContainerCreatorByNewGameObjectMethod& operator=(SubContainerCreatorByNewGameObjectMethod const& o) noexcept = default;
                


// Fields

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get__installerMethod, put=__set__installerMethod))  _installerMethod;

constexpr void __set__installerMethod(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get__installerMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerMethod", ty: "System::Action_1<Zenject::DiContainer>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByNewGameObjectMethod(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_1<Zenject::DiContainer> installerMethod) ;

/// @brief Method .ctor addr 0x2d929b8 size 0x3c virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_1<Zenject::DiContainer> installerMethod) ;

/// @brief Method AddInstallers addr 0x2d929f4 size 0xb4 virtual true final false
 void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::GameObjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewGameObjectMethod);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectMethod, "Zenject", "SubContainerCreatorByNewGameObjectMethod");
