#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRUtilities;
}
// Type: UnityEngine.InputSystem.XR::XRUtilities
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6415))
// CS Name: UnityEngine.InputSystem.XR.XRUtilities
class CORDL_TYPE XRUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XRUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRUtilities", modifiers: " const&", def_value: None }]
constexpr XRUtilities(XRUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRUtilities", modifiers: "&&", def_value: None }]
constexpr XRUtilities(XRUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRUtilities& operator=(XRUtilities&& o) noexcept = default;
  constexpr XRUtilities& operator=(XRUtilities const& o) noexcept = default;
                


// Fields

/// @brief Field InterfaceMatchAnyVersion offset 0
static constexpr ::ConstString  InterfaceMatchAnyVersion{u"^(XRInput)"};

/// @brief Field InterfaceV1 offset 0
static constexpr ::ConstString  InterfaceV1{u"XRInput"};

/// @brief Field InterfaceCurrent offset 0
static constexpr ::ConstString  InterfaceCurrent{u"XRInputV1"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::XRUtilities);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::XRUtilities, "UnityEngine.InputSystem.XR", "XRUtilities");
