#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class ConcreteBinderNonGeneric;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class ConcreteIdBinderNonGeneric;
}
// Type: Zenject::ConcreteIdBinderNonGeneric
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10614))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10616))
// CS Name: Zenject.ConcreteIdBinderNonGeneric
class CORDL_TYPE ConcreteIdBinderNonGeneric : public ::Zenject::ConcreteBinderNonGeneric {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcreteIdBinderNonGeneric() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderNonGeneric", modifiers: " const&", def_value: None }]
constexpr ConcreteIdBinderNonGeneric(ConcreteIdBinderNonGeneric const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdBinderNonGeneric", modifiers: "&&", def_value: None }]
constexpr ConcreteIdBinderNonGeneric(ConcreteIdBinderNonGeneric&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcreteIdBinderNonGeneric(void* ptr) noexcept : ::Zenject::ConcreteBinderNonGeneric(ptr) {
}


  constexpr ConcreteIdBinderNonGeneric& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcreteIdBinderNonGeneric& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcreteIdBinderNonGeneric& operator=(ConcreteIdBinderNonGeneric&& o) noexcept = default;
  constexpr ConcreteIdBinderNonGeneric& operator=(ConcreteIdBinderNonGeneric const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "::Zenject::BindStatement", modifiers: "", def_value: None }]
explicit ConcreteIdBinderNonGeneric(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::BindStatement bindStatement) ;

/// @brief Method .ctor addr 0x2d4dea8 size 0x34 virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::Zenject::BindInfo bindInfo, ::Zenject::BindStatement bindStatement) ;

/// @brief Method WithId addr 0x2d4dedc size 0x1c virtual false final false
 ::Zenject::ConcreteBinderNonGeneric WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ConcreteIdBinderNonGeneric);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConcreteIdBinderNonGeneric, "Zenject", "ConcreteIdBinderNonGeneric");
