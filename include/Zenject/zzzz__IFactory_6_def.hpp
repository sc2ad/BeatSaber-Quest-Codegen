#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class IFactory_6;
}
// Type: Zenject::IFactory`6
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10930))
// CS Name: Zenject.IFactory`6
class CORDL_TYPE IFactory_6 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

~IFactory_6() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactory_6(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_6, "Zenject", "IFactory`6");
