#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class IFactory_7;
}
// Type: Zenject::IFactory`7
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10931))
// CS Name: Zenject.IFactory`7
class CORDL_TYPE IFactory_7 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

~IFactory_7() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactory_7(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_7, "Zenject", "IFactory`7");
