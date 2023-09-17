#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UI {
class Misc;
}
// Type: UnityEngine.UI::Misc
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13041))
// CS Name: UnityEngine.UI.Misc
class CORDL_TYPE Misc : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Misc() = default;

// Ctor Parameters [CppParam { name: "", ty: "Misc", modifiers: " const&", def_value: None }]
constexpr Misc(Misc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Misc", modifiers: "&&", def_value: None }]
constexpr Misc(Misc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Misc(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Misc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Misc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Misc& operator=(Misc&& o) noexcept = default;
  constexpr Misc& operator=(Misc const& o) noexcept = default;
                


// Methods

/// @brief Method Destroy addr 0x2c047f4 size 0x100 virtual false final false
static void Destroy(::UnityEngine::Object obj) ;

/// @brief Method DestroyImmediate addr 0x2c048f4 size 0xa8 virtual false final false
static void DestroyImmediate(::UnityEngine::Object obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::Misc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Misc, "UnityEngine.UI", "Misc");
