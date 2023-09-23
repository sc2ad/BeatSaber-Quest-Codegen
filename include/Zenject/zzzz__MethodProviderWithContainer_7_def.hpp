#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TResult>
class Func_8;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class MethodProviderWithContainer_7;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TValue>
class MethodProviderWithContainer_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>;
}
// Type: Zenject::MethodProviderWithContainer`7
// Type: Zenject::MethodProviderWithContainer`7
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11159))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11159), inst: 5940 })
// CS Name: Zenject.MethodProviderWithContainer`7
class CORDL_TYPE MethodProviderWithContainer_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderWithContainer_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_7", modifiers: " const&", def_value: None }]
constexpr MethodProviderWithContainer_7(MethodProviderWithContainer_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_7", modifiers: "&&", def_value: None }]
constexpr MethodProviderWithContainer_7(MethodProviderWithContainer_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderWithContainer_7(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderWithContainer_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderWithContainer_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderWithContainer_7& operator=(MethodProviderWithContainer_7&& o) noexcept = default;
  constexpr MethodProviderWithContainer_7& operator=(MethodProviderWithContainer_7 const& o) noexcept = default;
                


// Fields

 System::Func_8<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_8<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> value) ;

constexpr System::Func_8<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Func_8<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>", modifiers: "", def_value: None }]
explicit MethodProviderWithContainer_7(System::Func_8<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_8<Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> method) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProviderWithContainer_7, "Zenject", "MethodProviderWithContainer`7");
