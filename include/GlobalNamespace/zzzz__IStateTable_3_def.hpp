#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class IStateTable_3;
}
// Type: ::IStateTable`3
namespace GlobalNamespace {
// cpp template
template<typename TStateTable,typename TType,typename TState>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12920))
// CS Name: IStateTable`3
class CORDL_TYPE IStateTable_3 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStateTable_3() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStateTable_3(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual true final false
 TState GetState(TType type) ;

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetState(TType type, TState state) ;

/// @brief Method GetDelta addr 0x0 size 0xffffffffffffffff virtual true final false
 TStateTable GetDelta(ByRef<TStateTable> stateTable) ;

/// @brief Method ApplyDelta addr 0x0 size 0xffffffffffffffff virtual true final false
 TStateTable ApplyDelta(ByRef<TStateTable> delta) ;

/// @brief Method GetSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetSize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IStateTable_3, "", "IStateTable`3");
