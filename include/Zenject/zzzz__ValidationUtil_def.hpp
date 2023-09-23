#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Type;
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
class ValidationUtil;
}
namespace Zenject {
class Zenject__ValidationUtil____c;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11299))
// CS Name: Zenject.ValidationUtil::<>c
class CORDL_TYPE Zenject__ValidationUtil____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__ValidationUtil____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ValidationUtil____c", modifiers: " const&", def_value: None }]
constexpr Zenject__ValidationUtil____c(Zenject__ValidationUtil____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ValidationUtil____c", modifiers: "&&", def_value: None }]
constexpr Zenject__ValidationUtil____c(Zenject__ValidationUtil____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ValidationUtil____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ValidationUtil____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ValidationUtil____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ValidationUtil____c& operator=(Zenject__ValidationUtil____c&& o) noexcept = default;
  constexpr Zenject__ValidationUtil____c& operator=(Zenject__ValidationUtil____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__ValidationUtil____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__ValidationUtil____c value) ;

static Zenject::Zenject__ValidationUtil____c __get___9() ;

static System::Func_2<System::Type,Zenject::TypeValuePair> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::Func_2<System::Type,Zenject::TypeValuePair> value) ;

static System::Func_2<System::Type,Zenject::TypeValuePair> __get___9__0_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__ValidationUtil____c() ;

/// @brief Method .ctor addr 0x2da6484 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateDefaultArgs>b__0_0 addr 0x2da648c size 0x80 virtual false final false
 Zenject::TypeValuePair _CreateDefaultArgs_b__0_0(System::Type x) ;

/// @brief Method __zenCreate addr 0x2da650c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2da6568 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ValidationUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11300))
// CS Name: Zenject.ValidationUtil
class CORDL_TYPE ValidationUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__ValidationUtil____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ValidationUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationUtil", modifiers: " const&", def_value: None }]
constexpr ValidationUtil(ValidationUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationUtil", modifiers: "&&", def_value: None }]
constexpr ValidationUtil(ValidationUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidationUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValidationUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidationUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidationUtil& operator=(ValidationUtil&& o) noexcept = default;
  constexpr ValidationUtil& operator=(ValidationUtil const& o) noexcept = default;
                


// Methods

/// @brief Method CreateDefaultArgs addr 0x2da630c size 0x114 virtual false final false
static System::Collections::Generic::List_1<Zenject::TypeValuePair> CreateDefaultArgs(::ArrayW<System::Type> argTypes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ValidationUtil);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationUtil, "Zenject", "ValidationUtil");
NEED_NO_BOX(Zenject::Zenject__ValidationUtil____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ValidationUtil____c, "Zenject", "ValidationUtil/<>c");
