#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByMethod;
}
// Type: Zenject::SubContainerCreatorByMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11188))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11189))
// CS Name: Zenject.SubContainerCreatorByMethod
class CORDL_TYPE SubContainerCreatorByMethod : public Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SubContainerCreatorByMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod(SubContainerCreatorByMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod(SubContainerCreatorByMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod(void* ptr) noexcept : Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod& operator=(SubContainerCreatorByMethod&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod& operator=(SubContainerCreatorByMethod const& o) noexcept = default;
                


// Fields

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_1<Zenject::DiContainer>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_1<Zenject::DiContainer> installMethod) ;

/// @brief Method .ctor addr 0x2d92288 size 0x3c virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_1<Zenject::DiContainer> installMethod) ;

/// @brief Method CreateSubContainer addr 0x2d922c4 size 0x98 virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByMethod);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByMethod, "Zenject", "SubContainerCreatorByMethod");
