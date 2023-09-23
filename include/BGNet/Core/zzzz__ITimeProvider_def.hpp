#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
// Forward declare root types
namespace BGNet::Core {
class ITimeProvider;
}
// Type: BGNet.Core::ITimeProvider
namespace BGNet::Core {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12943))
// CS Name: BGNet.Core.ITimeProvider
class CORDL_TYPE ITimeProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITimeProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITimeProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetTimeMs addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t GetTimeMs() ;

/// @brief Method GetTicks addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t GetTicks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core
NEED_NO_BOX(BGNet::Core::ITimeProvider);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::ITimeProvider, "BGNet.Core", "ITimeProvider");
