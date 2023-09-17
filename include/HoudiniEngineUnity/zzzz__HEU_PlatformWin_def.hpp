#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PlatformWin;
}
// Type: HoudiniEngineUnity::HEU_PlatformWin
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9616))
// CS Name: HoudiniEngineUnity.HEU_PlatformWin
class CORDL_TYPE HEU_PlatformWin : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_PlatformWin() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PlatformWin", modifiers: " const&", def_value: None }]
constexpr HEU_PlatformWin(HEU_PlatformWin const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PlatformWin", modifiers: "&&", def_value: None }]
constexpr HEU_PlatformWin(HEU_PlatformWin&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PlatformWin(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_PlatformWin& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PlatformWin& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PlatformWin& operator=(HEU_PlatformWin&& o) noexcept = default;
  constexpr HEU_PlatformWin& operator=(HEU_PlatformWin const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PlatformWin);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PlatformWin, "HoudiniEngineUnity", "HEU_PlatformWin");
