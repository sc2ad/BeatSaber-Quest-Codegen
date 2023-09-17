#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DisposeHelper;
}
// Type: UnityEngine.UIElements::DisposeHelper
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6965))
// CS Name: UnityEngine.UIElements.DisposeHelper
class CORDL_TYPE DisposeHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DisposeHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposeHelper", modifiers: " const&", def_value: None }]
constexpr DisposeHelper(DisposeHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisposeHelper", modifiers: "&&", def_value: None }]
constexpr DisposeHelper(DisposeHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisposeHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DisposeHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisposeHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisposeHelper& operator=(DisposeHelper&& o) noexcept = default;
  constexpr DisposeHelper& operator=(DisposeHelper const& o) noexcept = default;
                


// Methods

/// @brief Method NotifyDisposedUsed addr 0x2c80e3c size 0xc8 virtual false final false
static void NotifyDisposedUsed(::System::IDisposable disposable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::DisposeHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DisposeHelper, "UnityEngine.UIElements", "DisposeHelper");
