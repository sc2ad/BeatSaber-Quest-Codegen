#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class Action_11;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10>
class SubContainerCreatorByMethod_10;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TParam9,::cordl_internals::il2cpp_reference_type TParam10>
class SubContainerCreatorByMethod_10<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>;
}
// Type: Zenject::SubContainerCreatorByMethod`10
// Type: Zenject::SubContainerCreatorByMethod`10
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TParam8,::cordl_internals::il2cpp_reference_type TParam9,::cordl_internals::il2cpp_reference_type TParam10>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11188)), TypeDefinitionIndex(TypeDefinitionIndex(11196))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11196), inst: 5956 })
// CS Name: Zenject.SubContainerCreatorByMethod`10
class CORDL_TYPE SubContainerCreatorByMethod_10<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> : public Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_10() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_10", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_10(SubContainerCreatorByMethod_10 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_10", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_10(SubContainerCreatorByMethod_10&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_10(void* ptr) noexcept : Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_10& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_10& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_10& operator=(SubContainerCreatorByMethod_10&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_10& operator=(SubContainerCreatorByMethod_10 const& o) noexcept = default;
                


// Fields

 System::Action_11<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_11<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> value) ;

constexpr System::Action_11<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_11<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod_10(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_11<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_11<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_10, "Zenject", "SubContainerCreatorByMethod`10");
