#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
// Forward declare root types
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Type: UnityEngine::WaitForFixedUpdate
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10133))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10172))
// CS Name: UnityEngine.WaitForFixedUpdate
class CORDL_TYPE WaitForFixedUpdate : public UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WaitForFixedUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: " const&", def_value: None }]
constexpr WaitForFixedUpdate(WaitForFixedUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: "&&", def_value: None }]
constexpr WaitForFixedUpdate(WaitForFixedUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitForFixedUpdate(void* ptr) noexcept : UnityEngine::YieldInstruction(ptr) {
}


  constexpr WaitForFixedUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitForFixedUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitForFixedUpdate& operator=(WaitForFixedUpdate&& o) noexcept = default;
  constexpr WaitForFixedUpdate& operator=(WaitForFixedUpdate const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WaitForFixedUpdate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitForFixedUpdate, "UnityEngine", "WaitForFixedUpdate");
