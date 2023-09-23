#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class MethodProviderWithContainer_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class MethodProviderWithContainer_1<TValue>;
}
// Type: Zenject::MethodProviderWithContainer`1
// Type: Zenject::MethodProviderWithContainer`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11153))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11153), inst: 2 })
// CS Name: Zenject.MethodProviderWithContainer`1
class CORDL_TYPE MethodProviderWithContainer_1<TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderWithContainer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_1", modifiers: " const&", def_value: None }]
constexpr MethodProviderWithContainer_1(MethodProviderWithContainer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_1", modifiers: "&&", def_value: None }]
constexpr MethodProviderWithContainer_1(MethodProviderWithContainer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderWithContainer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderWithContainer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderWithContainer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderWithContainer_1& operator=(MethodProviderWithContainer_1&& o) noexcept = default;
  constexpr MethodProviderWithContainer_1& operator=(MethodProviderWithContainer_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<Zenject::DiContainer,TValue> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::DiContainer,TValue> value) ;

constexpr System::Func_2<Zenject::DiContainer,TValue> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::DiContainer,TValue>", modifiers: "", def_value: None }]
explicit MethodProviderWithContainer_1(System::Func_2<Zenject::DiContainer,TValue> method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::DiContainer,TValue> method) ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProviderWithContainer_1, "Zenject", "MethodProviderWithContainer`1");
