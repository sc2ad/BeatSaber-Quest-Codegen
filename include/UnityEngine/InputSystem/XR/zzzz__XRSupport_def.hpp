#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRSupport;
}
// Type: UnityEngine.InputSystem.XR::XRSupport
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6424))
// CS Name: UnityEngine.InputSystem.XR.XRSupport
class CORDL_TYPE XRSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XRSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRSupport", modifiers: " const&", def_value: None }]
constexpr XRSupport(XRSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRSupport", modifiers: "&&", def_value: None }]
constexpr XRSupport(XRSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRSupport& operator=(XRSupport&& o) noexcept = default;
  constexpr XRSupport& operator=(XRSupport const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x293627c size 0x840 virtual false final false
static void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::XRSupport);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::XRSupport, "UnityEngine.InputSystem.XR", "XRSupport");
