#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename A>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
template<typename A,typename B>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2;
}
namespace GlobalNamespace {
template<typename A,typename B,typename C>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3;
}
namespace GlobalNamespace {
template<typename A,typename B,typename C,typename D>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4;
}
namespace GlobalNamespace {
class MainThreadDispatcher;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type A>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B,::cordl_internals::il2cpp_reference_type C>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B,::cordl_internals::il2cpp_reference_type C,::cordl_internals::il2cpp_reference_type D>
class ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>;
}
// Type: ::<>c__DisplayClass2_0`1
// Type: ::<>c__DisplayClass3_0`2
// Type: ::<>c__DisplayClass4_0`3
// Type: ::<>c__DisplayClass5_0`4
// Type: ::MainThreadDispatcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5463))
// CS Name: MainThreadDispatcher
class CORDL_TYPE MainThreadDispatcher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename A,typename B,typename C,typename D>
using __c__DisplayClass5_0_4 = ::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>;

template<typename A,typename B,typename C>
using __c__DisplayClass4_0_3 = ::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>;

template<typename A,typename B>
using __c__DisplayClass3_0_2 = ::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>;

template<typename A>
using __c__DisplayClass2_0_1 = ::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A>;

/// @brief Convert operator to ::Zenject::ITickable
constexpr operator  ::Zenject::ITickable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MainThreadDispatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: " const&", def_value: None }]
constexpr MainThreadDispatcher(MainThreadDispatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "&&", def_value: None }]
constexpr MainThreadDispatcher(MainThreadDispatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainThreadDispatcher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MainThreadDispatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainThreadDispatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainThreadDispatcher& operator=(MainThreadDispatcher&& o) noexcept = default;
  constexpr MainThreadDispatcher& operator=(MainThreadDispatcher const& o) noexcept = default;
                


// Fields

 ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action> __declspec(property(get=__get__dispatchQueue, put=__set__dispatchQueue))  _dispatchQueue;

constexpr void __set__dispatchQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action> value) ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action> __get__dispatchQueue() const;


// Methods

/// @brief Method DispatchOnMainThread addr 0x2115f90 size 0x58 virtual false final false
 void DispatchOnMainThread(::System::Action action) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A>
 void DispatchOnMainThread(::System::Action_1<A> action, A firstParameter) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A,typename B>
 void DispatchOnMainThread(::System::Action_2<A,B> action, A firstParameter, B secondParameter) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A,typename B,typename C>
 void DispatchOnMainThread(::System::Action_3<A,B,C> action, A firstParameter, B secondParameter, C thirdParameter) ;

/// @brief Method DispatchOnMainThread addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename A,typename B,typename C,typename D>
 void DispatchOnMainThread(::System::Action_4<A,B,C,D> action, A firstParameter, B secondParameter, C thirdParameter, D fourthParameter) ;

/// @brief Method Tick addr 0x2115fe8 size 0x104 virtual true final true
 void Tick() ;

// Ctor Parameters []
explicit MainThreadDispatcher() ;

/// @brief Method .ctor addr 0x21160ec size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type A>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5459))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5459), inst: 2 })
// CS Name: MainThreadDispatcher::<>c__DisplayClass2_0`1
class CORDL_TYPE ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1<A> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1 const& o) noexcept = default;
                


// Fields

 ::System::Action_1<A> __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Action_1<A> value) ;

constexpr ::System::Action_1<A> __get_action() const;

 A __declspec(property(get=__get_firstParameter, put=__set_firstParameter))  firstParameter;

constexpr void __set_firstParameter(A value) ;

constexpr A __get_firstParameter() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _DispatchOnMainThread_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5460))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5460), inst: 80 })
// CS Name: MainThreadDispatcher::<>c__DisplayClass3_0`2
class CORDL_TYPE ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2<A,B> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2&& o) noexcept = default;
  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2 const& o) noexcept = default;
                


// Fields

 ::System::Action_2<A,B> __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Action_2<A,B> value) ;

constexpr ::System::Action_2<A,B> __get_action() const;

 A __declspec(property(get=__get_firstParameter, put=__set_firstParameter))  firstParameter;

constexpr void __set_firstParameter(A value) ;

constexpr A __get_firstParameter() const;

 B __declspec(property(get=__get_secondParameter, put=__set_secondParameter))  secondParameter;

constexpr void __set_secondParameter(B value) ;

constexpr B __get_secondParameter() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _DispatchOnMainThread_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass4_0`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B,::cordl_internals::il2cpp_reference_type C>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5461), inst: 5155 })
// CS Name: MainThreadDispatcher::<>c__DisplayClass4_0`3
class CORDL_TYPE ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3&& o) noexcept = default;
  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3 const& o) noexcept = default;
                


// Fields

 ::System::Action_3<A,B,C> __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Action_3<A,B,C> value) ;

constexpr ::System::Action_3<A,B,C> __get_action() const;

 A __declspec(property(get=__get_firstParameter, put=__set_firstParameter))  firstParameter;

constexpr void __set_firstParameter(A value) ;

constexpr A __get_firstParameter() const;

 B __declspec(property(get=__get_secondParameter, put=__set_secondParameter))  secondParameter;

constexpr void __set_secondParameter(B value) ;

constexpr B __get_secondParameter() const;

 C __declspec(property(get=__get_thirdParameter, put=__set_thirdParameter))  thirdParameter;

constexpr void __set_thirdParameter(C value) ;

constexpr C __get_thirdParameter() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _DispatchOnMainThread_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0`4
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B,::cordl_internals::il2cpp_reference_type C,::cordl_internals::il2cpp_reference_type D>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5462))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5462), inst: 5937 })
// CS Name: MainThreadDispatcher::<>c__DisplayClass5_0`4
class CORDL_TYPE ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4&& o) noexcept = default;
  constexpr ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4& operator=(____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4 const& o) noexcept = default;
                


// Fields

 ::System::Action_4<A,B,C,D> __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::System::Action_4<A,B,C,D> value) ;

constexpr ::System::Action_4<A,B,C,D> __get_action() const;

 A __declspec(property(get=__get_firstParameter, put=__set_firstParameter))  firstParameter;

constexpr void __set_firstParameter(A value) ;

constexpr A __get_firstParameter() const;

 B __declspec(property(get=__get_secondParameter, put=__set_secondParameter))  secondParameter;

constexpr void __set_secondParameter(B value) ;

constexpr B __get_secondParameter() const;

 C __declspec(property(get=__get_thirdParameter, put=__set_thirdParameter))  thirdParameter;

constexpr void __set_thirdParameter(C value) ;

constexpr C __get_thirdParameter() const;

 D __declspec(property(get=__get_fourthParameter, put=__set_fourthParameter))  fourthParameter;

constexpr void __set_fourthParameter(D value) ;

constexpr D __get_fourthParameter() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <DispatchOnMainThread>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _DispatchOnMainThread_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass2_0_1, "", "MainThreadDispatcher/<>c__DisplayClass2_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass3_0_2, "", "MainThreadDispatcher/<>c__DisplayClass3_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass4_0_3, "", "MainThreadDispatcher/<>c__DisplayClass4_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__MainThreadDispatcher____c__DisplayClass5_0_4, "", "MainThreadDispatcher/<>c__DisplayClass5_0`4");
NEED_NO_BOX(::GlobalNamespace::MainThreadDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainThreadDispatcher, "", "MainThreadDispatcher");
