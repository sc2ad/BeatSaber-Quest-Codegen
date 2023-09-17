#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class Action_7;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
class SubContainerCreatorByNewPrefabMethod_6;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
class ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6>
class SubContainerCreatorByNewPrefabMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6>
class ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>;
}
// Type: ::<>c__DisplayClass2_0
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`6
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11230))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11230), inst: 5939 })
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`6::<>c__DisplayClass2_0
class CORDL_TYPE ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0(____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0(____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0& operator=(____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0&& o) noexcept = default;
  constexpr ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0& operator=(____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::SubContainerCreatorByNewPrefabMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::SubContainerCreatorByNewPrefabMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> value) ;

constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> __get___4__this() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get_args() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _AddInstallers_b__0(::Zenject::DiContainer subContainer) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11231)), TypeDefinitionIndex(TypeDefinitionIndex(11216))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11231), inst: 5939 })
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`6
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
using __c__DisplayClass2_0 = ::Zenject::____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByNewPrefabMethod_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_6", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod_6(SubContainerCreatorByNewPrefabMethod_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_6", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod_6(SubContainerCreatorByNewPrefabMethod_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefabMethod_6(void* ptr) noexcept : ::Zenject::SubContainerCreatorByNewPrefabDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewPrefabMethod_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod_6& operator=(SubContainerCreatorByNewPrefabMethod_6&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefabMethod_6& operator=(SubContainerCreatorByNewPrefabMethod_6 const& o) noexcept = default;
                


// Fields

 ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> __declspec(property(get=__get__installerMethod, put=__set__installerMethod))  _installerMethod;

constexpr void __set__installerMethod(::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> value) ;

constexpr ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> __get__installerMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "prefabProvider", ty: "::Zenject::IPrefabProvider", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "::Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerMethod", ty: "::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByNewPrefabMethod_6(::Zenject::DiContainer container, ::Zenject::IPrefabProvider prefabProvider, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::IPrefabProvider prefabProvider, ::Zenject::GameObjectCreationParameters gameObjectBindInfo, ::System::Action_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::GameObjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewPrefabMethod_6, "Zenject", "SubContainerCreatorByNewPrefabMethod`6");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__SubContainerCreatorByNewPrefabMethod_6____c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewPrefabMethod`6/<>c__DisplayClass2_0");