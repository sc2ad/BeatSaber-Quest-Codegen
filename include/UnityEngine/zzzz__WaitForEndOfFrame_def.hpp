#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
// Forward declare root types
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Type: UnityEngine::WaitForEndOfFrame
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10133))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10131))
// CS Name: UnityEngine.WaitForEndOfFrame
class CORDL_TYPE WaitForEndOfFrame : public UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WaitForEndOfFrame() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForEndOfFrame", modifiers: " const&", def_value: None }]
constexpr WaitForEndOfFrame(WaitForEndOfFrame const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForEndOfFrame", modifiers: "&&", def_value: None }]
constexpr WaitForEndOfFrame(WaitForEndOfFrame&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitForEndOfFrame(void* ptr) noexcept : UnityEngine::YieldInstruction(ptr) {
}


  constexpr WaitForEndOfFrame& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitForEndOfFrame& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitForEndOfFrame& operator=(WaitForEndOfFrame&& o) noexcept = default;
  constexpr WaitForEndOfFrame& operator=(WaitForEndOfFrame const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit WaitForEndOfFrame() ;

/// @brief Method .ctor addr 0x2b55fbc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WaitForEndOfFrame);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitForEndOfFrame, "UnityEngine", "WaitForEndOfFrame");
