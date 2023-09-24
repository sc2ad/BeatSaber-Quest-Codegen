#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
class SubContainerCreatorByMethod_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5>
class SubContainerCreatorByMethod_5<TParam1,TParam2,TParam3,TParam4,TParam5>;
}
// Type: Zenject::SubContainerCreatorByMethod`5
// Type: Zenject::SubContainerCreatorByMethod`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11194)), TypeDefinitionIndex(TypeDefinitionIndex(11188))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 5938 })
// CS Name: Zenject.SubContainerCreatorByMethod`5
class CORDL_TYPE SubContainerCreatorByMethod_5<TParam1,TParam2,TParam3,TParam4,TParam5> : public Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_5", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_5(SubContainerCreatorByMethod_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_5", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_5(SubContainerCreatorByMethod_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_5(void* ptr) noexcept : Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_5& operator=(SubContainerCreatorByMethod_5&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_5& operator=(SubContainerCreatorByMethod_5 const& o) noexcept = default;
                


// Fields

 System::Action_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5> value) ;

constexpr System::Action_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5> __get__installMethod() const;


// Methods

static Zenject::SubContainerCreatorByMethod_5<TParam1,TParam2,TParam3,TParam4,TParam5> New_ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_6<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_5, "Zenject", "SubContainerCreatorByMethod`5");
