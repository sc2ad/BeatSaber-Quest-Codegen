#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace Zenject {
class IValidatable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
template<typename TBase,typename TKey>
class KeyedFactoryBase_2;
}
namespace Zenject {
template<typename TBase,typename TKey>
class Zenject__KeyedFactoryBase_2____c;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey>
class KeyedFactoryBase_2<TBase,TKey>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey>
class Zenject__KeyedFactoryBase_2____c<TBase,TKey>;
}
// Type: ::<>c
// Type: Zenject::KeyedFactoryBase`2
// Type: ::<>c
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10936), inst: 80 })
// CS Name: Zenject.KeyedFactoryBase`2::<>c
class CORDL_TYPE Zenject__KeyedFactoryBase_2____c<TBase,TKey> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__KeyedFactoryBase_2____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__KeyedFactoryBase_2____c", modifiers: " const&", def_value: None }]
constexpr Zenject__KeyedFactoryBase_2____c(Zenject__KeyedFactoryBase_2____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__KeyedFactoryBase_2____c", modifiers: "&&", def_value: None }]
constexpr Zenject__KeyedFactoryBase_2____c(Zenject__KeyedFactoryBase_2____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__KeyedFactoryBase_2____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__KeyedFactoryBase_2____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__KeyedFactoryBase_2____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__KeyedFactoryBase_2____c& operator=(Zenject__KeyedFactoryBase_2____c&& o) noexcept = default;
  constexpr Zenject__KeyedFactoryBase_2____c& operator=(Zenject__KeyedFactoryBase_2____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__KeyedFactoryBase_2____c<TBase,TKey> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__KeyedFactoryBase_2____c<TBase,TKey> value) ;

static Zenject::Zenject__KeyedFactoryBase_2____c<TBase,TKey> __get___9() ;

static System::Func_2<ModestTree::Util::ValuePair_2<TKey,System::Type>,TKey> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(System::Func_2<ModestTree::Util::ValuePair_2<TKey,System::Type>,TKey> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<TKey,System::Type>,TKey> __get___9__12_0() ;

static System::Func_2<ModestTree::Util::ValuePair_2<TKey,System::Type>,System::Type> __declspec(property(get=__get___9__12_1, put=__set___9__12_1))  __9__12_1;

static void __set___9__12_1(System::Func_2<ModestTree::Util::ValuePair_2<TKey,System::Type>,System::Type> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<TKey,System::Type>,System::Type> __get___9__12_1() ;


// Methods

// Ctor Parameters []
explicit Zenject__KeyedFactoryBase_2____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Initialize>b__12_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TKey _Initialize_b__12_0(ModestTree::Util::ValuePair_2<TKey,System::Type> x) ;

/// @brief Method <Initialize>b__12_1 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Type _Initialize_b__12_1(ModestTree::Util::ValuePair_2<TKey,System::Type> x) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::KeyedFactoryBase`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TKey>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10937))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10937), inst: 80 })
// CS Name: Zenject.KeyedFactoryBase`2
class CORDL_TYPE KeyedFactoryBase_2<TBase,TKey> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__KeyedFactoryBase_2____c<TBase, TKey>;

/// @brief Convert operator to Zenject::IValidatable
constexpr operator  Zenject::IValidatable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyedFactoryBase_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: " const&", def_value: None }]
constexpr KeyedFactoryBase_2(KeyedFactoryBase_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedFactoryBase_2", modifiers: "&&", def_value: None }]
constexpr KeyedFactoryBase_2(KeyedFactoryBase_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyedFactoryBase_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyedFactoryBase_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyedFactoryBase_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyedFactoryBase_2& operator=(KeyedFactoryBase_2&& o) noexcept = default;
  constexpr KeyedFactoryBase_2& operator=(KeyedFactoryBase_2 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<TKey,System::Type>> __declspec(property(get=__get__typePairs, put=__set__typePairs))  _typePairs;

constexpr void __set__typePairs(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<TKey,System::Type>> value) ;

constexpr System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<TKey,System::Type>> __get__typePairs() const;

 System::Collections::Generic::Dictionary_2<TKey,System::Type> __declspec(property(get=__get__typeMap, put=__set__typeMap))  _typeMap;

constexpr void __set__typeMap(System::Collections::Generic::Dictionary_2<TKey,System::Type> value) ;

constexpr System::Collections::Generic::Dictionary_2<TKey,System::Type> __get__typeMap() const;

 System::Type __declspec(property(get=__get__fallbackType, put=__set__fallbackType))  _fallbackType;

constexpr void __set__fallbackType(System::Type value) ;

constexpr System::Type __get__fallbackType() const;


// Properties

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;

 System::Collections::Generic::IEnumerable_1<System::Type> __declspec(property(get=get_ProvidedTypes))  ProvidedTypes;

 System::Collections::Generic::ICollection_1<TKey> __declspec(property(get=get_Keys))  Keys;

 System::Collections::Generic::Dictionary_2<TKey,System::Type> __declspec(property(get=get_TypeMap))  TypeMap;


// Methods

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method get_ProvidedTypes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<System::Type> get_ProvidedTypes() ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::ICollection_1<TKey> get_Keys() ;

/// @brief Method get_TypeMap addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::Dictionary_2<TKey,System::Type> get_TypeMap() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Initialize() ;

/// @brief Method HasKey addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasKey(TKey key) ;

/// @brief Method GetTypeForKey addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Type GetTypeForKey(TKey key) ;

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Validate() ;

/// @brief Method AddBindingInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDerived>
static Zenject::ConditionCopyNonLazyBinder AddBindingInternal(Zenject::DiContainer container, TKey key) ;

// Ctor Parameters []
explicit KeyedFactoryBase_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter1 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenFieldSetter1(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter2 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenFieldSetter2(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::KeyedFactoryBase_2, "Zenject", "KeyedFactoryBase`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__KeyedFactoryBase_2____c, "Zenject", "KeyedFactoryBase`2/<>c");
