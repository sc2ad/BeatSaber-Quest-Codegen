#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Yoga {
class Logger;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaConfig;
}
// Type: UnityEngine.Yoga::YogaConfig
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15384))
// CS Name: UnityEngine.Yoga.YogaConfig
class CORDL_TYPE YogaConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~YogaConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: " const&", def_value: None }]
constexpr YogaConfig(YogaConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "YogaConfig", modifiers: "&&", def_value: None }]
constexpr YogaConfig(YogaConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit YogaConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr YogaConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr YogaConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr YogaConfig& operator=(YogaConfig&& o) noexcept = default;
  constexpr YogaConfig& operator=(YogaConfig const& o) noexcept = default;
                


// Fields

static UnityEngine::Yoga::YogaConfig __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(UnityEngine::Yoga::YogaConfig value) ;

static UnityEngine::Yoga::YogaConfig __get_Default() ;

 ::cordl_internals::intptr_t __declspec(property(get=__get__ygConfig, put=__set__ygConfig))  _ygConfig;

constexpr void __set__ygConfig(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__ygConfig() const;

 UnityEngine::Yoga::Logger __declspec(property(get=__get__logger, put=__set__logger))  _logger;

constexpr void __set__logger(UnityEngine::Yoga::Logger value) ;

constexpr UnityEngine::Yoga::Logger __get__logger() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_Handle))  Handle;

 bool __declspec(property(get=get_UseWebDefaults, put=set_UseWebDefaults))  UseWebDefaults;

 float_t __declspec(property(put=set_PointScaleFactor))  PointScaleFactor;


// Methods

static UnityEngine::Yoga::YogaConfig New_ctor(::cordl_internals::intptr_t ygConfig) ;

/// @brief Method .ctor addr 0x2d2dc18 size 0xc4 virtual false final false
 void _ctor(::cordl_internals::intptr_t ygConfig) ;

static UnityEngine::Yoga::YogaConfig New_ctor() ;

/// @brief Method .ctor addr 0x2d2dcdc size 0x44 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2d2dd20 size 0x108 virtual true final false
 void Finalize() ;

/// @brief Method get_Handle addr 0x2d2b85c size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_Handle() ;

/// @brief Method get_UseWebDefaults addr 0x2d2de28 size 0x3c virtual false final false
 bool get_UseWebDefaults() ;

/// @brief Method set_UseWebDefaults addr 0x2d2de64 size 0x44 virtual false final false
 void set_UseWebDefaults(bool value) ;

/// @brief Method set_PointScaleFactor addr 0x2d2dea8 size 0x4c virtual false final false
 void set_PointScaleFactor(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(UnityEngine::Yoga::YogaConfig);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaConfig, "UnityEngine.Yoga", "YogaConfig");
