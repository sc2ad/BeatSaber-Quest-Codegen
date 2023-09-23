#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
class BindStatement;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class BindInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ConcreteBinderNonGeneric;
}
// Type: Zenject::ConcreteBinderNonGeneric
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10858))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10614))
// CS Name: Zenject.ConcreteBinderNonGeneric
class CORDL_TYPE ConcreteBinderNonGeneric : public Zenject::FromBinderNonGeneric {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcreteBinderNonGeneric() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderNonGeneric", modifiers: " const&", def_value: None }]
constexpr ConcreteBinderNonGeneric(ConcreteBinderNonGeneric const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderNonGeneric", modifiers: "&&", def_value: None }]
constexpr ConcreteBinderNonGeneric(ConcreteBinderNonGeneric&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcreteBinderNonGeneric(void* ptr) noexcept : Zenject::FromBinderNonGeneric(ptr) {
}


  constexpr ConcreteBinderNonGeneric& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcreteBinderNonGeneric& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcreteBinderNonGeneric& operator=(ConcreteBinderNonGeneric&& o) noexcept = default;
  constexpr ConcreteBinderNonGeneric& operator=(ConcreteBinderNonGeneric const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "Zenject::BindStatement", modifiers: "", def_value: None }]
explicit ConcreteBinderNonGeneric(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x2d4d774 size 0x34 virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement) ;

/// @brief Method ToSelf addr 0x2d4d7d8 size 0x124 virtual false final false
 Zenject::FromBinderNonGeneric ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::FromBinderNonGeneric To() ;

/// @brief Method To addr 0x2d4d918 size 0x4 virtual false final false
 Zenject::FromBinderNonGeneric To(::ArrayW<System::Type> concreteTypes) ;

/// @brief Method To addr 0x2d4d91c size 0x10c virtual false final false
 Zenject::FromBinderNonGeneric To(System::Collections::Generic::IEnumerable_1<System::Type> concreteTypes) ;

/// @brief Method To addr 0x2d4da28 size 0x144 virtual false final false
 Zenject::FromBinderNonGeneric To(System::Action_1<Zenject::ConventionSelectTypesBinder> generator) ;

/// @brief Method <ToSelf>b__1_0 addr 0x2d4de04 size 0xa4 virtual false final false
 Zenject::IProvider _ToSelf_b__1_0(Zenject::DiContainer container, System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ConcreteBinderNonGeneric);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConcreteBinderNonGeneric, "Zenject", "ConcreteBinderNonGeneric");
