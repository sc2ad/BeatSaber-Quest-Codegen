#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__ScreenCapture__StereoScreenCaptureMode;
}
namespace UnityEngine {
class ScreenCapture;
}
// Type: ::StereoScreenCaptureMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16011))
// CS Name: UnityEngine.ScreenCapture::StereoScreenCaptureMode
struct CORDL_TYPE UnityEngine__ScreenCapture__StereoScreenCaptureMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ScreenCapture__StereoScreenCaptureMode(int32_t value__) noexcept;


                    constexpr UnityEngine__ScreenCapture__StereoScreenCaptureMode(UnityEngine__ScreenCapture__StereoScreenCaptureMode const&) = default;
                    constexpr UnityEngine__ScreenCapture__StereoScreenCaptureMode(UnityEngine__ScreenCapture__StereoScreenCaptureMode&&) = default;
                    constexpr UnityEngine__ScreenCapture__StereoScreenCaptureMode& operator=(UnityEngine__ScreenCapture__StereoScreenCaptureMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ScreenCapture__StereoScreenCaptureMode& operator=(UnityEngine__ScreenCapture__StereoScreenCaptureMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ScreenCapture__StereoScreenCaptureMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ScreenCapture__StereoScreenCaptureMode_Unwrapped : int32_t {
__LeftEye = 1,
__RightEye = 2,
__BothEyes = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ScreenCapture__StereoScreenCaptureMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ScreenCapture__StereoScreenCaptureMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftEye offset 0
static UnityEngine::UnityEngine__ScreenCapture__StereoScreenCaptureMode const LeftEye;

/// @brief Field RightEye offset 0
static UnityEngine::UnityEngine__ScreenCapture__StereoScreenCaptureMode const RightEye;

/// @brief Field BothEyes offset 0
static UnityEngine::UnityEngine__ScreenCapture__StereoScreenCaptureMode const BothEyes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::ScreenCapture
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16012))
// CS Name: UnityEngine.ScreenCapture
class CORDL_TYPE ScreenCapture : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StereoScreenCaptureMode = UnityEngine::UnityEngine__ScreenCapture__StereoScreenCaptureMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScreenCapture() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: " const&", def_value: None }]
constexpr ScreenCapture(ScreenCapture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: "&&", def_value: None }]
constexpr ScreenCapture(ScreenCapture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenCapture(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScreenCapture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenCapture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenCapture& operator=(ScreenCapture&& o) noexcept = default;
  constexpr ScreenCapture& operator=(ScreenCapture const& o) noexcept = default;
                


// Methods

/// @brief Method CaptureScreenshot addr 0x2ba0dc4 size 0x44 virtual false final false
static void CaptureScreenshot(::StringW filename) ;

/// @brief Method CaptureScreenshot addr 0x2ba0e08 size 0x54 virtual false final false
static void CaptureScreenshot(::StringW filename, int32_t superSize, UnityEngine::UnityEngine__ScreenCapture__StereoScreenCaptureMode CaptureMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__ScreenCapture__StereoScreenCaptureMode, "UnityEngine", "ScreenCapture/StereoScreenCaptureMode");
NEED_NO_BOX(UnityEngine::ScreenCapture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScreenCapture, "UnityEngine", "ScreenCapture");
