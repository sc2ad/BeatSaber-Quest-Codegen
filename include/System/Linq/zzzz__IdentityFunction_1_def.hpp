#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Linq {
template<typename TElement>
class System__Linq__IdentityFunction_1____c;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class IdentityFunction_1;
}
namespace System::Linq {
template<typename TElement>
class System__Linq__IdentityFunction_1____c;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class IdentityFunction_1<TElement>;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class System__Linq__IdentityFunction_1____c<TElement>;
}
// Type: ::<>c
// Type: System.Linq::IdentityFunction`1
// Type: ::<>c
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14560))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14560), inst: 2 })
// CS Name: System.Linq.IdentityFunction`1::<>c
class CORDL_TYPE System__Linq__IdentityFunction_1____c<TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Linq__IdentityFunction_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Linq__IdentityFunction_1____c", modifiers: " const&", def_value: None }]
constexpr System__Linq__IdentityFunction_1____c(System__Linq__IdentityFunction_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Linq__IdentityFunction_1____c", modifiers: "&&", def_value: None }]
constexpr System__Linq__IdentityFunction_1____c(System__Linq__IdentityFunction_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Linq__IdentityFunction_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Linq__IdentityFunction_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Linq__IdentityFunction_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Linq__IdentityFunction_1____c& operator=(System__Linq__IdentityFunction_1____c&& o) noexcept = default;
  constexpr System__Linq__IdentityFunction_1____c& operator=(System__Linq__IdentityFunction_1____c const& o) noexcept = default;
                


// Fields

static System::Linq::System__Linq__IdentityFunction_1____c<TElement> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Linq::System__Linq__IdentityFunction_1____c<TElement> value) ;

static System::Linq::System__Linq__IdentityFunction_1____c<TElement> __get___9() ;

static System::Func_2<TElement,TElement> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<TElement,TElement> value) ;

static System::Func_2<TElement,TElement> __get___9__1_0() ;


// Methods

static System::Linq::System__Linq__IdentityFunction_1____c<TElement> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <get_Instance>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 TElement _get_Instance_b__1_0(TElement x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::IdentityFunction`1
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14561))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14561), inst: 2 })
// CS Name: System.Linq.IdentityFunction`1
class CORDL_TYPE IdentityFunction_1<TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::Linq::System__Linq__IdentityFunction_1____c<TElement>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IdentityFunction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: " const&", def_value: None }]
constexpr IdentityFunction_1(IdentityFunction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: "&&", def_value: None }]
constexpr IdentityFunction_1(IdentityFunction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdentityFunction_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IdentityFunction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdentityFunction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdentityFunction_1& operator=(IdentityFunction_1&& o) noexcept = default;
  constexpr IdentityFunction_1& operator=(IdentityFunction_1 const& o) noexcept = default;
                


// Properties

static System::Func_2<TElement,TElement> __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Func_2<TElement,TElement> get_Instance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::IdentityFunction_1, "System.Linq", "IdentityFunction`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::System__Linq__IdentityFunction_1____c, "System.Linq", "IdentityFunction`1/<>c");
