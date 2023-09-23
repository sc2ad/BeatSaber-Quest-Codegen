#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine {
class YieldInstruction;
}
// Type: UnityEngine::YieldInstruction
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10133))
// CS Name: UnityEngine.YieldInstruction
class CORDL_TYPE YieldInstruction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~YieldInstruction() = default;

// Ctor Parameters [CppParam { name: "", ty: "YieldInstruction", modifiers: " const&", def_value: None }]
constexpr YieldInstruction(YieldInstruction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "YieldInstruction", modifiers: "&&", def_value: None }]
constexpr YieldInstruction(YieldInstruction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit YieldInstruction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr YieldInstruction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr YieldInstruction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr YieldInstruction& operator=(YieldInstruction&& o) noexcept = default;
  constexpr YieldInstruction& operator=(YieldInstruction const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit YieldInstruction() ;

/// @brief Method .ctor addr 0x2b55fc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::YieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::YieldInstruction, "UnityEngine", "YieldInstruction");
