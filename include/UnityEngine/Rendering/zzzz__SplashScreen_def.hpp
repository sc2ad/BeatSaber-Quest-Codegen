#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
class SplashScreen;
}
// Type: UnityEngine.Rendering::SplashScreen
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10289))
// CS Name: UnityEngine.Rendering.SplashScreen
class CORDL_TYPE SplashScreen : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SplashScreen() = default;

// Ctor Parameters [CppParam { name: "", ty: "SplashScreen", modifiers: " const&", def_value: None }]
constexpr SplashScreen(SplashScreen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SplashScreen", modifiers: "&&", def_value: None }]
constexpr SplashScreen(SplashScreen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SplashScreen(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SplashScreen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SplashScreen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SplashScreen& operator=(SplashScreen&& o) noexcept = default;
  constexpr SplashScreen& operator=(SplashScreen const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_isFinished))  isFinished;


// Methods

/// @brief Method get_isFinished addr 0x2b74844 size 0x28 virtual false final false
static bool get_isFinished() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Rendering::SplashScreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SplashScreen, "UnityEngine.Rendering", "SplashScreen");
