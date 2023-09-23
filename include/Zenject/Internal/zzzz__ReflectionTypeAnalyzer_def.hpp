#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
class InjectableInfo;
}
namespace System {
class Type;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionTypeAnalyzer;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0;
}
// Type: ::<>c__DisplayClass5_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11327))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass5_0
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x2dac8e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPropertyInfos>b__1 addr 0x2dac8ec size 0xb4 virtual false final false
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo _GetPropertyInfos_b__1(System::Reflection::PropertyInfo x) ;

/// @brief Method __zenCreate addr 0x2dac9a0 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dac9fc size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass5_1
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11328))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass5_1
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1 const& o) noexcept = default;
                


// Fields

 System::Reflection::PropertyInfo __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(System::Reflection::PropertyInfo value) ;

constexpr System::Reflection::PropertyInfo __get_x() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1() ;

/// @brief Method .ctor addr 0x2dacbbc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPropertyInfos>b__2 addr 0x2dacbc4 size 0xcc virtual false final false
 bool _GetPropertyInfos_b__2(System::Type a) ;

/// @brief Method __zenCreate addr 0x2dacc90 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2daccec size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11329))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c(Zenject__Internal__ReflectionTypeAnalyzer____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c(Zenject__Internal__ReflectionTypeAnalyzer____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c const& o) noexcept = default;
                


// Fields

static Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c value) ;

static Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c __get___9() ;

static System::Func_2<System::Reflection::PropertyInfo,bool> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<System::Reflection::PropertyInfo,bool> value) ;

static System::Func_2<System::Reflection::PropertyInfo,bool> __get___9__5_0() ;

static System::Func_2<System::Reflection::FieldInfo,bool> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<System::Reflection::FieldInfo,bool> value) ;

static System::Func_2<System::Reflection::FieldInfo,bool> __get___9__6_0() ;

static System::Func_2<System::Reflection::MethodInfo,bool> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<System::Reflection::MethodInfo,bool> value) ;

static System::Func_2<System::Reflection::MethodInfo,bool> __get___9__7_0() ;

static System::Func_2<System::Reflection::ConstructorInfo,bool> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<System::Reflection::ConstructorInfo,bool> value) ;

static System::Func_2<System::Reflection::ConstructorInfo,bool> __get___9__11_0() ;

static System::Func_2<System::Reflection::ConstructorInfo,bool> __declspec(property(get=__get___9__11_1, put=__set___9__11_1))  __9__11_1;

static void __set___9__11_1(System::Func_2<System::Reflection::ConstructorInfo,bool> value) ;

static System::Func_2<System::Reflection::ConstructorInfo,bool> __get___9__11_1() ;

static System::Func_2<System::Reflection::ConstructorInfo,int32_t> __declspec(property(get=__get___9__11_2, put=__set___9__11_2))  __9__11_2;

static void __set___9__11_2(System::Func_2<System::Reflection::ConstructorInfo,int32_t> value) ;

static System::Func_2<System::Reflection::ConstructorInfo,int32_t> __get___9__11_2() ;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c() ;

/// @brief Method .ctor addr 0x2dacf10 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPropertyInfos>b__5_0 addr 0x2dacf18 size 0x100 virtual false final false
 bool _GetPropertyInfos_b__5_0(System::Reflection::PropertyInfo x) ;

/// @brief Method <GetFieldInfos>b__6_0 addr 0x2dad018 size 0x100 virtual false final false
 bool _GetFieldInfos_b__6_0(System::Reflection::FieldInfo x) ;

/// @brief Method <GetMethodInfos>b__7_0 addr 0x2dad120 size 0x100 virtual false final false
 bool _GetMethodInfos_b__7_0(System::Reflection::MethodInfo x) ;

/// @brief Method <TryGetInjectConstructor>b__11_0 addr 0x2dad228 size 0x100 virtual false final false
 bool _TryGetInjectConstructor_b__11_0(System::Reflection::ConstructorInfo c) ;

/// @brief Method <TryGetInjectConstructor>b__11_1 addr 0x2dad330 size 0x18 virtual false final false
 bool _TryGetInjectConstructor_b__11_1(System::Reflection::ConstructorInfo x) ;

/// @brief Method <TryGetInjectConstructor>b__11_2 addr 0x2dad348 size 0x60 virtual false final false
 int32_t _TryGetInjectConstructor_b__11_2(System::Reflection::ConstructorInfo x) ;

/// @brief Method __zenCreate addr 0x2dad3a8 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dad404 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass6_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11330))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass6_0
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x2dad5c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetFieldInfos>b__1 addr 0x2dad5cc size 0xb4 virtual false final false
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo _GetFieldInfos_b__1(System::Reflection::FieldInfo x) ;

/// @brief Method __zenCreate addr 0x2dad680 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dad6dc size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass6_1
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11331))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass6_1
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1 const& o) noexcept = default;
                


// Fields

 System::Reflection::FieldInfo __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(System::Reflection::FieldInfo value) ;

constexpr System::Reflection::FieldInfo __get_x() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1() ;

/// @brief Method .ctor addr 0x2dad118 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetFieldInfos>b__2 addr 0x2dad89c size 0xcc virtual false final false
 bool _GetFieldInfos_b__2(System::Type a) ;

/// @brief Method __zenCreate addr 0x2dad968 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dad9c4 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass7_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11332))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass7_0
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 System::Func_2<System::Reflection::ParameterInfo,Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> __declspec(property(get=__get___9__2, put=__set___9__2))  __9__2;

constexpr void __set___9__2(System::Func_2<System::Reflection::ParameterInfo,Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> value) ;

constexpr System::Func_2<System::Reflection::ParameterInfo,Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> __get___9__2() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x2dadb84 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetMethodInfos>b__2 addr 0x2dadb8c size 0x6c virtual false final false
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo _GetMethodInfos_b__2(System::Reflection::ParameterInfo x) ;

/// @brief Method __zenCreate addr 0x2dadbf8 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dadc54 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass7_1
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11333))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass7_1
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1 const& o) noexcept = default;
                


// Fields

 System::Reflection::MethodInfo __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get_x() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1() ;

/// @brief Method .ctor addr 0x2dad220 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetMethodInfos>b__1 addr 0x2dade14 size 0x6c virtual false final false
 bool _GetMethodInfos_b__1(System::Type a) ;

/// @brief Method __zenCreate addr 0x2dade80 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dadedc size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass8_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11334))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass8_0
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x2dae09c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetConstructorInfo>b__0 addr 0x2dae0a4 size 0x6c virtual false final false
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo _GetConstructorInfo_b__0(System::Reflection::ParameterInfo x) ;

/// @brief Method __zenCreate addr 0x2dae110 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dae16c size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass11_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11335))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer::<>c__DisplayClass11_0
class CORDL_TYPE Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0&& o) noexcept = default;
  constexpr Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0& operator=(Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 System::Reflection::ConstructorInfo __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(System::Reflection::ConstructorInfo value) ;

constexpr System::Reflection::ConstructorInfo __get_c() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0() ;

/// @brief Method .ctor addr 0x2dad328 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TryGetInjectConstructor>b__3 addr 0x2dae32c size 0xcc virtual false final false
 bool _TryGetInjectConstructor_b__3(System::Type a) ;

/// @brief Method __zenCreate addr 0x2dae3f8 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dae454 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: Zenject.Internal::ReflectionTypeAnalyzer
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11336))
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer
class CORDL_TYPE ReflectionTypeAnalyzer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass11_0 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0;

using __c__DisplayClass8_0 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0;

using __c__DisplayClass7_1 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1;

using __c__DisplayClass7_0 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0;

using __c__DisplayClass6_1 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1;

using __c__DisplayClass6_0 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0;

using __c = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c;

using __c__DisplayClass5_1 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1;

using __c__DisplayClass5_0 = Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReflectionTypeAnalyzer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: " const&", def_value: None }]
constexpr ReflectionTypeAnalyzer(ReflectionTypeAnalyzer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: "&&", def_value: None }]
constexpr ReflectionTypeAnalyzer(ReflectionTypeAnalyzer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionTypeAnalyzer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionTypeAnalyzer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionTypeAnalyzer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionTypeAnalyzer& operator=(ReflectionTypeAnalyzer&& o) noexcept = default;
  constexpr ReflectionTypeAnalyzer& operator=(ReflectionTypeAnalyzer const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::HashSet_1<System::Type> __declspec(property(get=__get__injectAttributeTypes, put=__set__injectAttributeTypes))  _injectAttributeTypes;

static void __set__injectAttributeTypes(System::Collections::Generic::HashSet_1<System::Type> value) ;

static System::Collections::Generic::HashSet_1<System::Type> __get__injectAttributeTypes() ;


// Methods

/// @brief Method AddCustomInjectAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AddCustomInjectAttribute() ;

/// @brief Method AddCustomInjectAttribute addr 0x2daa578 size 0xd0 virtual false final false
static void AddCustomInjectAttribute(System::Type type) ;

/// @brief Method GetReflectionInfo addr 0x2da5ba0 size 0x1e4 virtual false final false
static Zenject::Internal::ReflectionTypeInfo GetReflectionInfo(System::Type type) ;

/// @brief Method GetPropertyInfos addr 0x2daae78 size 0x1f4 virtual false final false
static System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> GetPropertyInfos(System::Type type) ;

/// @brief Method GetFieldInfos addr 0x2daac84 size 0x1f4 virtual false final false
static System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> GetFieldInfos(System::Type type) ;

/// @brief Method GetMethodInfos addr 0x2daa84c size 0x438 virtual false final false
static System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> GetMethodInfos(System::Type type) ;

/// @brief Method GetConstructorInfo addr 0x2daa648 size 0x204 virtual false final false
static Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo GetConstructorInfo(System::Type type) ;

/// @brief Method CreateInjectableInfoForParam addr 0x2dab470 size 0x22c virtual false final false
static Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo CreateInjectableInfoForParam(System::Type parentType, System::Reflection::ParameterInfo paramInfo) ;

/// @brief Method GetInjectableInfoForMember addr 0x2dab69c size 0x1248 virtual false final false
static Zenject::InjectableInfo GetInjectableInfoForMember(System::Type parentType, System::Reflection::MemberInfo memInfo) ;

/// @brief Method TryGetInjectConstructor addr 0x2dab06c size 0x404 virtual false final false
static System::Reflection::ConstructorInfo TryGetInjectConstructor(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
NEED_NO_BOX(Zenject::Internal::ReflectionTypeAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer, "Zenject.Internal", "ReflectionTypeAnalyzer");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass11_0, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass11_0");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_0, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_0");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass5_1, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_1");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_0, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_0");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass6_1, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_1");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_0, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_0");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass7_1, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_1");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ReflectionTypeAnalyzer____c__DisplayClass8_0, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass8_0");
