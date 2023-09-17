#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace Zenject {
class IValidatable;
}
// Forward declare root types
namespace Zenject {
class IPlaceholderFactory;
}
// Type: Zenject::IPlaceholderFactory
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10967))
// CS Name: Zenject.IPlaceholderFactory
class CORDL_TYPE IPlaceholderFactory : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IValidatable
constexpr operator  ::Zenject::IValidatable() const noexcept;

~IPlaceholderFactory() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlaceholderFactory(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IPlaceholderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPlaceholderFactory, "Zenject", "IPlaceholderFactory");
