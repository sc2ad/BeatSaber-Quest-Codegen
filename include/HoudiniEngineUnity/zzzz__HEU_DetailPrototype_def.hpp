#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
// Type: HoudiniEngineUnity::HEU_DetailPrototype
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9897))
// CS Name: HoudiniEngineUnity.HEU_DetailPrototype
class CORDL_TYPE HEU_DetailPrototype : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_DetailPrototype>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_DetailPrototype>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~HEU_DetailPrototype() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailPrototype", modifiers: " const&", def_value: None }]
constexpr HEU_DetailPrototype(HEU_DetailPrototype const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_DetailPrototype", modifiers: "&&", def_value: None }]
constexpr HEU_DetailPrototype(HEU_DetailPrototype&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_DetailPrototype(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_DetailPrototype& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_DetailPrototype& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_DetailPrototype& operator=(HEU_DetailPrototype&& o) noexcept = default;
  constexpr HEU_DetailPrototype& operator=(HEU_DetailPrototype const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__prototypePrefab, put=__set__prototypePrefab))  _prototypePrefab;

constexpr void __set__prototypePrefab(::StringW value) ;

constexpr ::StringW __get__prototypePrefab() const;

 ::StringW __declspec(property(get=__get__prototypeTexture, put=__set__prototypeTexture))  _prototypeTexture;

constexpr void __set__prototypeTexture(::StringW value) ;

constexpr ::StringW __get__prototypeTexture() const;

 float_t __declspec(property(get=__get__bendFactor, put=__set__bendFactor))  _bendFactor;

constexpr void __set__bendFactor(float_t value) ;

constexpr float_t __get__bendFactor() const;

 UnityEngine::Color __declspec(property(get=__get__dryColor, put=__set__dryColor))  _dryColor;

constexpr void __set__dryColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__dryColor() const;

 UnityEngine::Color __declspec(property(get=__get__healthyColor, put=__set__healthyColor))  _healthyColor;

constexpr void __set__healthyColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__healthyColor() const;

 float_t __declspec(property(get=__get__maxHeight, put=__set__maxHeight))  _maxHeight;

constexpr void __set__maxHeight(float_t value) ;

constexpr float_t __get__maxHeight() const;

 float_t __declspec(property(get=__get__maxWidth, put=__set__maxWidth))  _maxWidth;

constexpr void __set__maxWidth(float_t value) ;

constexpr float_t __get__maxWidth() const;

 float_t __declspec(property(get=__get__minHeight, put=__set__minHeight))  _minHeight;

constexpr void __set__minHeight(float_t value) ;

constexpr float_t __get__minHeight() const;

 float_t __declspec(property(get=__get__minWidth, put=__set__minWidth))  _minWidth;

constexpr void __set__minWidth(float_t value) ;

constexpr float_t __get__minWidth() const;

 float_t __declspec(property(get=__get__noiseSpread, put=__set__noiseSpread))  _noiseSpread;

constexpr void __set__noiseSpread(float_t value) ;

constexpr float_t __get__noiseSpread() const;

 int32_t __declspec(property(get=__get__renderMode, put=__set__renderMode))  _renderMode;

constexpr void __set__renderMode(int32_t value) ;

constexpr int32_t __get__renderMode() const;


// Methods

static HoudiniEngineUnity::HEU_DetailPrototype New_ctor() ;

/// @brief Method .ctor addr 0x2077f90 size 0xfc virtual false final false
 void _ctor() ;

/// @brief Method IsEquivalentTo addr 0x207808c size 0xec virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_DetailPrototype other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_DetailPrototype);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_DetailPrototype, "HoudiniEngineUnity", "HEU_DetailPrototype");
