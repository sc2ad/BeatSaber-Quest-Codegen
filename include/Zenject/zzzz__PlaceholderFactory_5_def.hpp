#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class IFactory_5;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Type;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class PlaceholderFactory_5;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class Zenject__PlaceholderFactory_5___get_ParamTypes_d__2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
class PlaceholderFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
class Zenject__PlaceholderFactory_5___get_ParamTypes_d__2<TParam1,TParam2,TParam3,TParam4,TValue>;
}
// Type: ::<get_ParamTypes>d__2
// Type: Zenject::PlaceholderFactory`5
// Type: ::<get_ParamTypes>d__2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10955))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10955), inst: 5938 })
// CS Name: Zenject.PlaceholderFactory`5::<get_ParamTypes>d__2
class CORDL_TYPE Zenject__PlaceholderFactory_5___get_ParamTypes_d__2<TParam1,TParam2,TParam3,TParam4,TValue> : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__PlaceholderFactory_5___get_ParamTypes_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PlaceholderFactory_5___get_ParamTypes_d__2", modifiers: " const&", def_value: None }]
constexpr Zenject__PlaceholderFactory_5___get_ParamTypes_d__2(Zenject__PlaceholderFactory_5___get_ParamTypes_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PlaceholderFactory_5___get_ParamTypes_d__2", modifiers: "&&", def_value: None }]
constexpr Zenject__PlaceholderFactory_5___get_ParamTypes_d__2(Zenject__PlaceholderFactory_5___get_ParamTypes_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PlaceholderFactory_5___get_ParamTypes_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PlaceholderFactory_5___get_ParamTypes_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PlaceholderFactory_5___get_ParamTypes_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PlaceholderFactory_5___get_ParamTypes_d__2& operator=(Zenject__PlaceholderFactory_5___get_ParamTypes_d__2&& o) noexcept = default;
  constexpr Zenject__PlaceholderFactory_5___get_ParamTypes_d__2& operator=(Zenject__PlaceholderFactory_5___get_ParamTypes_d__2 const& o) noexcept = default;
                


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


// Properties

 System::Type __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current))  System_Collections_Generic_IEnumerator_System_Type__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Zenject__PlaceholderFactory_5___get_ParamTypes_d__2(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Type System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Type> System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::PlaceholderFactory`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10956)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10968), inst: 4671 }), TypeDefinitionIndex(TypeDefinitionIndex(10968))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10956), inst: 5938 })
// CS Name: Zenject.PlaceholderFactory`5
class CORDL_TYPE PlaceholderFactory_5<TParam1,TParam2,TParam3,TParam4,TValue> : public Zenject::PlaceholderFactoryBase_1<TValue> {
public:
// Declarations
using _get_ParamTypes_d__2 = Zenject::Zenject__PlaceholderFactory_5___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TParam4, TValue>;

/// @brief Convert operator to Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>
constexpr operator  Zenject::IFactory_5<TParam1,TParam2,TParam3,TParam4,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlaceholderFactory_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactory_5", modifiers: " const&", def_value: None }]
constexpr PlaceholderFactory_5(PlaceholderFactory_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactory_5", modifiers: "&&", def_value: None }]
constexpr PlaceholderFactory_5(PlaceholderFactory_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlaceholderFactory_5(void* ptr) noexcept : Zenject::PlaceholderFactoryBase_1<TValue>(ptr) {
}


  constexpr PlaceholderFactory_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlaceholderFactory_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlaceholderFactory_5& operator=(PlaceholderFactory_5&& o) noexcept = default;
  constexpr PlaceholderFactory_5& operator=(PlaceholderFactory_5 const& o) noexcept = default;
                


// Properties

 System::Collections::Generic::IEnumerable_1<System::Type> __declspec(property(get=get_ParamTypes))  ParamTypes;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) ;

/// @brief Method get_ParamTypes addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerable_1<System::Type> get_ParamTypes() ;

// Ctor Parameters []
explicit PlaceholderFactory_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactory_5, "Zenject", "PlaceholderFactory`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__PlaceholderFactory_5___get_ParamTypes_d__2, "Zenject", "PlaceholderFactory`5/<get_ParamTypes>d__2");
