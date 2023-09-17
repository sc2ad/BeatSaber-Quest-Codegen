#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class IFactory_3;
}
// Type: Zenject::IFactory`3
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10927))
// CS Name: Zenject.IFactory`3
class CORDL_TYPE IFactory_3 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IFactory
constexpr operator  ::Zenject::IFactory() const noexcept;

~IFactory_3() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactory_3(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Create(TParam1 param1, TParam2 param2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactory_3, "Zenject", "IFactory`3");
