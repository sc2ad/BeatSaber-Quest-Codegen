#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class InjectUtil;
}
namespace Zenject {
class Zenject__InjectUtil____c;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11057))
// CS Name: Zenject.InjectUtil::<>c
class CORDL_TYPE Zenject__InjectUtil____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__InjectUtil____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectUtil____c", modifiers: " const&", def_value: None }]
constexpr Zenject__InjectUtil____c(Zenject__InjectUtil____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InjectUtil____c", modifiers: "&&", def_value: None }]
constexpr Zenject__InjectUtil____c(Zenject__InjectUtil____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InjectUtil____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InjectUtil____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InjectUtil____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InjectUtil____c& operator=(Zenject__InjectUtil____c&& o) noexcept = default;
  constexpr Zenject__InjectUtil____c& operator=(Zenject__InjectUtil____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__InjectUtil____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__InjectUtil____c value) ;

static Zenject::Zenject__InjectUtil____c __get___9() ;

static System::Func_2<::bs_hook::Il2CppWrapperType,Zenject::TypeValuePair> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::Func_2<::bs_hook::Il2CppWrapperType,Zenject::TypeValuePair> value) ;

static System::Func_2<::bs_hook::Il2CppWrapperType,Zenject::TypeValuePair> __get___9__0_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__InjectUtil____c() ;

/// @brief Method .ctor addr 0x2d72648 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateArgList>b__0_0 addr 0x2d72650 size 0x28 virtual false final false
 Zenject::TypeValuePair _CreateArgList_b__0_0(::bs_hook::Il2CppWrapperType x) ;

/// @brief Method __zenCreate addr 0x2d72678 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d726d4 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::InjectUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11058))
// CS Name: Zenject.InjectUtil
class CORDL_TYPE InjectUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__InjectUtil____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InjectUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectUtil", modifiers: " const&", def_value: None }]
constexpr InjectUtil(InjectUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectUtil", modifiers: "&&", def_value: None }]
constexpr InjectUtil(InjectUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InjectUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectUtil& operator=(InjectUtil&& o) noexcept = default;
  constexpr InjectUtil& operator=(InjectUtil const& o) noexcept = default;
                


// Methods

/// @brief Method CreateArgList addr 0x2d72348 size 0x160 virtual false final false
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateArgList(System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method CreateTypePair addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static Zenject::TypeValuePair CreateTypePair(T param) ;

/// @brief Method CreateArgListExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateArgListExplicit(T param) ;

/// @brief Method CreateArgListExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2>
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2) ;

/// @brief Method CreateArgListExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3>
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3) ;

/// @brief Method CreateArgListExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) ;

/// @brief Method CreateArgListExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) ;

/// @brief Method CreateArgListExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) ;

/// @brief Method PopValueWithType addr 0x2d724a8 size 0x13c virtual false final false
static bool PopValueWithType(System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgMap, System::Type injectedFieldType, ByRef<::bs_hook::Il2CppWrapperType> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::InjectUtil);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectUtil, "Zenject", "InjectUtil");
NEED_NO_BOX(Zenject::Zenject__InjectUtil____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__InjectUtil____c, "Zenject", "InjectUtil/<>c");
