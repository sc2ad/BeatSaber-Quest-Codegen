#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2>
class IPoolable_2;
}
// Type: Zenject::IPoolable`2
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15664))
// CS Name: Zenject.IPoolable`2
class CORDL_TYPE IPoolable_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPoolable_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPoolable_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSpawned(TParam1 p1, TParam2 p2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_2, "Zenject", "IPoolable`2");
