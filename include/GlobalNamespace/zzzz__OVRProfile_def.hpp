#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRProfile__State;
}
namespace GlobalNamespace {
class OVRProfile;
}
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8807))
// CS Name: OVRProfile::State
struct CORDL_TYPE ____GlobalNamespace__OVRProfile__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRProfile__State(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRProfile__State(____GlobalNamespace__OVRProfile__State const&) = default;
                    constexpr ____GlobalNamespace__OVRProfile__State(____GlobalNamespace__OVRProfile__State&&) = default;
                    constexpr ____GlobalNamespace__OVRProfile__State& operator=(____GlobalNamespace__OVRProfile__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRProfile__State& operator=(____GlobalNamespace__OVRProfile__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRProfile__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRProfile__State_Unwrapped : int32_t {
__NOT_TRIGGERED = 0,
__LOADING = 1,
__READY = 2,
__ERROR = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRProfile__State_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRProfile__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NOT_TRIGGERED offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRProfile__State const NOT_TRIGGERED;

/// @brief Field LOADING offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRProfile__State const LOADING;

/// @brief Field READY offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRProfile__State const READY;

/// @brief Field ERROR offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRProfile__State const ERROR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRProfile
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8808))
// CS Name: OVRProfile
class CORDL_TYPE OVRProfile : public ::UnityEngine::Object {
public:
// Declarations
using State = ::GlobalNamespace::____GlobalNamespace__OVRProfile__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: " const&", def_value: None }]
constexpr OVRProfile(OVRProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: "&&", def_value: None }]
constexpr OVRProfile(OVRProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRProfile(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr OVRProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRProfile& operator=(OVRProfile&& o) noexcept = default;
  constexpr OVRProfile& operator=(OVRProfile const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_userName))  userName;

 ::StringW __declspec(property(get=get_locale))  locale;

 float_t __declspec(property(get=get_ipd))  ipd;

 float_t __declspec(property(get=get_eyeHeight))  eyeHeight;

 float_t __declspec(property(get=get_eyeDepth))  eyeDepth;

 float_t __declspec(property(get=get_neckHeight))  neckHeight;

 ::GlobalNamespace::____GlobalNamespace__OVRProfile__State __declspec(property(get=get_state))  state;


// Methods

/// @brief Method get_id addr 0x26021b8 size 0x40 virtual false final false
 ::StringW get_id() ;

/// @brief Method get_userName addr 0x26021f8 size 0x40 virtual false final false
 ::StringW get_userName() ;

/// @brief Method get_locale addr 0x2602238 size 0x40 virtual false final false
 ::StringW get_locale() ;

/// @brief Method get_ipd addr 0x2602278 size 0x134 virtual false final false
 float_t get_ipd() ;

/// @brief Method get_eyeHeight addr 0x26023ac size 0x50 virtual false final false
 float_t get_eyeHeight() ;

/// @brief Method get_eyeDepth addr 0x26023fc size 0x50 virtual false final false
 float_t get_eyeDepth() ;

/// @brief Method get_neckHeight addr 0x260244c size 0x1c virtual false final false
 float_t get_neckHeight() ;

/// @brief Method get_state addr 0x2602468 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRProfile__State get_state() ;

// Ctor Parameters []
explicit OVRProfile() ;

/// @brief Method .ctor addr 0x2602470 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRProfile__State, "", "OVRProfile/State");
NEED_NO_BOX(::GlobalNamespace::OVRProfile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProfile, "", "OVRProfile");
