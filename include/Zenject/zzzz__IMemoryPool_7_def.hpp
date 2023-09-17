#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class IMemoryPool_7;
}
// Type: Zenject::IMemoryPool`7
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10977))
// CS Name: Zenject.IMemoryPool`7
class CORDL_TYPE IMemoryPool_7 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr operator  ::Zenject::IMemoryPool() const noexcept;

~IMemoryPool_7() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMemoryPool_7(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IMemoryPool_7, "Zenject", "IMemoryPool`7");
