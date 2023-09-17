#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
namespace {
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinderUntyped;
}
// Type: Zenject::FactoryFromBinderUntyped
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10788))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10773))
// CS Name: Zenject.FactoryFromBinderUntyped
class CORDL_TYPE FactoryFromBinderUntyped : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FactoryFromBinderUntyped() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderUntyped", modifiers: " const&", def_value: None }]
constexpr FactoryFromBinderUntyped(FactoryFromBinderUntyped const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderUntyped", modifiers: "&&", def_value: None }]
constexpr FactoryFromBinderUntyped(FactoryFromBinderUntyped&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryFromBinderUntyped(void* ptr) noexcept : ::Zenject::FactoryFromBinderBase(ptr) {
}


  constexpr FactoryFromBinderUntyped& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryFromBinderUntyped& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryFromBinderUntyped& operator=(FactoryFromBinderUntyped&& o) noexcept = default;
  constexpr FactoryFromBinderUntyped& operator=(FactoryFromBinderUntyped const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "contractType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "::Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryFromBinderUntyped(::Zenject::DiContainer bindContainer, ::System::Type contractType, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x2d525d8 size 0x4 virtual false final false
 void _ctor(::Zenject::DiContainer bindContainer, ::System::Type contractType, ::Zenject::BindInfo bindInfo, ::Zenject::FactoryBindInfo factoryBindInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::FactoryFromBinderUntyped);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderUntyped, "Zenject", "FactoryFromBinderUntyped");
