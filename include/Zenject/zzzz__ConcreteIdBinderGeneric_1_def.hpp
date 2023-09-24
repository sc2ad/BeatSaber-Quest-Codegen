#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace System {
struct Int32Enum;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindStatement;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class ConcreteIdBinderGeneric_1;
}
namespace Zenject {
template<>
class ConcreteIdBinderGeneric_1<System::Int32Enum>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class ConcreteIdBinderGeneric_1<TContract>;
}
namespace Zenject {
template<>
class ConcreteIdBinderGeneric_1<float_t>;
}
// Type: Zenject::ConcreteIdBinderGeneric`1
// Type: Zenject::ConcreteIdBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10613), inst: 1032 }), TypeDefinitionIndex(TypeDefinitionIndex(10615)), TypeDefinitionIndex(TypeDefinitionIndex(10613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10615), inst: 4825 })
// CS Name: Zenject.ConcreteIdBinderGeneric`1
class CORDL_TYPE ConcreteIdBinderGeneric_1<System::Int32Enum> : public Zenject::ConcreteBinderGeneric_1<System::Int32Enum> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcreteIdBinderGeneric_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: " const&", def_value: None }]
constexpr ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
constexpr ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcreteIdBinderGeneric_1(void* ptr) noexcept : Zenject::ConcreteBinderGeneric_1<System::Int32Enum>(ptr) {
}


  constexpr ConcreteIdBinderGeneric_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcreteIdBinderGeneric_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcreteIdBinderGeneric_1& operator=(ConcreteIdBinderGeneric_1&& o) noexcept = default;
  constexpr ConcreteIdBinderGeneric_1& operator=(ConcreteIdBinderGeneric_1 const& o) noexcept = default;
                


// Methods

static Zenject::ConcreteIdBinderGeneric_1<System::Int32Enum> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ConcreteBinderGeneric_1<System::Int32Enum> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteIdBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10613), inst: 1032 }), TypeDefinitionIndex(TypeDefinitionIndex(10613)), TypeDefinitionIndex(TypeDefinitionIndex(10615))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10615), inst: 374 })
// CS Name: Zenject.ConcreteIdBinderGeneric`1
class CORDL_TYPE ConcreteIdBinderGeneric_1<float_t> : public Zenject::ConcreteBinderGeneric_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcreteIdBinderGeneric_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: " const&", def_value: None }]
constexpr ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
constexpr ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcreteIdBinderGeneric_1(void* ptr) noexcept : Zenject::ConcreteBinderGeneric_1<float_t>(ptr) {
}


  constexpr ConcreteIdBinderGeneric_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcreteIdBinderGeneric_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcreteIdBinderGeneric_1& operator=(ConcreteIdBinderGeneric_1&& o) noexcept = default;
  constexpr ConcreteIdBinderGeneric_1& operator=(ConcreteIdBinderGeneric_1 const& o) noexcept = default;
                


// Methods

static Zenject::ConcreteIdBinderGeneric_1<float_t> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ConcreteBinderGeneric_1<float_t> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteIdBinderGeneric`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10613), inst: 1032 }), TypeDefinitionIndex(TypeDefinitionIndex(10615)), TypeDefinitionIndex(TypeDefinitionIndex(10613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10615), inst: 2 })
// CS Name: Zenject.ConcreteIdBinderGeneric`1
class CORDL_TYPE ConcreteIdBinderGeneric_1<TContract> : public Zenject::ConcreteBinderGeneric_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcreteIdBinderGeneric_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: " const&", def_value: None }]
constexpr ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderGeneric_1", modifiers: "&&", def_value: None }]
constexpr ConcreteIdBinderGeneric_1(ConcreteIdBinderGeneric_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcreteIdBinderGeneric_1(void* ptr) noexcept : Zenject::ConcreteBinderGeneric_1<TContract>(ptr) {
}


  constexpr ConcreteIdBinderGeneric_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcreteIdBinderGeneric_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcreteIdBinderGeneric_1& operator=(ConcreteIdBinderGeneric_1&& o) noexcept = default;
  constexpr ConcreteIdBinderGeneric_1& operator=(ConcreteIdBinderGeneric_1 const& o) noexcept = default;
                


// Methods

static Zenject::ConcreteIdBinderGeneric_1<TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ConcreteBinderGeneric_1<TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ConcreteIdBinderGeneric_1, "Zenject", "ConcreteIdBinderGeneric`1");
