#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class BindStatement;
}
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TObject,typename TSignal>
class BindSignalFromBinder_2;
}
namespace Zenject {
template<typename TObject,typename TSignal>
class ____Zenject__BindSignalFromBinder_2____c;
}
namespace Zenject {
template<typename TObject,typename TSignal>
class ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TSignal>
class BindSignalFromBinder_2<TObject,TSignal>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TSignal>
class ____Zenject__BindSignalFromBinder_2____c<TObject,TSignal>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TSignal>
class ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0<TObject,TSignal>;
}
// Type: ::<>c
// Type: ::<>c__DisplayClass8_0
// Type: Zenject::BindSignalFromBinder`2
// Type: ::<>c
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10579))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10579), inst: 80 })
// CS Name: Zenject.BindSignalFromBinder`2::<>c
class CORDL_TYPE ____Zenject__BindSignalFromBinder_2____c<TObject,TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Zenject__BindSignalFromBinder_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__BindSignalFromBinder_2____c", modifiers: " const&", def_value: None }]
constexpr ____Zenject__BindSignalFromBinder_2____c(____Zenject__BindSignalFromBinder_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__BindSignalFromBinder_2____c", modifiers: "&&", def_value: None }]
constexpr ____Zenject__BindSignalFromBinder_2____c(____Zenject__BindSignalFromBinder_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__BindSignalFromBinder_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__BindSignalFromBinder_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__BindSignalFromBinder_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__BindSignalFromBinder_2____c& operator=(____Zenject__BindSignalFromBinder_2____c&& o) noexcept = default;
  constexpr ____Zenject__BindSignalFromBinder_2____c& operator=(____Zenject__BindSignalFromBinder_2____c const& o) noexcept = default;
                


// Fields

static ::Zenject::____Zenject__BindSignalFromBinder_2____c<TObject,TSignal> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Zenject::____Zenject__BindSignalFromBinder_2____c<TObject,TSignal> value) ;

static ::Zenject::____Zenject__BindSignalFromBinder_2____c<TObject,TSignal> __get___9() ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> value) ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> __get___9__5_0() ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> value) ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> __get___9__6_0() ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> value) ;

static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> __get___9__7_0() ;


// Methods

// Ctor Parameters []
explicit ____Zenject__BindSignalFromBinder_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <FromResolve>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromResolve_b__5_0(::Zenject::ConcreteBinderGeneric_1<TObject> x) ;

/// @brief Method <FromResolveAll>b__6_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromResolveAll_b__6_0(::Zenject::ConcreteBinderGeneric_1<TObject> x) ;

/// @brief Method <FromNew>b__7_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _FromNew_b__7_0(::Zenject::ConcreteBinderGeneric_1<TObject> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10580))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10580), inst: 80 })
// CS Name: Zenject.BindSignalFromBinder`2::<>c__DisplayClass8_0
class CORDL_TYPE ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0<TObject,TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0(____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0(____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0& operator=(____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0&& o) noexcept = default;
  constexpr ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0& operator=(____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_obj() const;

 ::Zenject::BindSignalFromBinder_2<TObject,TSignal> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::BindSignalFromBinder_2<TObject,TSignal> value) ;

constexpr ::Zenject::BindSignalFromBinder_2<TObject,TSignal> __get___4__this() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <From>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _From_b__1(::bs_hook::Il2CppWrapperType s) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::BindSignalFromBinder`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject,::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10581))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10581), inst: 80 })
// CS Name: Zenject.BindSignalFromBinder`2
class CORDL_TYPE BindSignalFromBinder_2<TObject,TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass8_0 = ::Zenject::____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0<TObject, TSignal>;

using __c = ::Zenject::____Zenject__BindSignalFromBinder_2____c<TObject, TSignal>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BindSignalFromBinder_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalFromBinder_2", modifiers: " const&", def_value: None }]
constexpr BindSignalFromBinder_2(BindSignalFromBinder_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalFromBinder_2", modifiers: "&&", def_value: None }]
constexpr BindSignalFromBinder_2(BindSignalFromBinder_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindSignalFromBinder_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BindSignalFromBinder_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindSignalFromBinder_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindSignalFromBinder_2& operator=(BindSignalFromBinder_2&& o) noexcept = default;
  constexpr BindSignalFromBinder_2& operator=(BindSignalFromBinder_2 const& o) noexcept = default;
                


// Fields

 ::Zenject::BindStatement __declspec(property(get=__get__bindStatement, put=__set__bindStatement))  _bindStatement;

constexpr void __set__bindStatement(::Zenject::BindStatement value) ;

constexpr ::Zenject::BindStatement __get__bindStatement() const;

 ::System::Func_2<TObject,::System::Action_1<TSignal>> __declspec(property(get=__get__methodGetter, put=__set__methodGetter))  _methodGetter;

constexpr void __set__methodGetter(::System::Func_2<TObject,::System::Action_1<TSignal>> value) ;

constexpr ::System::Func_2<TObject,::System::Action_1<TSignal>> __get__methodGetter() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::Zenject::SignalBindingBindInfo __declspec(property(get=__get__signalBindInfo, put=__set__signalBindInfo))  _signalBindInfo;

constexpr void __set__signalBindInfo(::Zenject::SignalBindingBindInfo value) ;

constexpr ::Zenject::SignalBindingBindInfo __get__signalBindInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "::Zenject::SignalBindingBindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "::Zenject::BindStatement", modifiers: "", def_value: None }, CppParam { name: "methodGetter", ty: "::System::Func_2<TObject,::System::Action_1<TSignal>>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }]
explicit BindSignalFromBinder_2(::Zenject::SignalBindingBindInfo signalBindInfo, ::Zenject::BindStatement bindStatement, ::System::Func_2<TObject,::System::Action_1<TSignal>> methodGetter, ::Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Zenject::SignalBindingBindInfo signalBindInfo, ::Zenject::BindStatement bindStatement, ::System::Func_2<TObject,::System::Action_1<TSignal>> methodGetter, ::Zenject::DiContainer container) ;

/// @brief Method FromResolve addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::SignalCopyBinder FromResolve() ;

/// @brief Method FromResolveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::SignalCopyBinder FromResolveAll() ;

/// @brief Method FromNew addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::SignalCopyBinder FromNew() ;

/// @brief Method From addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Zenject::SignalCopyBinder From(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>> objectBindCallback) ;

/// @brief Method <From>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Action_1<::bs_hook::Il2CppWrapperType> _From_b__8_0(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalFromBinder_2, "Zenject", "BindSignalFromBinder`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__BindSignalFromBinder_2____c, "Zenject", "BindSignalFromBinder`2/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::____Zenject__BindSignalFromBinder_2____c__DisplayClass8_0, "Zenject", "BindSignalFromBinder`2/<>c__DisplayClass8_0");
