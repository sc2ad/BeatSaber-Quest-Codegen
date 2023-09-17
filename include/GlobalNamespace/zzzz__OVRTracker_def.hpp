#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct OVRPose;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTracker;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRTracker__Frustum;
}
// Type: ::Frustum
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8874))
// CS Name: OVRTracker::Frustum
struct CORDL_TYPE ____GlobalNamespace__OVRTracker__Frustum : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRTracker__Frustum(float_t nearZ, float_t farZ, ::UnityEngine::Vector2 fov) noexcept;


                    constexpr ____GlobalNamespace__OVRTracker__Frustum(____GlobalNamespace__OVRTracker__Frustum const&) = default;
                    constexpr ____GlobalNamespace__OVRTracker__Frustum(____GlobalNamespace__OVRTracker__Frustum&&) = default;
                    constexpr ____GlobalNamespace__OVRTracker__Frustum& operator=(____GlobalNamespace__OVRTracker__Frustum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRTracker__Frustum& operator=(____GlobalNamespace__OVRTracker__Frustum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRTracker__Frustum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_nearZ, put=__set_nearZ))  nearZ;

constexpr void __set_nearZ(float_t value) ;

constexpr float_t __get_nearZ() const;

 float_t __declspec(property(get=__get_farZ, put=__set_farZ))  farZ;

constexpr void __set_farZ(float_t value) ;

constexpr float_t __get_farZ() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_fov, put=__set_fov))  fov;

constexpr void __set_fov(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_fov() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTracker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8875))
// CS Name: OVRTracker
class CORDL_TYPE OVRTracker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Frustum = ::GlobalNamespace::____GlobalNamespace__OVRTracker__Frustum;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRTracker() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: " const&", def_value: None }]
constexpr OVRTracker(OVRTracker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: "&&", def_value: None }]
constexpr OVRTracker(OVRTracker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRTracker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRTracker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRTracker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRTracker& operator=(OVRTracker&& o) noexcept = default;
  constexpr OVRTracker& operator=(OVRTracker const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isPresent))  isPresent;

 bool __declspec(property(get=get_isPositionTracked))  isPositionTracked;

 bool __declspec(property(get=get_isEnabled, put=set_isEnabled))  isEnabled;

 int32_t __declspec(property(get=get_count))  count;


// Methods

/// @brief Method get_isPresent addr 0x261868c size 0x90 virtual false final false
 bool get_isPresent() ;

/// @brief Method get_isPositionTracked addr 0x261871c size 0x50 virtual false final false
 bool get_isPositionTracked() ;

/// @brief Method get_isEnabled addr 0x261876c size 0x90 virtual false final false
 bool get_isEnabled() ;

/// @brief Method set_isEnabled addr 0x26187fc size 0x94 virtual false final false
 void set_isEnabled(bool value) ;

/// @brief Method get_count addr 0x2618890 size 0x3c virtual false final false
 int32_t get_count() ;

/// @brief Method GetFrustum addr 0x26189d0 size 0xa4 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRTracker__Frustum GetFrustum(int32_t tracker) ;

/// @brief Method GetPose addr 0x2618a74 size 0x2b0 virtual false final false
 ::GlobalNamespace::OVRPose GetPose(int32_t tracker) ;

/// @brief Method GetPoseValid addr 0x2618d24 size 0x104 virtual false final false
 bool GetPoseValid(int32_t tracker) ;

/// @brief Method GetPresent addr 0x26188cc size 0x104 virtual false final false
 bool GetPresent(int32_t tracker) ;

// Ctor Parameters []
explicit OVRTracker() ;

/// @brief Method .ctor addr 0x2618e28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTracker, "", "OVRTracker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRTracker__Frustum, "", "OVRTracker/Frustum");
