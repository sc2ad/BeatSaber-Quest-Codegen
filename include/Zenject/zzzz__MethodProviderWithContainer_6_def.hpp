#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename TResult>
class Func_7;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class MethodProviderWithContainer_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
class MethodProviderWithContainer_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>;
}
// Type: Zenject::MethodProviderWithContainer`6
// Type: Zenject::MethodProviderWithContainer`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11158))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11158), inst: 5939 })
// CS Name: Zenject.MethodProviderWithContainer`6
class CORDL_TYPE MethodProviderWithContainer_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IProvider
constexpr operator  ::Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderWithContainer_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_6", modifiers: " const&", def_value: None }]
constexpr MethodProviderWithContainer_6(MethodProviderWithContainer_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_6", modifiers: "&&", def_value: None }]
constexpr MethodProviderWithContainer_6(MethodProviderWithContainer_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderWithContainer_6(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderWithContainer_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderWithContainer_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderWithContainer_6& operator=(MethodProviderWithContainer_6&& o) noexcept = default;
  constexpr MethodProviderWithContainer_6& operator=(MethodProviderWithContainer_6 const& o) noexcept = default;
                


// Fields

 ::System::Func_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(::System::Func_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue> value) ;

constexpr ::System::Func_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "::System::Func_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue>", modifiers: "", def_value: None }]
explicit MethodProviderWithContainer_6(::System::Func_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue> method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_7<::Zenject::DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TValue> method) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Type GetInstanceType(::Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderWithContainer_6, "Zenject", "MethodProviderWithContainer`6");
