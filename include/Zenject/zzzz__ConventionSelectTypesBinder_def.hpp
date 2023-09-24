#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class ConventionFilterTypesBinder;
}
namespace Zenject {
class Zenject__ConventionSelectTypesBinder____c;
}
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
class Zenject__ConventionSelectTypesBinder____c;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10641))
// CS Name: Zenject.ConventionSelectTypesBinder::<>c
class CORDL_TYPE Zenject__ConventionSelectTypesBinder____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__ConventionSelectTypesBinder____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ConventionSelectTypesBinder____c", modifiers: " const&", def_value: None }]
constexpr Zenject__ConventionSelectTypesBinder____c(Zenject__ConventionSelectTypesBinder____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ConventionSelectTypesBinder____c", modifiers: "&&", def_value: None }]
constexpr Zenject__ConventionSelectTypesBinder____c(Zenject__ConventionSelectTypesBinder____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ConventionSelectTypesBinder____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ConventionSelectTypesBinder____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ConventionSelectTypesBinder____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ConventionSelectTypesBinder____c& operator=(Zenject__ConventionSelectTypesBinder____c&& o) noexcept = default;
  constexpr Zenject__ConventionSelectTypesBinder____c& operator=(Zenject__ConventionSelectTypesBinder____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__ConventionSelectTypesBinder____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__ConventionSelectTypesBinder____c value) ;

static Zenject::Zenject__ConventionSelectTypesBinder____c __get___9() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__4_0() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__5_0() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__6_0() ;

static System::Func_2<System::Type,bool> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<System::Type,bool> value) ;

static System::Func_2<System::Type,bool> __get___9__7_0() ;


// Methods

static Zenject::Zenject__ConventionSelectTypesBinder____c New_ctor() ;

/// @brief Method .ctor addr 0x2d52024 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AllClasses>b__4_0 addr 0x2d5202c size 0x18 virtual false final false
 bool _AllClasses_b__4_0(System::Type t) ;

/// @brief Method <AllNonAbstractClasses>b__5_0 addr 0x2d52044 size 0x44 virtual false final false
 bool _AllNonAbstractClasses_b__5_0(System::Type t) ;

/// @brief Method <AllAbstractClasses>b__6_0 addr 0x2d52088 size 0x3c virtual false final false
 bool _AllAbstractClasses_b__6_0(System::Type t) ;

/// @brief Method <AllInterfaces>b__7_0 addr 0x2d520c4 size 0x18 virtual false final false
 bool _AllInterfaces_b__7_0(System::Type t) ;

/// @brief Method __zenCreate addr 0x2d520dc size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d52138 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConventionSelectTypesBinder
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10642))
// CS Name: Zenject.ConventionSelectTypesBinder
class CORDL_TYPE ConventionSelectTypesBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__ConventionSelectTypesBinder____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ConventionSelectTypesBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder", modifiers: " const&", def_value: None }]
constexpr ConventionSelectTypesBinder(ConventionSelectTypesBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder", modifiers: "&&", def_value: None }]
constexpr ConventionSelectTypesBinder(ConventionSelectTypesBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConventionSelectTypesBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConventionSelectTypesBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConventionSelectTypesBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConventionSelectTypesBinder& operator=(ConventionSelectTypesBinder&& o) noexcept = default;
  constexpr ConventionSelectTypesBinder& operator=(ConventionSelectTypesBinder const& o) noexcept = default;
                


// Fields

 Zenject::ConventionBindInfo __declspec(property(get=__get__bindInfo, put=__set__bindInfo))  _bindInfo;

constexpr void __set__bindInfo(Zenject::ConventionBindInfo value) ;

constexpr Zenject::ConventionBindInfo __get__bindInfo() const;


// Methods

static Zenject::ConventionSelectTypesBinder New_ctor(Zenject::ConventionBindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d4dc2c size 0x28 virtual false final false
 void _ctor(Zenject::ConventionBindInfo bindInfo) ;

/// @brief Method CreateNextBinder addr 0x2d51b94 size 0x68 virtual false final false
 Zenject::ConventionFilterTypesBinder CreateNextBinder() ;

/// @brief Method AllTypes addr 0x2d51bfc size 0x4 virtual false final false
 Zenject::ConventionFilterTypesBinder AllTypes() ;

/// @brief Method AllClasses addr 0x2d51c00 size 0xf0 virtual false final false
 Zenject::ConventionFilterTypesBinder AllClasses() ;

/// @brief Method AllNonAbstractClasses addr 0x2d51cf0 size 0xf0 virtual false final false
 Zenject::ConventionFilterTypesBinder AllNonAbstractClasses() ;

/// @brief Method AllAbstractClasses addr 0x2d51de0 size 0xf0 virtual false final false
 Zenject::ConventionFilterTypesBinder AllAbstractClasses() ;

/// @brief Method AllInterfaces addr 0x2d51ed0 size 0xf0 virtual false final false
 Zenject::ConventionFilterTypesBinder AllInterfaces() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ConventionSelectTypesBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionSelectTypesBinder, "Zenject", "ConventionSelectTypesBinder");
NEED_NO_BOX(Zenject::Zenject__ConventionSelectTypesBinder____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ConventionSelectTypesBinder____c, "Zenject", "ConventionSelectTypesBinder/<>c");
