#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class IFactory_5;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename P1,typename P2,typename P3,typename T>
class PrefabResourceFactory_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type P1,::cordl_internals::il2cpp_reference_type P2,::cordl_internals::il2cpp_reference_type P3,::cordl_internals::il2cpp_reference_type T>
class PrefabResourceFactory_4<P1,P2,P3,T>;
}
// Type: Zenject::PrefabResourceFactory`4
// Type: Zenject::PrefabResourceFactory`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type P1,::cordl_internals::il2cpp_reference_type P2,::cordl_internals::il2cpp_reference_type P3,::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 5937 })
// CS Name: Zenject.PrefabResourceFactory`4
class CORDL_TYPE PrefabResourceFactory_4<P1,P2,P3,T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IFactory_5<::StringW,P1,P2,P3,T>
constexpr operator  ::Zenject::IFactory_5<::StringW,P1,P2,P3,T>() const noexcept;

/// @brief Convert operator to ::Zenject::IFactory
constexpr operator  ::Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PrefabResourceFactory_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabResourceFactory_4", modifiers: " const&", def_value: None }]
constexpr PrefabResourceFactory_4(PrefabResourceFactory_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabResourceFactory_4", modifiers: "&&", def_value: None }]
constexpr PrefabResourceFactory_4(PrefabResourceFactory_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabResourceFactory_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrefabResourceFactory_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabResourceFactory_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabResourceFactory_4& operator=(PrefabResourceFactory_4&& o) noexcept = default;
  constexpr PrefabResourceFactory_4& operator=(PrefabResourceFactory_4 const& o) noexcept = default;
                


// Fields

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;


// Properties

 ::Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::DiContainer get_Container() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 T Create(::StringW prefabResourceName, P1 param, P2 param2, P3 param3) ;

// Ctor Parameters []
explicit PrefabResourceFactory_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PrefabResourceFactory_4, "Zenject", "PrefabResourceFactory`4");