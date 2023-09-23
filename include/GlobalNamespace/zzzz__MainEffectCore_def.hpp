#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class MainEffectCore;
}
// Type: ::MainEffectCore
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15313))
// CS Name: MainEffectCore
class CORDL_TYPE MainEffectCore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MainEffectCore() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectCore", modifiers: " const&", def_value: None }]
constexpr MainEffectCore(MainEffectCore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectCore", modifiers: "&&", def_value: None }]
constexpr MainEffectCore(MainEffectCore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainEffectCore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MainEffectCore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainEffectCore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainEffectCore& operator=(MainEffectCore&& o) noexcept = default;
  constexpr MainEffectCore& operator=(MainEffectCore const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get__baseColorBoostID, put=__set__baseColorBoostID))  _baseColorBoostID;

static void __set__baseColorBoostID(int32_t value) ;

static int32_t __get__baseColorBoostID() ;

static int32_t __declspec(property(get=__get__baseColorBoostThresholdID, put=__set__baseColorBoostThresholdID))  _baseColorBoostThresholdID;

static void __set__baseColorBoostThresholdID(int32_t value) ;

static int32_t __get__baseColorBoostThresholdID() ;


// Methods

/// @brief Method SetGlobalShaderValues addr 0x26769f0 size 0x88 virtual false final false
static void SetGlobalShaderValues(float_t baseColorBoost, float_t baseColorBoostThreshold) ;

// Ctor Parameters []
explicit MainEffectCore() ;

/// @brief Method .ctor addr 0x2677404 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainEffectCore);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectCore, "", "MainEffectCore");
