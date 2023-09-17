#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3>
class SubContainerCreatorByMethod_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3>
class SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>;
}
// Type: Zenject::SubContainerCreatorByMethod`3
// Type: Zenject::SubContainerCreatorByMethod`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11192)), TypeDefinitionIndex(TypeDefinitionIndex(11188))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11192), inst: 5155 })
// CS Name: Zenject.SubContainerCreatorByMethod`3
class CORDL_TYPE SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_3", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_3(SubContainerCreatorByMethod_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_3", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_3(SubContainerCreatorByMethod_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_3(void* ptr) noexcept : ::Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_3& operator=(SubContainerCreatorByMethod_3&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_3& operator=(SubContainerCreatorByMethod_3 const& o) noexcept = default;
                


// Fields

 ::System::Action_4<::Zenject::DiContainer,TParam1,TParam2,TParam3> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(::System::Action_4<::Zenject::DiContainer,TParam1,TParam2,TParam3> value) ;

constexpr ::System::Action_4<::Zenject::DiContainer,TParam1,TParam2,TParam3> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "::System::Action_4<::Zenject::DiContainer,TParam1,TParam2,TParam3>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod_3(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Action_4<::Zenject::DiContainer,TParam1,TParam2,TParam3> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Action_4<::Zenject::DiContainer,TParam1,TParam2,TParam3> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Zenject::DiContainer CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_3, "Zenject", "SubContainerCreatorByMethod`3");
