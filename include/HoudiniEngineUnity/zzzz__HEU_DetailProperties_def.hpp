#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
// Type: HoudiniEngineUnity::HEU_DetailProperties
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9896))
// CS Name: HoudiniEngineUnity.HEU_DetailProperties
class CORDL_TYPE HEU_DetailProperties : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_DetailProperties>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_DetailProperties>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_DetailProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailProperties", modifiers: " const&", def_value: None }]
constexpr HEU_DetailProperties(HEU_DetailProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailProperties", modifiers: "&&", def_value: None }]
constexpr HEU_DetailProperties(HEU_DetailProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_DetailProperties(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_DetailProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_DetailProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_DetailProperties& operator=(HEU_DetailProperties&& o) noexcept = default;
  constexpr HEU_DetailProperties& operator=(HEU_DetailProperties const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__detailDistance, put=__set__detailDistance))  _detailDistance;

constexpr void __set__detailDistance(float_t value) ;

constexpr float_t __get__detailDistance() const;

 float_t __declspec(property(get=__get__detailDensity, put=__set__detailDensity))  _detailDensity;

constexpr void __set__detailDensity(float_t value) ;

constexpr float_t __get__detailDensity() const;

 int32_t __declspec(property(get=__get__detailResolution, put=__set__detailResolution))  _detailResolution;

constexpr void __set__detailResolution(int32_t value) ;

constexpr int32_t __get__detailResolution() const;

 int32_t __declspec(property(get=__get__detailResolutionPerPatch, put=__set__detailResolutionPerPatch))  _detailResolutionPerPatch;

constexpr void __set__detailResolutionPerPatch(int32_t value) ;

constexpr int32_t __get__detailResolutionPerPatch() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x2077d88 size 0x1f0 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_DetailProperties other) ;

static HoudiniEngineUnity::HEU_DetailProperties New_ctor() ;

/// @brief Method .ctor addr 0x2077f78 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_DetailProperties);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_DetailProperties, "HoudiniEngineUnity", "HEU_DetailProperties");
