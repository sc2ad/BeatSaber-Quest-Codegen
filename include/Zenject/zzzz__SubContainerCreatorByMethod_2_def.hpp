#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2>
class SubContainerCreatorByMethod_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2>
class SubContainerCreatorByMethod_2<TParam1,TParam2>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1>
class SubContainerCreatorByMethod_2<TParam1,System::Int32Enum>;
}
// Type: Zenject::SubContainerCreatorByMethod`2
// Type: Zenject::SubContainerCreatorByMethod`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11188)), TypeDefinitionIndex(TypeDefinitionIndex(11191))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11191), inst: 80 })
// CS Name: Zenject.SubContainerCreatorByMethod`2
class CORDL_TYPE SubContainerCreatorByMethod_2<TParam1,TParam2> : public Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_2(void* ptr) noexcept : Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_2& operator=(SubContainerCreatorByMethod_2&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_2& operator=(SubContainerCreatorByMethod_2 const& o) noexcept = default;
                


// Fields

 System::Action_3<Zenject::DiContainer,TParam1,TParam2> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_3<Zenject::DiContainer,TParam1,TParam2> value) ;

constexpr System::Action_3<Zenject::DiContainer,TParam1,TParam2> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_3<Zenject::DiContainer,TParam1,TParam2>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod_2(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,TParam2> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,TParam2> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByMethod`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11191)), TypeDefinitionIndex(TypeDefinitionIndex(11188))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11191), inst: 1549 })
// CS Name: Zenject.SubContainerCreatorByMethod`2
class CORDL_TYPE SubContainerCreatorByMethod_2<TParam1,System::Int32Enum> : public Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByMethod_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethod_2(void* ptr) noexcept : Zenject::SubContainerCreatorByMethodBase(ptr) {
}


  constexpr SubContainerCreatorByMethod_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethod_2& operator=(SubContainerCreatorByMethod_2&& o) noexcept = default;
  constexpr SubContainerCreatorByMethod_2& operator=(SubContainerCreatorByMethod_2 const& o) noexcept = default;
                


// Fields

 System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> value) ;

constexpr System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installMethod", ty: "System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethod_2(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SubContainerCreatorBindInfo containerBindInfo, System::Action_3<Zenject::DiContainer,TParam1,System::Int32Enum> installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_2, "Zenject", "SubContainerCreatorByMethod`2");
