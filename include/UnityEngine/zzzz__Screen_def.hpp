#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct ScreenOrientation;
}
namespace UnityEngine {
struct FullScreenMode;
}
namespace UnityEngine {
struct Resolution;
}
// Forward declare root types
namespace UnityEngine {
class Screen;
}
// Type: UnityEngine::Screen
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10037))
// CS Name: UnityEngine.Screen
class CORDL_TYPE Screen : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Screen() = default;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: " const&", def_value: None }]
constexpr Screen(Screen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
constexpr Screen(Screen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Screen(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Screen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Screen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Screen& operator=(Screen&& o) noexcept = default;
  constexpr Screen& operator=(Screen const& o) noexcept = default;
                


// Properties

static int32_t __declspec(property(get=get_width))  width;

static int32_t __declspec(property(get=get_height))  height;

static float_t __declspec(property(get=get_dpi))  dpi;

static UnityEngine::ScreenOrientation __declspec(property(get=get_orientation))  orientation;

static UnityEngine::Resolution __declspec(property(get=get_currentResolution))  currentResolution;

static bool __declspec(property(get=get_fullScreen, put=set_fullScreen))  fullScreen;

static ::ArrayW<UnityEngine::Resolution> __declspec(property(get=get_resolutions))  resolutions;


// Methods

/// @brief Method get_width addr 0x2b41fa4 size 0x28 virtual false final false
static int32_t get_width() ;

/// @brief Method get_height addr 0x2b41fcc size 0x28 virtual false final false
static int32_t get_height() ;

/// @brief Method get_dpi addr 0x2b41ff4 size 0x28 virtual false final false
static float_t get_dpi() ;

/// @brief Method GetScreenOrientation addr 0x2b4201c size 0x28 virtual false final false
static UnityEngine::ScreenOrientation GetScreenOrientation() ;

/// @brief Method get_orientation addr 0x2b42044 size 0x28 virtual false final false
static UnityEngine::ScreenOrientation get_orientation() ;

/// @brief Method get_currentResolution addr 0x2b4206c size 0x4c virtual false final false
static UnityEngine::Resolution get_currentResolution() ;

/// @brief Method get_fullScreen addr 0x2b420f4 size 0x28 virtual false final false
static bool get_fullScreen() ;

/// @brief Method set_fullScreen addr 0x2b4211c size 0x3c virtual false final false
static void set_fullScreen(bool value) ;

/// @brief Method SetResolution addr 0x2b42158 size 0x5c virtual false final false
static void SetResolution(int32_t width, int32_t height, UnityEngine::FullScreenMode fullscreenMode, int32_t preferredRefreshRate) ;

/// @brief Method SetResolution addr 0x2b421b4 size 0x64 virtual false final false
static void SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate) ;

/// @brief Method SetResolution addr 0x2b42218 size 0x60 virtual false final false
static void SetResolution(int32_t width, int32_t height, bool fullscreen) ;

/// @brief Method get_resolutions addr 0x2b42278 size 0x28 virtual false final false
static ::ArrayW<UnityEngine::Resolution> get_resolutions() ;

/// @brief Method get_currentResolution_Injected addr 0x2b420b8 size 0x3c virtual false final false
static void get_currentResolution_Injected(ByRef<UnityEngine::Resolution> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Screen);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Screen, "UnityEngine", "Screen");
