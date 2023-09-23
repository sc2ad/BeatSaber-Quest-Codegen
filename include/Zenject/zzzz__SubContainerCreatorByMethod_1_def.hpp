#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1>
class SubContainerCreatorByMethod_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1>
class SubContainerCreatorByMethod_1<TParam1>;
}
namespace Zenject {
template<>
class SubContainerCreatorByMethod_1<System::Int32Enum>;
}
// Type: Zenject::SubContainerCreatorByMethod`1
// Type: Zenject::SubContainerCreatorByMethod`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11190)), TypeDefinitionIndex(TypeDefinitionIndex(11188))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11190), inst: 2 })
// CS Name: Zenject.SubContainerCreatorByMethod`1
class CORDL_TYPE SubContainerCreatorByMethod_1<TParam1> : public Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_1(void* ptr) noexcept : Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_1& operator=(SubContainerCreatorByMethod_1&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_1& operator=(SubContainerCreatorByMethod_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<Zenject::DiContainer,TParam1> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_2<Zenject::DiContainer,TParam1> value) ;

constexpr System::Action_2<Zenject::DiContainer,TParam1> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_2<Zenject::DiContainer,TParam1>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod_1(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,TParam1> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,TParam1> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByMethod`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11188)), TypeDefinitionIndex(TypeDefinitionIndex(11190))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11190), inst: 4825 })
// CS Name: Zenject.SubContainerCreatorByMethod`1
class CORDL_TYPE SubContainerCreatorByMethod_1<System::Int32Enum> : public Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_1(void* ptr) noexcept : Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_1& operator=(SubContainerCreatorByMethod_1&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_1& operator=(SubContainerCreatorByMethod_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<Zenject::DiContainer,System::Int32Enum> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_2<Zenject::DiContainer,System::Int32Enum> value) ;

constexpr System::Action_2<Zenject::DiContainer,System::Int32Enum> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_2<Zenject::DiContainer,System::Int32Enum>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod_1(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,System::Int32Enum> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_2<Zenject::DiContainer,System::Int32Enum> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_1, "Zenject", "SubContainerCreatorByMethod`1");
