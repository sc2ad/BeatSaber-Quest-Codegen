#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionPDG;
}
// Type: HoudiniEngineUnity::HEU_SessionPDG
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9729))
// CS Name: HoudiniEngineUnity.HEU_SessionPDG
class CORDL_TYPE HEU_SessionPDG : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_SessionPDG() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionPDG", modifiers: " const&", def_value: None }]
constexpr HEU_SessionPDG(HEU_SessionPDG const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionPDG", modifiers: "&&", def_value: None }]
constexpr HEU_SessionPDG(HEU_SessionPDG&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_SessionPDG(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_SessionPDG& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_SessionPDG& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_SessionPDG& operator=(HEU_SessionPDG&& o) noexcept = default;
  constexpr HEU_SessionPDG& operator=(HEU_SessionPDG const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionPDG);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionPDG, "HoudiniEngineUnity", "HEU_SessionPDG");
