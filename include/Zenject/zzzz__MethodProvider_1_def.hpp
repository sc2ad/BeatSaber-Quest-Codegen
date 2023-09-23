#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace Zenject {
template<typename TReturn>
class MethodProvider_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TReturn>
class MethodProvider_1<TReturn>;
}
namespace Zenject {
template<>
class MethodProvider_1<System::Int32Enum>;
}
namespace Zenject {
template<>
class MethodProvider_1<float_t>;
}
// Type: Zenject::MethodProvider`1
// Type: Zenject::MethodProvider`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TReturn>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11149))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11149), inst: 2 })
// CS Name: Zenject.MethodProvider`1
class CORDL_TYPE MethodProvider_1<TReturn> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProvider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: " const&", def_value: None }]
constexpr MethodProvider_1(MethodProvider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: "&&", def_value: None }]
constexpr MethodProvider_1(MethodProvider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProvider_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProvider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProvider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProvider_1& operator=(MethodProvider_1&& o) noexcept = default;
  constexpr MethodProvider_1& operator=(MethodProvider_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Func_2<Zenject::InjectContext,TReturn> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::InjectContext,TReturn> value) ;

constexpr System::Func_2<Zenject::InjectContext,TReturn> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::InjectContext,TReturn>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit MethodProvider_1(System::Func_2<Zenject::InjectContext,TReturn> method, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,TReturn> method, Zenject::DiContainer container) ;

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
// Type: Zenject::MethodProvider`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11149))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11149), inst: 374 })
// CS Name: Zenject.MethodProvider`1
class CORDL_TYPE MethodProvider_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProvider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: " const&", def_value: None }]
constexpr MethodProvider_1(MethodProvider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: "&&", def_value: None }]
constexpr MethodProvider_1(MethodProvider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProvider_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProvider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProvider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProvider_1& operator=(MethodProvider_1&& o) noexcept = default;
  constexpr MethodProvider_1& operator=(MethodProvider_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Func_2<Zenject::InjectContext,float_t> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::InjectContext,float_t> value) ;

constexpr System::Func_2<Zenject::InjectContext,float_t> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::InjectContext,float_t>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit MethodProvider_1(System::Func_2<Zenject::InjectContext,float_t> method, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,float_t> method, Zenject::DiContainer container) ;

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
// Type: Zenject::MethodProvider`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11149))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11149), inst: 4825 })
// CS Name: Zenject.MethodProvider`1
class CORDL_TYPE MethodProvider_1<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProvider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: " const&", def_value: None }]
constexpr MethodProvider_1(MethodProvider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProvider_1", modifiers: "&&", def_value: None }]
constexpr MethodProvider_1(MethodProvider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProvider_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProvider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProvider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProvider_1& operator=(MethodProvider_1&& o) noexcept = default;
  constexpr MethodProvider_1& operator=(MethodProvider_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Func_2<Zenject::InjectContext,System::Int32Enum> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::InjectContext,System::Int32Enum> value) ;

constexpr System::Func_2<Zenject::InjectContext,System::Int32Enum> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::InjectContext,System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit MethodProvider_1(System::Func_2<Zenject::InjectContext,System::Int32Enum> method, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,System::Int32Enum> method, Zenject::DiContainer container) ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProvider_1, "Zenject", "MethodProvider`1");
