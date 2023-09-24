#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace Zenject {
class DiContainer;
}
namespace System {
struct Int32Enum;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TReturn>
class MethodProviderMultiple_1;
}
namespace Zenject {
template<>
class MethodProviderMultiple_1<System::Int32Enum>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TReturn>
class MethodProviderMultiple_1<TReturn>;
}
namespace Zenject {
template<>
class MethodProviderMultiple_1<float_t>;
}
// Type: Zenject::MethodProviderMultiple`1
// Type: Zenject::MethodProviderMultiple`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11150))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11150), inst: 4825 })
// CS Name: Zenject.MethodProviderMultiple`1
class CORDL_TYPE MethodProviderMultiple_1<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderMultiple_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: " const&", def_value: None }]
constexpr MethodProviderMultiple_1(MethodProviderMultiple_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
constexpr MethodProviderMultiple_1(MethodProviderMultiple_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderMultiple_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderMultiple_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderMultiple_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderMultiple_1& operator=(MethodProviderMultiple_1&& o) noexcept = default;
  constexpr MethodProviderMultiple_1& operator=(MethodProviderMultiple_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<System::Int32Enum>> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<System::Int32Enum>> value) ;

constexpr System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<System::Int32Enum>> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::MethodProviderMultiple_1<System::Int32Enum> New_ctor(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<System::Int32Enum>> method, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<System::Int32Enum>> method, Zenject::DiContainer container) ;

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
// Type: Zenject::MethodProviderMultiple`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11150))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11150), inst: 374 })
// CS Name: Zenject.MethodProviderMultiple`1
class CORDL_TYPE MethodProviderMultiple_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderMultiple_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: " const&", def_value: None }]
constexpr MethodProviderMultiple_1(MethodProviderMultiple_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
constexpr MethodProviderMultiple_1(MethodProviderMultiple_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderMultiple_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderMultiple_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderMultiple_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderMultiple_1& operator=(MethodProviderMultiple_1&& o) noexcept = default;
  constexpr MethodProviderMultiple_1& operator=(MethodProviderMultiple_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<float_t>> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<float_t>> value) ;

constexpr System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<float_t>> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::MethodProviderMultiple_1<float_t> New_ctor(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<float_t>> method, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<float_t>> method, Zenject::DiContainer container) ;

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
// Type: Zenject::MethodProviderMultiple`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TReturn>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11150))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11150), inst: 2 })
// CS Name: Zenject.MethodProviderMultiple`1
class CORDL_TYPE MethodProviderMultiple_1<TReturn> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderMultiple_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: " const&", def_value: None }]
constexpr MethodProviderMultiple_1(MethodProviderMultiple_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
constexpr MethodProviderMultiple_1(MethodProviderMultiple_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderMultiple_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderMultiple_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderMultiple_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderMultiple_1& operator=(MethodProviderMultiple_1&& o) noexcept = default;
  constexpr MethodProviderMultiple_1& operator=(MethodProviderMultiple_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TReturn>> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TReturn>> value) ;

constexpr System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TReturn>> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::MethodProviderMultiple_1<TReturn> New_ctor(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TReturn>> method, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TReturn>> method, Zenject::DiContainer container) ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProviderMultiple_1, "Zenject", "MethodProviderMultiple`1");
