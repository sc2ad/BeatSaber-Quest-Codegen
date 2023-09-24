#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class ConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::ConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10617))
// CS Name: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE ConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr ConcreteIdArgConditionCopyNonLazyBinder(ConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr ConcreteIdArgConditionCopyNonLazyBinder(ConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : Zenject::ArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr ConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcreteIdArgConditionCopyNonLazyBinder& operator=(ConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr ConcreteIdArgConditionCopyNonLazyBinder& operator=(ConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Methods

static Zenject::ConcreteIdArgConditionCopyNonLazyBinder New_ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d4def8 size 0x8 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method WithConcreteId addr 0x2d4df00 size 0x1c virtual false final false
 Zenject::ArgConditionCopyNonLazyBinder WithConcreteId(::bs_hook::Il2CppWrapperType id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "ConcreteIdArgConditionCopyNonLazyBinder");
