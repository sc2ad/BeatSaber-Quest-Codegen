#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class Action_5;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
class SubContainerCreatorByMethod_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4>
class SubContainerCreatorByMethod_4<TParam1,TParam2,TParam3,TParam4>;
}
// Type: Zenject::SubContainerCreatorByMethod`4
// Type: Zenject::SubContainerCreatorByMethod`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11188)), TypeDefinitionIndex(TypeDefinitionIndex(11193))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11193), inst: 5937 })
// CS Name: Zenject.SubContainerCreatorByMethod`4
class CORDL_TYPE SubContainerCreatorByMethod_4<TParam1,TParam2,TParam3,TParam4> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_4", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_4(SubContainerCreatorByMethod_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_4", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_4(SubContainerCreatorByMethod_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_4(void* ptr) noexcept : ::Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_4& operator=(SubContainerCreatorByMethod_4&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_4& operator=(SubContainerCreatorByMethod_4 const& o) noexcept = default;
                


// Fields

 ::System::Action_5<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(::System::Action_5<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4> value) ;

constexpr ::System::Action_5<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "::System::Action_5<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod_4(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Action_5<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Action_5<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Zenject::DiContainer CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_4, "Zenject", "SubContainerCreatorByMethod`4");
