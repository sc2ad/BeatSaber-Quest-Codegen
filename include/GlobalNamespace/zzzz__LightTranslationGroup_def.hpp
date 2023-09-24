#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationXTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationYTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationZTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_def.hpp"
namespace GlobalNamespace {
class IEditTimeValidated;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroup;
}
// Type: ::LightTranslationGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5043), inst: 3819 }), TypeDefinitionIndex(TypeDefinitionIndex(5043)), TypeDefinitionIndex(TypeDefinitionIndex(5038)), TypeDefinitionIndex(TypeDefinitionIndex(5037)), TypeDefinitionIndex(TypeDefinitionIndex(5036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5044))
// CS Name: LightTranslationGroup
class CORDL_TYPE LightTranslationGroup : public GlobalNamespace::LightTransformGroup_3<GlobalNamespace::LightGroupTranslationXTransform,GlobalNamespace::LightGroupTranslationYTransform,GlobalNamespace::LightGroupTranslationZTransform> {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IEditTimeValidated
constexpr operator  GlobalNamespace::IEditTimeValidated() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~LightTranslationGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroup", modifiers: " const&", def_value: None }]
constexpr LightTranslationGroup(LightTranslationGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroup", modifiers: "&&", def_value: None }]
constexpr LightTranslationGroup(LightTranslationGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTranslationGroup(void* ptr) noexcept : GlobalNamespace::LightTransformGroup_3<GlobalNamespace::LightGroupTranslationXTransform,GlobalNamespace::LightGroupTranslationYTransform,GlobalNamespace::LightGroupTranslationZTransform>(ptr) {
}


  constexpr LightTranslationGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTranslationGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTranslationGroup& operator=(LightTranslationGroup&& o) noexcept = default;
  constexpr LightTranslationGroup& operator=(LightTranslationGroup const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get__xTranslationLimits, put=__set__xTranslationLimits))  _xTranslationLimits;

constexpr void __set__xTranslationLimits(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__xTranslationLimits() const;

 UnityEngine::Vector2 __declspec(property(get=__get__yTranslationLimits, put=__set__yTranslationLimits))  _yTranslationLimits;

constexpr void __set__yTranslationLimits(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__yTranslationLimits() const;

 UnityEngine::Vector2 __declspec(property(get=__get__zTranslationLimits, put=__set__zTranslationLimits))  _zTranslationLimits;

constexpr void __set__zTranslationLimits(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__zTranslationLimits() const;

 UnityEngine::Vector2 __declspec(property(get=__get__xDistributionLimits, put=__set__xDistributionLimits))  _xDistributionLimits;

constexpr void __set__xDistributionLimits(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__xDistributionLimits() const;

 UnityEngine::Vector2 __declspec(property(get=__get__yDistributionLimits, put=__set__yDistributionLimits))  _yDistributionLimits;

constexpr void __set__yDistributionLimits(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__yDistributionLimits() const;

 UnityEngine::Vector2 __declspec(property(get=__get__zDistributionLimits, put=__set__zDistributionLimits))  _zDistributionLimits;

constexpr void __set__zDistributionLimits(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__zDistributionLimits() const;


// Properties

 UnityEngine::Vector2 __declspec(property(get=get_xTranslationLimits))  xTranslationLimits;

 UnityEngine::Vector2 __declspec(property(get=get_yTranslationLimits))  yTranslationLimits;

 UnityEngine::Vector2 __declspec(property(get=get_zTranslationLimits))  zTranslationLimits;

 UnityEngine::Vector2 __declspec(property(get=get_xDistributionLimits))  xDistributionLimits;

 UnityEngine::Vector2 __declspec(property(get=get_yDistributionLimits))  yDistributionLimits;

 UnityEngine::Vector2 __declspec(property(get=get_zDistributionLimits))  zDistributionLimits;


// Methods

/// @brief Method get_xTranslationLimits addr 0x225f5dc size 0x8 virtual false final false
 UnityEngine::Vector2 get_xTranslationLimits() ;

/// @brief Method get_yTranslationLimits addr 0x225f5e4 size 0x8 virtual false final false
 UnityEngine::Vector2 get_yTranslationLimits() ;

/// @brief Method get_zTranslationLimits addr 0x225f5ec size 0x8 virtual false final false
 UnityEngine::Vector2 get_zTranslationLimits() ;

/// @brief Method get_xDistributionLimits addr 0x225f5f4 size 0x8 virtual false final false
 UnityEngine::Vector2 get_xDistributionLimits() ;

/// @brief Method get_yDistributionLimits addr 0x225f5fc size 0x8 virtual false final false
 UnityEngine::Vector2 get_yDistributionLimits() ;

/// @brief Method get_zDistributionLimits addr 0x225f604 size 0x8 virtual false final false
 UnityEngine::Vector2 get_zDistributionLimits() ;

/// @brief Method __Validate addr 0x225f60c size 0x21c virtual false final false
 bool __Validate() ;

static GlobalNamespace::LightTranslationGroup New_ctor() ;

/// @brief Method .ctor addr 0x225f828 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightTranslationGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightTranslationGroup, "", "LightTranslationGroup");
