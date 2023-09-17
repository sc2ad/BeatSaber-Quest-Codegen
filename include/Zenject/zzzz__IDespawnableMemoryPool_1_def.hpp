#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
// Type: Zenject::IDespawnableMemoryPool`1
namespace Zenject {
// cpp template
template<typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10970))
// CS Name: Zenject.IDespawnableMemoryPool`1
class CORDL_TYPE IDespawnableMemoryPool_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr operator  ::Zenject::IMemoryPool() const noexcept;

~IDespawnableMemoryPool_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDespawnableMemoryPool_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual true final false
 void Despawn(TValue item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IDespawnableMemoryPool_1, "Zenject", "IDespawnableMemoryPool`1");
