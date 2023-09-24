#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HARCImports;
}
// Type: HoudiniEngineUnity::HEU_HARCImports
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9699))
// CS Name: HoudiniEngineUnity.HEU_HARCImports
class CORDL_TYPE HEU_HARCImports : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_HARCImports() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HARCImports", modifiers: " const&", def_value: None }]
constexpr HEU_HARCImports(HEU_HARCImports const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HARCImports", modifiers: "&&", def_value: None }]
constexpr HEU_HARCImports(HEU_HARCImports&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HARCImports(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_HARCImports& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HARCImports& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HARCImports& operator=(HEU_HARCImports&& o) noexcept = default;
  constexpr HEU_HARCImports& operator=(HEU_HARCImports const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::HEU_HARCImports New_ctor() ;

/// @brief Method .ctor addr 0x201f7e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_HARCImports);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HARCImports, "HoudiniEngineUnity", "HEU_HARCImports");
