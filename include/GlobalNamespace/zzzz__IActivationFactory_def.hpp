#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IActivationFactory;
}
// Type: ::IActivationFactory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16105))
// CS Name: IActivationFactory
class CORDL_TYPE IActivationFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
~IActivationFactory() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IActivationFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


// Methods

/// @brief Method ActivateInstance addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ActivateInstance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IActivationFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IActivationFactory, "", "IActivationFactory");
