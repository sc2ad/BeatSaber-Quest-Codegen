#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class Zenject__InjectTypeInfo__InjectMemberInfo;
}
namespace Zenject {
class Zenject__InjectTypeInfo__InjectConstructorInfo;
}
namespace Zenject {
class Zenject__InjectTypeInfo__InjectMethodInfo;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject {
class ZenFactoryMethod;
}
namespace Zenject {
class ZenMemberSetterMethod;
}
namespace Zenject {
class ZenInjectMethod;
}
// Forward declare root types
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class Zenject__InjectTypeInfo__InjectConstructorInfo;
}
namespace Zenject {
class Zenject__InjectTypeInfo__InjectMemberInfo;
}
namespace Zenject {
class Zenject__InjectTypeInfo__InjectMethodInfo;
}
// Type: ::InjectMemberInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15658))
// CS Name: Zenject.InjectTypeInfo::InjectMemberInfo
class CORDL_TYPE Zenject__InjectTypeInfo__InjectMemberInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__InjectTypeInfo__InjectMemberInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectTypeInfo__InjectMemberInfo", modifiers: " const&", def_value: None }]
constexpr Zenject__InjectTypeInfo__InjectMemberInfo(Zenject__InjectTypeInfo__InjectMemberInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectTypeInfo__InjectMemberInfo", modifiers: "&&", def_value: None }]
constexpr Zenject__InjectTypeInfo__InjectMemberInfo(Zenject__InjectTypeInfo__InjectMemberInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InjectTypeInfo__InjectMemberInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InjectTypeInfo__InjectMemberInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InjectTypeInfo__InjectMemberInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InjectTypeInfo__InjectMemberInfo& operator=(Zenject__InjectTypeInfo__InjectMemberInfo&& o) noexcept = default;
  constexpr Zenject__InjectTypeInfo__InjectMemberInfo& operator=(Zenject__InjectTypeInfo__InjectMemberInfo const& o) noexcept = default;
                


// Fields

 Zenject::ZenMemberSetterMethod __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(Zenject::ZenMemberSetterMethod value) ;

constexpr Zenject::ZenMemberSetterMethod __get_Setter() const;

 Zenject::InjectableInfo __declspec(property(get=__get_Info, put=__set_Info))  Info;

constexpr void __set_Info(Zenject::InjectableInfo value) ;

constexpr Zenject::InjectableInfo __get_Info() const;


// Methods

static Zenject::Zenject__InjectTypeInfo__InjectMemberInfo New_ctor(Zenject::ZenMemberSetterMethod setter, Zenject::InjectableInfo info) ;

/// @brief Method .ctor addr 0x2d409c8 size 0x2c virtual false final false
 void _ctor(Zenject::ZenMemberSetterMethod setter, Zenject::InjectableInfo info) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::InjectConstructorInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15659))
// CS Name: Zenject.InjectTypeInfo::InjectConstructorInfo
class CORDL_TYPE Zenject__InjectTypeInfo__InjectConstructorInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__InjectTypeInfo__InjectConstructorInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectTypeInfo__InjectConstructorInfo", modifiers: " const&", def_value: None }]
constexpr Zenject__InjectTypeInfo__InjectConstructorInfo(Zenject__InjectTypeInfo__InjectConstructorInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectTypeInfo__InjectConstructorInfo", modifiers: "&&", def_value: None }]
constexpr Zenject__InjectTypeInfo__InjectConstructorInfo(Zenject__InjectTypeInfo__InjectConstructorInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InjectTypeInfo__InjectConstructorInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InjectTypeInfo__InjectConstructorInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InjectTypeInfo__InjectConstructorInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InjectTypeInfo__InjectConstructorInfo& operator=(Zenject__InjectTypeInfo__InjectConstructorInfo&& o) noexcept = default;
  constexpr Zenject__InjectTypeInfo__InjectConstructorInfo& operator=(Zenject__InjectTypeInfo__InjectConstructorInfo const& o) noexcept = default;
                


// Fields

 Zenject::ZenFactoryMethod __declspec(property(get=__get_Factory, put=__set_Factory))  Factory;

constexpr void __set_Factory(Zenject::ZenFactoryMethod value) ;

constexpr Zenject::ZenFactoryMethod __get_Factory() const;

 ::ArrayW<Zenject::InjectableInfo> __declspec(property(get=__get_Parameters, put=__set_Parameters))  Parameters;

constexpr void __set_Parameters(::ArrayW<Zenject::InjectableInfo> value) ;

constexpr ::ArrayW<Zenject::InjectableInfo> __get_Parameters() const;


// Methods

static Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo New_ctor(Zenject::ZenFactoryMethod factory, ::ArrayW<Zenject::InjectableInfo> parameters) ;

/// @brief Method .ctor addr 0x2d409f4 size 0x2c virtual false final false
 void _ctor(Zenject::ZenFactoryMethod factory, ::ArrayW<Zenject::InjectableInfo> parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::InjectMethodInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15660))
// CS Name: Zenject.InjectTypeInfo::InjectMethodInfo
class CORDL_TYPE Zenject__InjectTypeInfo__InjectMethodInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Zenject__InjectTypeInfo__InjectMethodInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectTypeInfo__InjectMethodInfo", modifiers: " const&", def_value: None }]
constexpr Zenject__InjectTypeInfo__InjectMethodInfo(Zenject__InjectTypeInfo__InjectMethodInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectTypeInfo__InjectMethodInfo", modifiers: "&&", def_value: None }]
constexpr Zenject__InjectTypeInfo__InjectMethodInfo(Zenject__InjectTypeInfo__InjectMethodInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InjectTypeInfo__InjectMethodInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InjectTypeInfo__InjectMethodInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InjectTypeInfo__InjectMethodInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InjectTypeInfo__InjectMethodInfo& operator=(Zenject__InjectTypeInfo__InjectMethodInfo&& o) noexcept = default;
  constexpr Zenject__InjectTypeInfo__InjectMethodInfo& operator=(Zenject__InjectTypeInfo__InjectMethodInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 Zenject::ZenInjectMethod __declspec(property(get=__get_Action, put=__set_Action))  Action;

constexpr void __set_Action(Zenject::ZenInjectMethod value) ;

constexpr Zenject::ZenInjectMethod __get_Action() const;

 ::ArrayW<Zenject::InjectableInfo> __declspec(property(get=__get_Parameters, put=__set_Parameters))  Parameters;

constexpr void __set_Parameters(::ArrayW<Zenject::InjectableInfo> value) ;

constexpr ::ArrayW<Zenject::InjectableInfo> __get_Parameters() const;


// Methods

static Zenject::Zenject__InjectTypeInfo__InjectMethodInfo New_ctor(Zenject::ZenInjectMethod action, ::ArrayW<Zenject::InjectableInfo> parameters, ::StringW name) ;

/// @brief Method .ctor addr 0x2d40a20 size 0x3c virtual false final false
 void _ctor(Zenject::ZenInjectMethod action, ::ArrayW<Zenject::InjectableInfo> parameters, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::InjectTypeInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15661))
// CS Name: Zenject.InjectTypeInfo
class CORDL_TYPE InjectTypeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InjectMethodInfo = Zenject::Zenject__InjectTypeInfo__InjectMethodInfo;

using InjectConstructorInfo = Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo;

using InjectMemberInfo = Zenject::Zenject__InjectTypeInfo__InjectMemberInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~InjectTypeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo", modifiers: " const&", def_value: None }]
constexpr InjectTypeInfo(InjectTypeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo", modifiers: "&&", def_value: None }]
constexpr InjectTypeInfo(InjectTypeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectTypeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InjectTypeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectTypeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectTypeInfo& operator=(InjectTypeInfo&& o) noexcept = default;
  constexpr InjectTypeInfo& operator=(InjectTypeInfo const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(System::Type value) ;

constexpr System::Type __get_Type() const;

 ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> __declspec(property(get=__get_InjectMethods, put=__set_InjectMethods))  InjectMethods;

constexpr void __set_InjectMethods(::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> value) ;

constexpr ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> __get_InjectMethods() const;

 ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> __declspec(property(get=__get_InjectMembers, put=__set_InjectMembers))  InjectMembers;

constexpr void __set_InjectMembers(::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> value) ;

constexpr ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> __get_InjectMembers() const;

 Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo __declspec(property(get=__get_InjectConstructor, put=__set_InjectConstructor))  InjectConstructor;

constexpr void __set_InjectConstructor(Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo value) ;

constexpr Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo __get_InjectConstructor() const;

 Zenject::InjectTypeInfo __declspec(property(get=__get__BaseTypeInfo_k__BackingField, put=__set__BaseTypeInfo_k__BackingField))  _BaseTypeInfo_k__BackingField;

constexpr void __set__BaseTypeInfo_k__BackingField(Zenject::InjectTypeInfo value) ;

constexpr Zenject::InjectTypeInfo __get__BaseTypeInfo_k__BackingField() const;

static System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo> __declspec(property(get=__get_CS$__9__CachedAnonymousMethodDelegate2, put=__set_CS$__9__CachedAnonymousMethodDelegate2))  CS$__9__CachedAnonymousMethodDelegate2;

static void __set_CS$__9__CachedAnonymousMethodDelegate2(System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo> value) ;

static System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo> __get_CS$__9__CachedAnonymousMethodDelegate2() ;

static System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>> __declspec(property(get=__get_CS$__9__CachedAnonymousMethodDelegate3, put=__set_CS$__9__CachedAnonymousMethodDelegate3))  CS$__9__CachedAnonymousMethodDelegate3;

static void __set_CS$__9__CachedAnonymousMethodDelegate3(System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>> value) ;

static System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>> __get_CS$__9__CachedAnonymousMethodDelegate3() ;


// Properties

 Zenject::InjectTypeInfo __declspec(property(get=get_BaseTypeInfo, put=set_BaseTypeInfo))  BaseTypeInfo;

 System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo> __declspec(property(get=get_AllInjectables))  AllInjectables;


// Methods

static Zenject::InjectTypeInfo New_ctor(System::Type type, Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo injectConstructor, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> injectMethods, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> injectMembers) ;

/// @brief Method .ctor addr 0x2d4079c size 0x40 virtual false final false
 void _ctor(System::Type type, Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo injectConstructor, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> injectMethods, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> injectMembers) ;

/// @brief Method get_BaseTypeInfo addr 0x2d407dc size 0x8 virtual false final false
 Zenject::InjectTypeInfo get_BaseTypeInfo() ;

/// @brief Method set_BaseTypeInfo addr 0x2d407e4 size 0x8 virtual false final false
 void set_BaseTypeInfo(Zenject::InjectTypeInfo value) ;

/// @brief Method get_AllInjectables addr 0x2d407ec size 0x1ac virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo> get_AllInjectables() ;

/// @brief Method <get_AllInjectables>b__0 addr 0x2d40998 size 0x18 virtual false final false
static Zenject::InjectableInfo _get_AllInjectables_b__0(Zenject::Zenject__InjectTypeInfo__InjectMemberInfo x) ;

/// @brief Method <get_AllInjectables>b__1 addr 0x2d409b0 size 0x18 virtual false final false
static System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo> _get_AllInjectables_b__1(Zenject::Zenject__InjectTypeInfo__InjectMethodInfo x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::InjectTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo, "Zenject", "InjectTypeInfo");
NEED_NO_BOX(Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo, "Zenject", "InjectTypeInfo/InjectConstructorInfo");
NEED_NO_BOX(Zenject::Zenject__InjectTypeInfo__InjectMemberInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__InjectTypeInfo__InjectMemberInfo, "Zenject", "InjectTypeInfo/InjectMemberInfo");
NEED_NO_BOX(Zenject::Zenject__InjectTypeInfo__InjectMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__InjectTypeInfo__InjectMethodInfo, "Zenject", "InjectTypeInfo/InjectMethodInfo");
