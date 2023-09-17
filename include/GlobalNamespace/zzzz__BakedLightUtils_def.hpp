#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class BakedLightUtils;
}
// Type: ::BakedLightUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5940))
// CS Name: BakedLightUtils
class CORDL_TYPE BakedLightUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BakedLightUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightUtils", modifiers: " const&", def_value: None }]
constexpr BakedLightUtils(BakedLightUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightUtils", modifiers: "&&", def_value: None }]
constexpr BakedLightUtils(BakedLightUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakedLightUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BakedLightUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakedLightUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakedLightUtils& operator=(BakedLightUtils&& o) noexcept = default;
  constexpr BakedLightUtils& operator=(BakedLightUtils const& o) noexcept = default;
                


// Fields

/// @brief Field kMirrorParentNameToIgnore offset 0
static constexpr ::ConstString  kMirrorParentNameToIgnore{u"PlayersPlace"};

/// @brief Field kDepthOnlyShaderName offset 0
static constexpr ::ConstString  kDepthOnlyShaderName{u"Custom/SetDepthOnly"};

static int32_t __declspec(property(get=__get__zWritePropertyId, put=__set__zWritePropertyId))  _zWritePropertyId;

static void __set__zWritePropertyId(int32_t value) ;

static int32_t __get__zWritePropertyId() ;

static int32_t __declspec(property(get=__get__stencilRefValuePropertyId, put=__set__stencilRefValuePropertyId))  _stencilRefValuePropertyId;

static void __set__stencilRefValuePropertyId(int32_t value) ;

static int32_t __get__stencilRefValuePropertyId() ;

static int32_t __declspec(property(get=__get__stencilCompPropertyId, put=__set__stencilCompPropertyId))  _stencilCompPropertyId;

static void __set__stencilCompPropertyId(int32_t value) ;

static int32_t __get__stencilCompPropertyId() ;

static int32_t __declspec(property(get=__get__stencilPassOpPropertyId, put=__set__stencilPassOpPropertyId))  _stencilPassOpPropertyId;

static void __set__stencilPassOpPropertyId(int32_t value) ;

static int32_t __get__stencilPassOpPropertyId() ;


// Methods

/// @brief Method ValidateLoadedEnvironmentScene addr 0x219a8cc size 0x80c virtual false final false
static void ValidateLoadedEnvironmentScene(bool validateBakedGIEnabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BakedLightUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightUtils, "", "BakedLightUtils");
