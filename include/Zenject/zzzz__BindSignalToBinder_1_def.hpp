#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
template<typename TObject,typename TSignal>
class BindSignalFromBinder_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Zenject {
template<typename TSignal>
class BindSignalToBinder_1;
}
namespace Zenject {
template<typename TSignal>
class Zenject__BindSignalToBinder_1____c__DisplayClass6_0;
}
namespace Zenject {
template<typename TSignal>
class Zenject__BindSignalToBinder_1____c__DisplayClass7_0;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1;
}
namespace Zenject {
template<typename TSignal,typename TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal>
class BindSignalToBinder_1<TSignal>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal>
class Zenject__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal>
class Zenject__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal,TObject>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
class Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal,TObject>;
}
// Type: ::<>c__DisplayClass6_0
// Type: ::<>c__DisplayClass7_0
// Type: ::<>c__DisplayClass8_0`1
// Type: ::<>c__DisplayClass8_1`1
// Type: ::<>c__DisplayClass9_0`1
// Type: ::<>c__DisplayClass9_1`1
// Type: Zenject::BindSignalToBinder`1
// Type: ::<>c__DisplayClass6_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10583))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10583), inst: 2 })
// CS Name: Zenject.BindSignalToBinder`1::<>c__DisplayClass6_0
class CORDL_TYPE Zenject__BindSignalToBinder_1____c__DisplayClass6_0<TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__BindSignalToBinder_1____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass6_0(Zenject__BindSignalToBinder_1____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass6_0(Zenject__BindSignalToBinder_1____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__BindSignalToBinder_1____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass6_0& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass6_0&& o) noexcept = default;
  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass6_0& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 System::Action_1<TSignal> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_1<TSignal> value) ;

constexpr System::Action_1<TSignal> __get_callback() const;


// Methods

// Ctor Parameters []
explicit Zenject__BindSignalToBinder_1____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ToMethod_b__0(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass7_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10584))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10584), inst: 2 })
// CS Name: Zenject.BindSignalToBinder`1::<>c__DisplayClass7_0
class CORDL_TYPE Zenject__BindSignalToBinder_1____c__DisplayClass7_0<TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__BindSignalToBinder_1____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass7_0(Zenject__BindSignalToBinder_1____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass7_0(Zenject__BindSignalToBinder_1____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__BindSignalToBinder_1____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass7_0& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass7_0&& o) noexcept = default;
  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass7_0& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action value) ;

constexpr System::Action __get_callback() const;


// Methods

// Ctor Parameters []
explicit Zenject__BindSignalToBinder_1____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ToMethod_b__0(TSignal signal) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10585))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10585), inst: 80 })
// CS Name: Zenject.BindSignalToBinder`1::<>c__DisplayClass8_0`1
class CORDL_TYPE Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1", modifiers: " const&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1(Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1", modifiers: "&&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1(Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1&& o) noexcept = default;
  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<TObject,TSignal> __declspec(property(get=__get_handler, put=__set_handler))  handler;

constexpr void __set_handler(System::Action_2<TObject,TSignal> value) ;

constexpr System::Action_2<TObject,TSignal> __get_handler() const;


// Methods

// Ctor Parameters []
explicit Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Action_1<TSignal> _ToMethod_b__0(TObject x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_1`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10586))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10586), inst: 80 })
// CS Name: Zenject.BindSignalToBinder`1::<>c__DisplayClass8_1`1
class CORDL_TYPE Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal,TObject> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1", modifiers: " const&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1(Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1", modifiers: "&&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1(Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1&& o) noexcept = default;
  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1 const& o) noexcept = default;
                


// Fields

 TObject __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(TObject value) ;

constexpr TObject __get_x() const;

 Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject> __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject> value) ;

constexpr Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal,TObject> __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToMethod>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ToMethod_b__1(TSignal s) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass9_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10587))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10587), inst: 80 })
// CS Name: Zenject.BindSignalToBinder`1::<>c__DisplayClass9_0`1
class CORDL_TYPE Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1", modifiers: " const&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1(Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1", modifiers: "&&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1(Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1&& o) noexcept = default;
  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<TObject,System::Action> __declspec(property(get=__get_handlerGetter, put=__set_handlerGetter))  handlerGetter;

constexpr void __set_handlerGetter(System::Func_2<TObject,System::Action> value) ;

constexpr System::Func_2<TObject,System::Action> __get_handlerGetter() const;


// Methods

// Ctor Parameters []
explicit Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Action_1<TSignal> _ToMethod_b__0(TObject x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass9_1`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal,::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10588))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10588), inst: 80 })
// CS Name: Zenject.BindSignalToBinder`1::<>c__DisplayClass9_1`1
class CORDL_TYPE Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal,TObject> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1", modifiers: " const&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1(Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1", modifiers: "&&", def_value: None }]
constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1(Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1&& o) noexcept = default;
  constexpr Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1& operator=(Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1 const& o) noexcept = default;
                


// Fields

 TObject __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(TObject value) ;

constexpr TObject __get_x() const;

 Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject> __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject> value) ;

constexpr Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal,TObject> __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToMethod>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ToMethod_b__1(TSignal s) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::BindSignalToBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10589))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10589), inst: 2 })
// CS Name: Zenject.BindSignalToBinder`1
class CORDL_TYPE BindSignalToBinder_1<TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TObject>
using __c__DisplayClass9_1_1 = Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TSignal, TObject>;

template<typename TObject>
using __c__DisplayClass9_0_1 = Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TSignal, TObject>;

template<typename TObject>
using __c__DisplayClass8_1_1 = Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TSignal, TObject>;

template<typename TObject>
using __c__DisplayClass8_0_1 = Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TSignal, TObject>;

using __c__DisplayClass7_0 = Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>;

using __c__DisplayClass6_0 = Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BindSignalToBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1", modifiers: " const&", def_value: None }]
constexpr BindSignalToBinder_1(BindSignalToBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1", modifiers: "&&", def_value: None }]
constexpr BindSignalToBinder_1(BindSignalToBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindSignalToBinder_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BindSignalToBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindSignalToBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindSignalToBinder_1& operator=(BindSignalToBinder_1&& o) noexcept = default;
  constexpr BindSignalToBinder_1& operator=(BindSignalToBinder_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 Zenject::BindStatement __declspec(property(get=__get__bindStatement, put=__set__bindStatement))  _bindStatement;

constexpr void __set__bindStatement(Zenject::BindStatement value) ;

constexpr Zenject::BindStatement __get__bindStatement() const;

 Zenject::SignalBindingBindInfo __declspec(property(get=__get__signalBindInfo, put=__set__signalBindInfo))  _signalBindInfo;

constexpr void __set__signalBindInfo(Zenject::SignalBindingBindInfo value) ;

constexpr Zenject::SignalBindingBindInfo __get__signalBindInfo() const;


// Properties

 Zenject::SignalBindingBindInfo __declspec(property(get=get_SignalBindInfo))  SignalBindInfo;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "signalBindInfo", ty: "Zenject::SignalBindingBindInfo", modifiers: "", def_value: None }]
explicit BindSignalToBinder_1(Zenject::DiContainer container, Zenject::SignalBindingBindInfo signalBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SignalBindingBindInfo signalBindInfo) ;

/// @brief Method get_SignalBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::SignalBindingBindInfo get_SignalBindInfo() ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::SignalCopyBinder ToMethod(System::Action_1<TSignal> callback) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::SignalCopyBinder ToMethod(System::Action callback) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 Zenject::BindSignalFromBinder_2<TObject,TSignal> ToMethod(System::Action_2<TObject,TSignal> handler) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 Zenject::BindSignalFromBinder_2<TObject,TSignal> ToMethod(System::Func_2<TObject,System::Action> handlerGetter) ;

/// @brief Method ToMethod addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 Zenject::BindSignalFromBinder_2<TObject,TSignal> ToMethod(System::Func_2<TObject,System::Action_1<TSignal>> handlerGetter) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::BindSignalToBinder_1, "Zenject", "BindSignalToBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass6_0, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass7_0, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass8_0_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass8_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass8_1_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass8_1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass9_0_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass9_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__BindSignalToBinder_1____c__DisplayClass9_1_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass9_1`1");
