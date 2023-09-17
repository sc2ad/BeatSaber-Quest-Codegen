#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class UISupport;
}
// Type: ::UISupport
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6197))
// CS Name: UISupport
class CORDL_TYPE UISupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UISupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "UISupport", modifiers: " const&", def_value: None }]
constexpr UISupport(UISupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UISupport", modifiers: "&&", def_value: None }]
constexpr UISupport(UISupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UISupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UISupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UISupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UISupport& operator=(UISupport&& o) noexcept = default;
  constexpr UISupport& operator=(UISupport const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x28a23ac size 0x74 virtual false final false
static void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::UISupport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UISupport, "", "UISupport");
