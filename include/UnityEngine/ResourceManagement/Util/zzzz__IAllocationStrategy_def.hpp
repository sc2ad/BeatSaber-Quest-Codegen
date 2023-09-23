#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
// Type: UnityEngine.ResourceManagement.Util::IAllocationStrategy
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14258))
// CS Name: UnityEngine.ResourceManagement.Util.IAllocationStrategy
class CORDL_TYPE IAllocationStrategy : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAllocationStrategy() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAllocationStrategy(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method New addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType New(System::Type type, int32_t typeHash) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release(int32_t typeHash, ::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::IAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::IAllocationStrategy, "UnityEngine.ResourceManagement.Util", "IAllocationStrategy");
