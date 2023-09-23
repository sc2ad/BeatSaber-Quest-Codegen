#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusSession;
}
// Type: Unity.XR.Oculus::OculusSession
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15235))
// CS Name: Unity.XR.Oculus.OculusSession
class CORDL_TYPE OculusSession : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OculusSession() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusSession", modifiers: " const&", def_value: None }]
constexpr OculusSession(OculusSession const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusSession", modifiers: "&&", def_value: None }]
constexpr OculusSession(OculusSession&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusSession(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusSession& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusSession& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusSession& operator=(OculusSession&& o) noexcept = default;
  constexpr OculusSession& operator=(OculusSession const& o) noexcept = default;
                


// Methods

/// @brief Method Update addr 0x2ae3228 size 0x60 virtual false final false
static void Update() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(Unity::XR::Oculus::OculusSession);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::OculusSession, "Unity.XR.Oculus", "OculusSession");
