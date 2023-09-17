#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace Unity::XR::Oculus {
class InputLayoutLoader;
}
// Type: Unity.XR.Oculus::InputLayoutLoader
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15220))
// CS Name: Unity.XR.Oculus.InputLayoutLoader
class CORDL_TYPE InputLayoutLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputLayoutLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputLayoutLoader", modifiers: " const&", def_value: None }]
constexpr InputLayoutLoader(InputLayoutLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputLayoutLoader", modifiers: "&&", def_value: None }]
constexpr InputLayoutLoader(InputLayoutLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputLayoutLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputLayoutLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputLayoutLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputLayoutLoader& operator=(InputLayoutLoader&& o) noexcept = default;
  constexpr InputLayoutLoader& operator=(InputLayoutLoader const& o) noexcept = default;
                


// Methods

/// @brief Method RegisterInputLayouts addr 0x2adee90 size 0x358 virtual false final false
static void RegisterInputLayouts() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::InputLayoutLoader);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::InputLayoutLoader, "Unity.XR.Oculus", "InputLayoutLoader");
