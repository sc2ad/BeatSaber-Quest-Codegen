#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class GameObjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorDynamicContext;
}
// Type: Zenject::SubContainerCreatorDynamicContext
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11237))
// CS Name: Zenject.SubContainerCreatorDynamicContext
class CORDL_TYPE SubContainerCreatorDynamicContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::ISubContainerCreator
constexpr operator  ::Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubContainerCreatorDynamicContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorDynamicContext", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorDynamicContext(SubContainerCreatorDynamicContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorDynamicContext", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorDynamicContext(SubContainerCreatorDynamicContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorDynamicContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorDynamicContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorDynamicContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorDynamicContext& operator=(SubContainerCreatorDynamicContext&& o) noexcept = default;
  constexpr SubContainerCreatorDynamicContext& operator=(SubContainerCreatorDynamicContext const& o) noexcept = default;
                


// Fields

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;


// Properties

 ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }]
explicit SubContainerCreatorDynamicContext(::Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x2d92388 size 0x28 virtual false final false
 void _ctor(::Zenject::DiContainer container) ;

/// @brief Method get_Container addr 0x2d94050 size 0x8 virtual false final false
 ::Zenject::DiContainer get_Container() ;

/// @brief Method CreateSubContainer addr 0x2d94058 size 0xe4 virtual true final true
 ::Zenject::DiContainer CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext parentContext) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::GameObjectContext context) ;

/// @brief Method CreateGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::GameObject CreateGameObject(ByRef<bool> shouldMakeActive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SubContainerCreatorDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorDynamicContext, "Zenject", "SubContainerCreatorDynamicContext");
