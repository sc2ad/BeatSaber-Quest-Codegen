#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class IFactory_4;
}
// Type: Zenject::IFactory`4
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10928))
// CS Name: Zenject.IFactory`4
class CORDL_TYPE IFactory_4 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

~IFactory_4() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactory_4(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Create(TParam1 param1, TParam2 param2, TParam3 param3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_4, "Zenject", "IFactory`4");
