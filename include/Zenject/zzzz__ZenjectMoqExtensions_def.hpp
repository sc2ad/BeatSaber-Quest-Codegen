#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
template<typename TContract>
class FromBinderGeneric_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template<typename TContract>
class FactoryFromBinder_1;
}
// Forward declare root types
namespace Zenject {
class ZenjectMoqExtensions;
}
// Type: Zenject::ZenjectMoqExtensions
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10859))
// CS Name: Zenject.ZenjectMoqExtensions
class CORDL_TYPE ZenjectMoqExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ZenjectMoqExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectMoqExtensions", modifiers: " const&", def_value: None }]
constexpr ZenjectMoqExtensions(ZenjectMoqExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectMoqExtensions", modifiers: "&&", def_value: None }]
constexpr ZenjectMoqExtensions(ZenjectMoqExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectMoqExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZenjectMoqExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectMoqExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectMoqExtensions& operator=(ZenjectMoqExtensions&& o) noexcept = default;
  constexpr ZenjectMoqExtensions& operator=(ZenjectMoqExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method FromMock addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
static Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder FromMock(Zenject::FromBinderGeneric_1<TContract> binder) ;

/// @brief Method FromMock addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TContract>
static Zenject::ConditionCopyNonLazyBinder FromMock(Zenject::FactoryFromBinder_1<TContract> binder) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenjectMoqExtensions);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectMoqExtensions, "Zenject", "ZenjectMoqExtensions");
