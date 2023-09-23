#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HAPIFunctions;
}
// Type: HoudiniEngineUnity::HEU_HAPIFunctions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9666))
// CS Name: HoudiniEngineUnity.HEU_HAPIFunctions
class CORDL_TYPE HEU_HAPIFunctions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_HAPIFunctions() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIFunctions", modifiers: " const&", def_value: None }]
constexpr HEU_HAPIFunctions(HEU_HAPIFunctions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIFunctions", modifiers: "&&", def_value: None }]
constexpr HEU_HAPIFunctions(HEU_HAPIFunctions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HAPIFunctions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_HAPIFunctions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HAPIFunctions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HAPIFunctions& operator=(HEU_HAPIFunctions&& o) noexcept = default;
  constexpr HEU_HAPIFunctions& operator=(HEU_HAPIFunctions const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_HAPIFunctions);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HAPIFunctions, "HoudiniEngineUnity", "HEU_HAPIFunctions");
