#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Type;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Attribute;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace ModestTree {
class ModestTree__TypeExtensions___GetParentTypes_d__28;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass35_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Delegate;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass35_0;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass39_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass39_1;
}
// Forward declare root types
namespace ModestTree {
class ModestTree__TypeExtensions___GetParentTypes_d__28;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass35_0;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass35_1;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass39_0;
}
namespace ModestTree {
class ModestTree__TypeExtensions____c__DisplayClass39_1;
}
namespace ModestTree {
class TypeExtensions;
}
// Type: ::<GetParentTypes>d__28
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10558))
// CS Name: ModestTree.TypeExtensions::<GetParentTypes>d__28
class CORDL_TYPE ModestTree__TypeExtensions___GetParentTypes_d__28 : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ModestTree__TypeExtensions___GetParentTypes_d__28() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions___GetParentTypes_d__28", modifiers: " const&", def_value: None }]
constexpr ModestTree__TypeExtensions___GetParentTypes_d__28(ModestTree__TypeExtensions___GetParentTypes_d__28 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions___GetParentTypes_d__28", modifiers: "&&", def_value: None }]
constexpr ModestTree__TypeExtensions___GetParentTypes_d__28(ModestTree__TypeExtensions___GetParentTypes_d__28&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__TypeExtensions___GetParentTypes_d__28(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__TypeExtensions___GetParentTypes_d__28& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__TypeExtensions___GetParentTypes_d__28& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__TypeExtensions___GetParentTypes_d__28& operator=(ModestTree__TypeExtensions___GetParentTypes_d__28&& o) noexcept = default;
  constexpr ModestTree__TypeExtensions___GetParentTypes_d__28& operator=(ModestTree__TypeExtensions___GetParentTypes_d__28 const& o) noexcept = default;
                


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

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 System::Type __declspec(property(get=__get___3__type, put=__set___3__type))  __3__type;

constexpr void __set___3__type(System::Type value) ;

constexpr System::Type __get___3__type() const;

 System::Collections::Generic::IEnumerator_1<System::Type> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<System::Type> value) ;

constexpr System::Collections::Generic::IEnumerator_1<System::Type> __get___7__wrap1() const;


// Properties

 System::Type __declspec(property(get=System_Collections_Generic_IEnumerator_System_Type__get_Current))  System_Collections_Generic_IEnumerator_System_Type__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static ModestTree::ModestTree__TypeExtensions___GetParentTypes_d__28 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d43840 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d43ec8 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d43ee4 size 0x4dc virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d443c0 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current addr 0x2d44470 size 0x8 virtual true final true
 System::Type System_Collections_Generic_IEnumerator_System_Type__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d44478 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d444b8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator addr 0x2d444c0 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Type> System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d44564 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__DisplayClass35_0
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10559))
// CS Name: ModestTree.TypeExtensions::<>c__DisplayClass35_0
class CORDL_TYPE ModestTree__TypeExtensions____c__DisplayClass35_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ModestTree__TypeExtensions____c__DisplayClass35_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass35_0", modifiers: " const&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass35_0(ModestTree__TypeExtensions____c__DisplayClass35_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass35_0(ModestTree__TypeExtensions____c__DisplayClass35_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__TypeExtensions____c__DisplayClass35_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__TypeExtensions____c__DisplayClass35_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass35_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass35_0& operator=(ModestTree__TypeExtensions____c__DisplayClass35_0&& o) noexcept = default;
  constexpr ModestTree__TypeExtensions____c__DisplayClass35_0& operator=(ModestTree__TypeExtensions____c__DisplayClass35_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Type> __declspec(property(get=__get_attributeTypes, put=__set_attributeTypes))  attributeTypes;

constexpr void __set_attributeTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_attributeTypes() const;


// Methods

static ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d43bb8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AllAttributes>b__0 addr 0x2d44568 size 0xd8 virtual false final false
 bool _AllAttributes_b__0(System::Attribute a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__DisplayClass35_1
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10560))
// CS Name: ModestTree.TypeExtensions::<>c__DisplayClass35_1
class CORDL_TYPE ModestTree__TypeExtensions____c__DisplayClass35_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ModestTree__TypeExtensions____c__DisplayClass35_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass35_1", modifiers: " const&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass35_1(ModestTree__TypeExtensions____c__DisplayClass35_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass35_1", modifiers: "&&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass35_1(ModestTree__TypeExtensions____c__DisplayClass35_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__TypeExtensions____c__DisplayClass35_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__TypeExtensions____c__DisplayClass35_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass35_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass35_1& operator=(ModestTree__TypeExtensions____c__DisplayClass35_1&& o) noexcept = default;
  constexpr ModestTree__TypeExtensions____c__DisplayClass35_1& operator=(ModestTree__TypeExtensions____c__DisplayClass35_1 const& o) noexcept = default;
                


// Fields

 System::Attribute __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(System::Attribute value) ;

constexpr System::Attribute __get_a() const;


// Methods

static ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_1 New_ctor() ;

/// @brief Method .ctor addr 0x2d44640 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AllAttributes>b__1 addr 0x2d44648 size 0x78 virtual false final false
 bool _AllAttributes_b__1(System::Type x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__DisplayClass39_0
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10561))
// CS Name: ModestTree.TypeExtensions::<>c__DisplayClass39_0
class CORDL_TYPE ModestTree__TypeExtensions____c__DisplayClass39_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ModestTree__TypeExtensions____c__DisplayClass39_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass39_0", modifiers: " const&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass39_0(ModestTree__TypeExtensions____c__DisplayClass39_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass39_0(ModestTree__TypeExtensions____c__DisplayClass39_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__TypeExtensions____c__DisplayClass39_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__TypeExtensions____c__DisplayClass39_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass39_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass39_0& operator=(ModestTree__TypeExtensions____c__DisplayClass39_0&& o) noexcept = default;
  constexpr ModestTree__TypeExtensions____c__DisplayClass39_0& operator=(ModestTree__TypeExtensions____c__DisplayClass39_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Type> __declspec(property(get=__get_attributeTypes, put=__set_attributeTypes))  attributeTypes;

constexpr void __set_attributeTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_attributeTypes() const;


// Methods

static ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d43d98 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AllAttributes>b__0 addr 0x2d446c0 size 0xd8 virtual false final false
 bool _AllAttributes_b__0(System::Attribute a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ::<>c__DisplayClass39_1
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10562))
// CS Name: ModestTree.TypeExtensions::<>c__DisplayClass39_1
class CORDL_TYPE ModestTree__TypeExtensions____c__DisplayClass39_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ModestTree__TypeExtensions____c__DisplayClass39_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass39_1", modifiers: " const&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass39_1(ModestTree__TypeExtensions____c__DisplayClass39_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__TypeExtensions____c__DisplayClass39_1", modifiers: "&&", def_value: None }]
constexpr ModestTree__TypeExtensions____c__DisplayClass39_1(ModestTree__TypeExtensions____c__DisplayClass39_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__TypeExtensions____c__DisplayClass39_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__TypeExtensions____c__DisplayClass39_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass39_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__TypeExtensions____c__DisplayClass39_1& operator=(ModestTree__TypeExtensions____c__DisplayClass39_1&& o) noexcept = default;
  constexpr ModestTree__TypeExtensions____c__DisplayClass39_1& operator=(ModestTree__TypeExtensions____c__DisplayClass39_1 const& o) noexcept = default;
                


// Fields

 System::Attribute __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(System::Attribute value) ;

constexpr System::Attribute __get_a() const;


// Methods

static ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_1 New_ctor() ;

/// @brief Method .ctor addr 0x2d44798 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AllAttributes>b__1 addr 0x2d447a0 size 0x78 virtual false final false
 bool _AllAttributes_b__1(System::Type x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ModestTree::TypeExtensions
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10563))
// CS Name: ModestTree.TypeExtensions
class CORDL_TYPE TypeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass39_1 = ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_1;

using __c__DisplayClass39_0 = ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_0;

using __c__DisplayClass35_1 = ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_1;

using __c__DisplayClass35_0 = ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_0;

using _GetParentTypes_d__28 = ModestTree::ModestTree__TypeExtensions___GetParentTypes_d__28;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: " const&", def_value: None }]
constexpr TypeExtensions(TypeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
constexpr TypeExtensions(TypeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeExtensions& operator=(TypeExtensions&& o) noexcept = default;
  constexpr TypeExtensions& operator=(TypeExtensions const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<System::Type,bool> __declspec(property(get=__get__isClosedGenericType, put=__set__isClosedGenericType))  _isClosedGenericType;

static void __set__isClosedGenericType(System::Collections::Generic::Dictionary_2<System::Type,bool> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,bool> __get__isClosedGenericType() ;

static System::Collections::Generic::Dictionary_2<System::Type,bool> __declspec(property(get=__get__isOpenGenericType, put=__set__isOpenGenericType))  _isOpenGenericType;

static void __set__isOpenGenericType(System::Collections::Generic::Dictionary_2<System::Type,bool> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,bool> __get__isOpenGenericType() ;

static System::Collections::Generic::Dictionary_2<System::Type,bool> __declspec(property(get=__get__isValueType, put=__set__isValueType))  _isValueType;

static void __set__isValueType(System::Collections::Generic::Dictionary_2<System::Type,bool> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,bool> __get__isValueType() ;

static System::Collections::Generic::Dictionary_2<System::Type,::ArrayW<System::Type>> __declspec(property(get=__get__interfaces, put=__set__interfaces))  _interfaces;

static void __set__interfaces(System::Collections::Generic::Dictionary_2<System::Type,::ArrayW<System::Type>> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,::ArrayW<System::Type>> __get__interfaces() ;


// Methods

/// @brief Method DerivesFrom addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool DerivesFrom(System::Type a) ;

/// @brief Method DerivesFrom addr 0x2d416f4 size 0xb0 virtual false final false
static bool DerivesFrom(System::Type a, System::Type b) ;

/// @brief Method DerivesFromOrEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool DerivesFromOrEqual(System::Type a) ;

/// @brief Method DerivesFromOrEqual addr 0x2d41960 size 0xa0 virtual false final false
static bool DerivesFromOrEqual(System::Type a, System::Type b) ;

/// @brief Method IsAssignableToGenericType addr 0x2d43060 size 0x1d8 virtual false final false
static bool IsAssignableToGenericType(System::Type givenType, System::Type genericType) ;

/// @brief Method IsEnum addr 0x2d43338 size 0x20 virtual false final false
static bool IsEnum(System::Type type) ;

/// @brief Method IsValueType addr 0x2d43358 size 0xfc virtual false final false
static bool IsValueType(System::Type type) ;

/// @brief Method DeclaredInstanceMethods addr 0x2d43454 size 0x24 virtual false final false
static ::ArrayW<System::Reflection::MethodInfo> DeclaredInstanceMethods(System::Type type) ;

/// @brief Method DeclaredInstanceProperties addr 0x2d43478 size 0x24 virtual false final false
static ::ArrayW<System::Reflection::PropertyInfo> DeclaredInstanceProperties(System::Type type) ;

/// @brief Method DeclaredInstanceFields addr 0x2d4349c size 0x24 virtual false final false
static ::ArrayW<System::Reflection::FieldInfo> DeclaredInstanceFields(System::Type type) ;

/// @brief Method BaseType addr 0x2d434c0 size 0x20 virtual false final false
static System::Type BaseType(System::Type type) ;

/// @brief Method IsGenericType addr 0x2d434e0 size 0x20 virtual false final false
static bool IsGenericType(System::Type type) ;

/// @brief Method IsGenericTypeDefinition addr 0x2d43500 size 0x20 virtual false final false
static bool IsGenericTypeDefinition(System::Type type) ;

/// @brief Method IsPrimitive addr 0x2d43520 size 0x14 virtual false final false
static bool IsPrimitive(System::Type type) ;

/// @brief Method IsInterface addr 0x2d43534 size 0x14 virtual false final false
static bool IsInterface(System::Type type) ;

/// @brief Method ContainsGenericParameters addr 0x2d43548 size 0x20 virtual false final false
static bool ContainsGenericParameters(System::Type type) ;

/// @brief Method IsAbstract addr 0x2d43568 size 0x14 virtual false final false
static bool IsAbstract(System::Type type) ;

/// @brief Method IsSealed addr 0x2d4357c size 0x14 virtual false final false
static bool IsSealed(System::Type type) ;

/// @brief Method Method addr 0x2d43590 size 0x14 virtual false final false
static System::Reflection::MethodInfo Method(System::Delegate del) ;

/// @brief Method GenericArguments addr 0x2d435a4 size 0x20 virtual false final false
static ::ArrayW<System::Type> GenericArguments(System::Type type) ;

/// @brief Method Interfaces addr 0x2d43238 size 0x100 virtual false final false
static ::ArrayW<System::Type> Interfaces(System::Type type) ;

/// @brief Method Constructors addr 0x2d435c4 size 0x24 virtual false final false
static ::ArrayW<System::Reflection::ConstructorInfo> Constructors(System::Type type) ;

/// @brief Method GetDefaultValue addr 0x2d435e8 size 0x74 virtual false final false
static ::bs_hook::Il2CppWrapperType GetDefaultValue(System::Type type) ;

/// @brief Method IsClosedGenericType addr 0x2d4365c size 0x16c virtual false final false
static bool IsClosedGenericType(System::Type type) ;

/// @brief Method GetParentTypes addr 0x2d437c8 size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Type> GetParentTypes(System::Type type) ;

/// @brief Method IsOpenGenericType addr 0x2d43874 size 0x16c virtual false final false
static bool IsOpenGenericType(System::Type type) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetAttribute(System::Reflection::MemberInfo provider) ;

/// @brief Method TryGetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T TryGetAttribute(System::Reflection::MemberInfo provider) ;

/// @brief Method HasAttribute addr 0x2d439e0 size 0x80 virtual false final false
static bool HasAttribute(System::Reflection::MemberInfo provider, ::ArrayW<System::Type> attributeTypes) ;

/// @brief Method HasAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool HasAttribute(System::Reflection::MemberInfo provider) ;

/// @brief Method AllAttributes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> AllAttributes(System::Reflection::MemberInfo provider) ;

/// @brief Method AllAttributes addr 0x2d43a60 size 0x158 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Attribute> AllAttributes(System::Reflection::MemberInfo provider, ::ArrayW<System::Type> attributeTypes) ;

/// @brief Method HasAttribute addr 0x2d43bc0 size 0x80 virtual false final false
static bool HasAttribute(System::Reflection::ParameterInfo provider, ::ArrayW<System::Type> attributeTypes) ;

/// @brief Method HasAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool HasAttribute(System::Reflection::ParameterInfo provider) ;

/// @brief Method AllAttributes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> AllAttributes(System::Reflection::ParameterInfo provider) ;

/// @brief Method AllAttributes addr 0x2d43c40 size 0x158 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Attribute> AllAttributes(System::Reflection::ParameterInfo provider, ::ArrayW<System::Type> attributeTypes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
NEED_NO_BOX(ModestTree::ModestTree__TypeExtensions___GetParentTypes_d__28);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ModestTree__TypeExtensions___GetParentTypes_d__28, "ModestTree", "TypeExtensions/<GetParentTypes>d__28");
NEED_NO_BOX(ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_0, "ModestTree", "TypeExtensions/<>c__DisplayClass35_0");
NEED_NO_BOX(ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_1);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ModestTree__TypeExtensions____c__DisplayClass35_1, "ModestTree", "TypeExtensions/<>c__DisplayClass35_1");
NEED_NO_BOX(ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_0, "ModestTree", "TypeExtensions/<>c__DisplayClass39_0");
NEED_NO_BOX(ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_1);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ModestTree__TypeExtensions____c__DisplayClass39_1, "ModestTree", "TypeExtensions/<>c__DisplayClass39_1");
NEED_NO_BOX(ModestTree::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeExtensions, "ModestTree", "TypeExtensions");
