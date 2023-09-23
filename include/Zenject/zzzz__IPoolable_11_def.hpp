#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TParam11>
class IPoolable_11;
}
// Type: Zenject::IPoolable`11
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10,typename TParam11>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15673))
// CS Name: Zenject.IPoolable`11
class CORDL_TYPE IPoolable_11 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPoolable_11() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPoolable_11(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TParam9 p9, TParam10 p10, TParam11 p11) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_11, "Zenject", "IPoolable`11");
