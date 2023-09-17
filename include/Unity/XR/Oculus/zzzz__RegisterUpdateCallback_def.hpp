#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace Unity::XR::Oculus {
class RegisterUpdateCallback;
}
// Type: Unity.XR.Oculus::RegisterUpdateCallback
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15241))
// CS Name: Unity.XR.Oculus.RegisterUpdateCallback
class CORDL_TYPE RegisterUpdateCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RegisterUpdateCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegisterUpdateCallback", modifiers: " const&", def_value: None }]
constexpr RegisterUpdateCallback(RegisterUpdateCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegisterUpdateCallback", modifiers: "&&", def_value: None }]
constexpr RegisterUpdateCallback(RegisterUpdateCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegisterUpdateCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegisterUpdateCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegisterUpdateCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegisterUpdateCallback& operator=(RegisterUpdateCallback&& o) noexcept = default;
  constexpr RegisterUpdateCallback& operator=(RegisterUpdateCallback const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x2adfaa4 size 0x7c virtual false final false
static void Initialize() ;

/// @brief Method Deinitialize addr 0x2adfd04 size 0x7c virtual false final false
static void Deinitialize() ;

/// @brief Method Update addr 0x2ae3414 size 0x10 virtual false final false
static void Update() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::RegisterUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::RegisterUpdateCallback, "Unity.XR.Oculus", "RegisterUpdateCallback");
