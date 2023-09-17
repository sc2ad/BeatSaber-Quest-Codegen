#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__TrackedKeyboardFlags;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRKeyboard;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState;
}
// Type: ::TrackedKeyboardState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8855))
// CS Name: OVRKeyboard::TrackedKeyboardState
struct CORDL_TYPE ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "isPositionValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPositionTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOrientationValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOrientationTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "timeInSeconds", ty: "double_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState(bool isPositionValid, bool isPositionTracked, bool isOrientationValid, bool isOrientationTracked, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, double_t timeInSeconds) noexcept;


                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState(____GlobalNamespace__OVRKeyboard__TrackedKeyboardState const&) = default;
                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState(____GlobalNamespace__OVRKeyboard__TrackedKeyboardState&&) = default;
                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState& operator=(____GlobalNamespace__OVRKeyboard__TrackedKeyboardState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState& operator=(____GlobalNamespace__OVRKeyboard__TrackedKeyboardState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRKeyboard__TrackedKeyboardState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_isPositionValid, put=__set_isPositionValid))  isPositionValid;

constexpr void __set_isPositionValid(bool value) ;

constexpr bool __get_isPositionValid() const;

 bool __declspec(property(get=__get_isPositionTracked, put=__set_isPositionTracked))  isPositionTracked;

constexpr void __set_isPositionTracked(bool value) ;

constexpr bool __get_isPositionTracked() const;

 bool __declspec(property(get=__get_isOrientationValid, put=__set_isOrientationValid))  isOrientationValid;

constexpr void __set_isOrientationValid(bool value) ;

constexpr bool __get_isOrientationValid() const;

 bool __declspec(property(get=__get_isOrientationTracked, put=__set_isOrientationTracked))  isOrientationTracked;

constexpr void __set_isOrientationTracked(bool value) ;

constexpr bool __get_isOrientationTracked() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;

 double_t __declspec(property(get=__get_timeInSeconds, put=__set_timeInSeconds))  timeInSeconds;

constexpr void __set_timeInSeconds(double_t value) ;

constexpr double_t __get_timeInSeconds() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackedKeyboardInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8856))
// CS Name: OVRKeyboard::TrackedKeyboardInfo
struct CORDL_TYPE ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Identifier", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Dimensions", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "KeyboardFlags", ty: "::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardFlags", modifiers: "", def_value: None }, CppParam { name: "SupportedPresentationStyles", ty: "::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo(::StringW Name, uint64_t Identifier, ::UnityEngine::Vector3 Dimensions, ::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardFlags KeyboardFlags, ::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles SupportedPresentationStyles) noexcept;


                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo(____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo const&) = default;
                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo(____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo&&) = default;
                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo& operator=(____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo& operator=(____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 uint64_t __declspec(property(get=__get_Identifier, put=__set_Identifier))  Identifier;

constexpr void __set_Identifier(uint64_t value) ;

constexpr uint64_t __get_Identifier() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_Dimensions, put=__set_Dimensions))  Dimensions;

constexpr void __set_Dimensions(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_Dimensions() const;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardFlags __declspec(property(get=__get_KeyboardFlags, put=__set_KeyboardFlags))  KeyboardFlags;

constexpr void __set_KeyboardFlags(::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardFlags value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardFlags __get_KeyboardFlags() const;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles __declspec(property(get=__get_SupportedPresentationStyles, put=__set_SupportedPresentationStyles))  SupportedPresentationStyles;

constexpr void __set_SupportedPresentationStyles(::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles __get_SupportedPresentationStyles() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRKeyboard
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8857))
// CS Name: OVRKeyboard
class CORDL_TYPE OVRKeyboard : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TrackedKeyboardInfo = ::GlobalNamespace::____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo;

using TrackedKeyboardState = ::GlobalNamespace::____GlobalNamespace__OVRKeyboard__TrackedKeyboardState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: " const&", def_value: None }]
constexpr OVRKeyboard(OVRKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: "&&", def_value: None }]
constexpr OVRKeyboard(OVRKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRKeyboard(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRKeyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRKeyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRKeyboard& operator=(OVRKeyboard&& o) noexcept = default;
  constexpr OVRKeyboard& operator=(OVRKeyboard const& o) noexcept = default;
                


// Methods

/// @brief Method GetKeyboardState addr 0x2612a08 size 0x154 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__OVRKeyboard__TrackedKeyboardState GetKeyboardState() ;

/// @brief Method GetSystemKeyboardInfo addr 0x2612b5c size 0xe4 virtual false final false
static bool GetSystemKeyboardInfo(::GlobalNamespace::____GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags keyboardQueryFlags, ByRef<::GlobalNamespace::____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo> keyboardInfo) ;

/// @brief Method StopKeyboardTracking addr 0x2612c40 size 0x50 virtual false final false
static bool StopKeyboardTracking(::GlobalNamespace::____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo keyboardInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRKeyboard, "", "OVRKeyboard");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, "", "OVRKeyboard/TrackedKeyboardInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRKeyboard__TrackedKeyboardState, "", "OVRKeyboard/TrackedKeyboardState");
