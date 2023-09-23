#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
class Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class MethodProviderUntyped;
}
// Type: Zenject::MethodProviderUntyped
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11152))
// CS Name: Zenject.MethodProviderUntyped
class CORDL_TYPE MethodProviderUntyped : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderUntyped() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderUntyped", modifiers: " const&", def_value: None }]
constexpr MethodProviderUntyped(MethodProviderUntyped const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderUntyped", modifiers: "&&", def_value: None }]
constexpr MethodProviderUntyped(MethodProviderUntyped&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderUntyped(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderUntyped& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderUntyped& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderUntyped& operator=(MethodProviderUntyped&& o) noexcept = default;
  constexpr MethodProviderUntyped& operator=(MethodProviderUntyped const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Func_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Func_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit MethodProviderUntyped(System::Func_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> method, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x2d8f46c size 0x2c virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> method, Zenject::DiContainer container) ;

/// @brief Method get_IsCached addr 0x2d8f498 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8f4a0 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d8f4a8 size 0x18 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8f4c0 size 0x2dc virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::MethodProviderUntyped);
DEFINE_IL2CPP_ARG_TYPE(Zenject::MethodProviderUntyped, "Zenject", "MethodProviderUntyped");
