#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
// Type: Zenject::IFactory`1
namespace Zenject {
// cpp template
template<typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10925))
// CS Name: Zenject.IFactory`1
class CORDL_TYPE IFactory_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

~IFactory_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactory_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_1, "Zenject", "IFactory`1");
