#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class Zenject__InjectContext___get_ParentContexts_d__52;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
class Zenject__InjectContext___get_AllObjectTypes_d__56;
}
namespace Zenject {
class Zenject__InjectContext___get_ParentContextsAndSelf_d__54;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class Zenject__InjectContext___get_AllObjectTypes_d__56;
}
namespace Zenject {
class Zenject__InjectContext___get_ParentContextsAndSelf_d__54;
}
namespace Zenject {
class Zenject__InjectContext___get_ParentContexts_d__52;
}
// Type: ::<get_ParentContexts>d__52
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11052))
// CS Name: Zenject.InjectContext::<get_ParentContexts>d__52
class CORDL_TYPE Zenject__InjectContext___get_ParentContexts_d__52 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Zenject::InjectContext>
constexpr operator  System::Collections::Generic::IEnumerable_1<Zenject::InjectContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<Zenject::InjectContext>
constexpr operator  System::Collections::Generic::IEnumerator_1<Zenject::InjectContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Zenject__InjectContext___get_ParentContexts_d__52() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectContext___get_ParentContexts_d__52", modifiers: " const&", def_value: None }]
constexpr Zenject__InjectContext___get_ParentContexts_d__52(Zenject__InjectContext___get_ParentContexts_d__52 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectContext___get_ParentContexts_d__52", modifiers: "&&", def_value: None }]
constexpr Zenject__InjectContext___get_ParentContexts_d__52(Zenject__InjectContext___get_ParentContexts_d__52&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InjectContext___get_ParentContexts_d__52(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InjectContext___get_ParentContexts_d__52& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InjectContext___get_ParentContexts_d__52& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InjectContext___get_ParentContexts_d__52& operator=(Zenject__InjectContext___get_ParentContexts_d__52&& o) noexcept = default;
  constexpr Zenject__InjectContext___get_ParentContexts_d__52& operator=(Zenject__InjectContext___get_ParentContexts_d__52 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 Zenject::InjectContext __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 Zenject::InjectContext __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> __get___7__wrap1() const;


// Properties

 Zenject::InjectContext __declspec(property(get=System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current))  System_Collections_Generic_IEnumerator_Zenject_InjectContext__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Zenject::Zenject__InjectContext___get_ParentContexts_d__52 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d704a8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d70b84 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d70ba0 size 0x2f0 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d70e90 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current addr 0x2d70f40 size 0x8 virtual true final true
 Zenject::InjectContext System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d70f48 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d70f88 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator addr 0x2d70f90 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> System_Collections_Generic_IEnumerable_Zenject_InjectContext__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d71034 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method __zenCreate addr 0x2d71038 size 0xcc virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d71104 size 0x274 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<get_ParentContextsAndSelf>d__54
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11053))
// CS Name: Zenject.InjectContext::<get_ParentContextsAndSelf>d__54
class CORDL_TYPE Zenject__InjectContext___get_ParentContextsAndSelf_d__54 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Zenject::InjectContext>
constexpr operator  System::Collections::Generic::IEnumerable_1<Zenject::InjectContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<Zenject::InjectContext>
constexpr operator  System::Collections::Generic::IEnumerator_1<Zenject::InjectContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Zenject__InjectContext___get_ParentContextsAndSelf_d__54() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectContext___get_ParentContextsAndSelf_d__54", modifiers: " const&", def_value: None }]
constexpr Zenject__InjectContext___get_ParentContextsAndSelf_d__54(Zenject__InjectContext___get_ParentContextsAndSelf_d__54 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectContext___get_ParentContextsAndSelf_d__54", modifiers: "&&", def_value: None }]
constexpr Zenject__InjectContext___get_ParentContextsAndSelf_d__54(Zenject__InjectContext___get_ParentContextsAndSelf_d__54&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InjectContext___get_ParentContextsAndSelf_d__54(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InjectContext___get_ParentContextsAndSelf_d__54& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InjectContext___get_ParentContextsAndSelf_d__54& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InjectContext___get_ParentContextsAndSelf_d__54& operator=(Zenject__InjectContext___get_ParentContextsAndSelf_d__54&& o) noexcept = default;
  constexpr Zenject__InjectContext___get_ParentContextsAndSelf_d__54& operator=(Zenject__InjectContext___get_ParentContextsAndSelf_d__54 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 Zenject::InjectContext __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 Zenject::InjectContext __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> __get___7__wrap1() const;


// Properties

 Zenject::InjectContext __declspec(property(get=System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current))  System_Collections_Generic_IEnumerator_Zenject_InjectContext__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Zenject::Zenject__InjectContext___get_ParentContextsAndSelf_d__54 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d70554 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d71378 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d71394 size 0x2c0 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d71654 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current addr 0x2d71704 size 0x8 virtual true final true
 Zenject::InjectContext System_Collections_Generic_IEnumerator_Zenject_InjectContext__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d7170c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d7174c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator addr 0x2d71754 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> System_Collections_Generic_IEnumerable_Zenject_InjectContext__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d717f8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method __zenCreate addr 0x2d717fc size 0xcc virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d718c8 size 0x274 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<get_AllObjectTypes>d__56
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11054))
// CS Name: Zenject.InjectContext::<get_AllObjectTypes>d__56
class CORDL_TYPE Zenject__InjectContext___get_AllObjectTypes_d__56 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Type>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Type>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Type>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Type>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Zenject__InjectContext___get_AllObjectTypes_d__56() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectContext___get_AllObjectTypes_d__56", modifiers: " const&", def_value: None }]
constexpr Zenject__InjectContext___get_AllObjectTypes_d__56(Zenject__InjectContext___get_AllObjectTypes_d__56 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectContext___get_AllObjectTypes_d__56", modifiers: "&&", def_value: None }]
constexpr Zenject__InjectContext___get_AllObjectTypes_d__56(Zenject__InjectContext___get_AllObjectTypes_d__56&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InjectContext___get_AllObjectTypes_d__56(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InjectContext___get_AllObjectTypes_d__56& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InjectContext___get_AllObjectTypes_d__56& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InjectContext___get_AllObjectTypes_d__56& operator=(Zenject__InjectContext___get_AllObjectTypes_d__56&& o) noexcept = default;
  constexpr Zenject__InjectContext___get_AllObjectTypes_d__56& operator=(Zenject__InjectContext___get_AllObjectTypes_d__56 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Type __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Type value) ;

constexpr System::Type __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 Zenject::InjectContext __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Zenject::InjectContext> __get___7__wrap1() const;


// Properties

 System::Type __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current))  System_Collections_Generic_IEnumerator_System_Type__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Zenject::Zenject__InjectContext___get_AllObjectTypes_d__56 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d70600 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d71b3c size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d71b58 size 0x300 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d71e58 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current addr 0x2d71f08 size 0x8 virtual true final true
 System::Type System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d71f10 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d71f50 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator addr 0x2d71f58 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Type> System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d71ffc size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method __zenCreate addr 0x2d72000 size 0xcc virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d720cc size 0x274 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::InjectContext
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11055))
// CS Name: Zenject.InjectContext
class CORDL_TYPE InjectContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _get_AllObjectTypes_d__56 = Zenject::Zenject__InjectContext___get_AllObjectTypes_d__56;

using _get_ParentContextsAndSelf_d__54 = Zenject::Zenject__InjectContext___get_ParentContextsAndSelf_d__54;

using _get_ParentContexts_d__52 = Zenject::Zenject__InjectContext___get_ParentContexts_d__52;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~InjectContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectContext", modifiers: " const&", def_value: None }]
constexpr InjectContext(InjectContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectContext", modifiers: "&&", def_value: None }]
constexpr InjectContext(InjectContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InjectContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectContext& operator=(InjectContext&& o) noexcept = default;
  constexpr InjectContext& operator=(InjectContext const& o) noexcept = default;
                


// Fields

 Zenject::BindingId __declspec(property(get=__get__bindingId, put=__set__bindingId))  _bindingId;

constexpr void __set__bindingId(Zenject::BindingId value) ;

constexpr Zenject::BindingId __get__bindingId() const;

 System::Type __declspec(property(get=__get__objectType, put=__set__objectType))  _objectType;

constexpr void __set__objectType(System::Type value) ;

constexpr System::Type __get__objectType() const;

 Zenject::InjectContext __declspec(property(get=__get__parentContext, put=__set__parentContext))  _parentContext;

constexpr void __set__parentContext(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get__parentContext() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__objectInstance, put=__set__objectInstance))  _objectInstance;

constexpr void __set__objectInstance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__objectInstance() const;

 ::StringW __declspec(property(get=__get__memberName, put=__set__memberName))  _memberName;

constexpr void __set__memberName(::StringW value) ;

constexpr ::StringW __get__memberName() const;

 bool __declspec(property(get=__get__optional, put=__set__optional))  _optional;

constexpr void __set__optional(bool value) ;

constexpr bool __get__optional() const;

 Zenject::InjectSources __declspec(property(get=__get__sourceType, put=__set__sourceType))  _sourceType;

constexpr void __set__sourceType(Zenject::InjectSources value) ;

constexpr Zenject::InjectSources __get__sourceType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__fallBackValue, put=__set__fallBackValue))  _fallBackValue;

constexpr void __set__fallBackValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__fallBackValue() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__concreteIdentifier, put=__set__concreteIdentifier))  _concreteIdentifier;

constexpr void __set__concreteIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__concreteIdentifier() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;


// Properties

 Zenject::BindingId __declspec(property(get=get_BindingId))  BindingId;

 System::Type __declspec(property(get=get_ObjectType, put=set_ObjectType))  ObjectType;

 Zenject::InjectContext __declspec(property(get=get_ParentContext, put=set_ParentContext))  ParentContext;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ObjectInstance, put=set_ObjectInstance))  ObjectInstance;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Identifier, put=set_Identifier))  Identifier;

 ::StringW __declspec(property(get=get_MemberName, put=set_MemberName))  MemberName;

 System::Type __declspec(property(get=get_MemberType, put=set_MemberType))  MemberType;

 bool __declspec(property(get=get_Optional, put=set_Optional))  Optional;

 Zenject::InjectSources __declspec(property(get=get_SourceType, put=set_SourceType))  SourceType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ConcreteIdentifier, put=set_ConcreteIdentifier))  ConcreteIdentifier;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_FallBackValue, put=set_FallBackValue))  FallBackValue;

 Zenject::DiContainer __declspec(property(get=get_Container, put=set_Container))  Container;

 System::Collections::Generic::IEnumerable_1<Zenject::InjectContext> __declspec(property(get=get_ParentContexts))  ParentContexts;

 System::Collections::Generic::IEnumerable_1<Zenject::InjectContext> __declspec(property(get=get_ParentContextsAndSelf))  ParentContextsAndSelf;

 System::Collections::Generic::IEnumerable_1<System::Type> __declspec(property(get=get_AllObjectTypes))  AllObjectTypes;


// Methods

static Zenject::InjectContext New_ctor() ;

/// @brief Method .ctor addr 0x2d701c0 size 0x20 virtual false final false
 void _ctor() ;

static Zenject::InjectContext New_ctor(Zenject::DiContainer container, System::Type memberType) ;

/// @brief Method .ctor addr 0x2d70240 size 0x3c virtual false final false
 void _ctor(Zenject::DiContainer container, System::Type memberType) ;

static Zenject::InjectContext New_ctor(Zenject::DiContainer container, System::Type memberType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method .ctor addr 0x2d70284 size 0x48 virtual false final false
 void _ctor(Zenject::DiContainer container, System::Type memberType, ::bs_hook::Il2CppWrapperType identifier) ;

static Zenject::InjectContext New_ctor(Zenject::DiContainer container, System::Type memberType, ::bs_hook::Il2CppWrapperType identifier, bool optional) ;

/// @brief Method .ctor addr 0x2d702d4 size 0x54 virtual false final false
 void _ctor(Zenject::DiContainer container, System::Type memberType, ::bs_hook::Il2CppWrapperType identifier, bool optional) ;

/// @brief Method Dispose addr 0x2d70328 size 0x58 virtual true final true
 void Dispose() ;

/// @brief Method Reset addr 0x2d701e0 size 0x60 virtual false final false
 void Reset() ;

/// @brief Method get_BindingId addr 0x2d70380 size 0xc virtual false final false
 Zenject::BindingId get_BindingId() ;

/// @brief Method get_ObjectType addr 0x2d7038c size 0x8 virtual false final false
 System::Type get_ObjectType() ;

/// @brief Method set_ObjectType addr 0x2d70394 size 0x8 virtual false final false
 void set_ObjectType(System::Type value) ;

/// @brief Method get_ParentContext addr 0x2d7039c size 0x8 virtual false final false
 Zenject::InjectContext get_ParentContext() ;

/// @brief Method set_ParentContext addr 0x2d703a4 size 0x8 virtual false final false
 void set_ParentContext(Zenject::InjectContext value) ;

/// @brief Method get_ObjectInstance addr 0x2d703ac size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_ObjectInstance() ;

/// @brief Method set_ObjectInstance addr 0x2d703b4 size 0x8 virtual false final false
 void set_ObjectInstance(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Identifier addr 0x2d703bc size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Identifier() ;

/// @brief Method set_Identifier addr 0x2d702cc size 0x8 virtual false final false
 void set_Identifier(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_MemberName addr 0x2d703c4 size 0x8 virtual false final false
 ::StringW get_MemberName() ;

/// @brief Method set_MemberName addr 0x2d703cc size 0x8 virtual false final false
 void set_MemberName(::StringW value) ;

/// @brief Method get_MemberType addr 0x2d703d4 size 0x8 virtual false final false
 System::Type get_MemberType() ;

/// @brief Method set_MemberType addr 0x2d7027c size 0x8 virtual false final false
 void set_MemberType(System::Type value) ;

/// @brief Method get_Optional addr 0x2d703dc size 0x8 virtual false final false
 bool get_Optional() ;

/// @brief Method set_Optional addr 0x2d703e4 size 0xc virtual false final false
 void set_Optional(bool value) ;

/// @brief Method get_SourceType addr 0x2d703f0 size 0x8 virtual false final false
 Zenject::InjectSources get_SourceType() ;

/// @brief Method set_SourceType addr 0x2d703f8 size 0x8 virtual false final false
 void set_SourceType(Zenject::InjectSources value) ;

/// @brief Method get_ConcreteIdentifier addr 0x2d70400 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_ConcreteIdentifier() ;

/// @brief Method set_ConcreteIdentifier addr 0x2d70408 size 0x8 virtual false final false
 void set_ConcreteIdentifier(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_FallBackValue addr 0x2d70410 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_FallBackValue() ;

/// @brief Method set_FallBackValue addr 0x2d70418 size 0x8 virtual false final false
 void set_FallBackValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Container addr 0x2d70420 size 0x8 virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method set_Container addr 0x2d70428 size 0x8 virtual false final false
 void set_Container(Zenject::DiContainer value) ;

/// @brief Method get_ParentContexts addr 0x2d70430 size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::InjectContext> get_ParentContexts() ;

/// @brief Method get_ParentContextsAndSelf addr 0x2d704dc size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::InjectContext> get_ParentContextsAndSelf() ;

/// @brief Method get_AllObjectTypes addr 0x2d70588 size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Type> get_AllObjectTypes() ;

/// @brief Method CreateSubContext addr 0x2d70634 size 0x8 virtual false final false
 Zenject::InjectContext CreateSubContext(System::Type memberType) ;

/// @brief Method CreateSubContext addr 0x2d7063c size 0xcc virtual false final false
 Zenject::InjectContext CreateSubContext(System::Type memberType, ::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method Clone addr 0x2d70708 size 0xac virtual false final false
 Zenject::InjectContext Clone() ;

/// @brief Method GetObjectGraphString addr 0x2d707b4 size 0x3d0 virtual false final false
 ::StringW GetObjectGraphString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::InjectContext);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext, "Zenject", "InjectContext");
NEED_NO_BOX(Zenject::Zenject__InjectContext___get_AllObjectTypes_d__56);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__InjectContext___get_AllObjectTypes_d__56, "Zenject", "InjectContext/<get_AllObjectTypes>d__56");
NEED_NO_BOX(Zenject::Zenject__InjectContext___get_ParentContextsAndSelf_d__54);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__InjectContext___get_ParentContextsAndSelf_d__54, "Zenject", "InjectContext/<get_ParentContextsAndSelf>d__54");
NEED_NO_BOX(Zenject::Zenject__InjectContext___get_ParentContexts_d__52);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__InjectContext___get_ParentContexts_d__52, "Zenject", "InjectContext/<get_ParentContexts>d__52");
