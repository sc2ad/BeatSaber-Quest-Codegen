#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class IReferenceCountingCache_2;
}
// Type: ::IReferenceCountingCache`2
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5986))
// CS Name: IReferenceCountingCache`2
class CORDL_TYPE IReferenceCountingCache_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IReferenceCountingCache_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReferenceCountingCache_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Insert(TKey key, TValue item) ;

/// @brief Method AddReference addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t AddReference(TKey key) ;

/// @brief Method RemoveReference addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t RemoveReference(TKey key) ;

/// @brief Method GetReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetReferenceCount(TKey key) ;

/// @brief Method TryGet addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGet(TKey key, ByRef<TValue> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IReferenceCountingCache_2, "", "IReferenceCountingCache`2");
