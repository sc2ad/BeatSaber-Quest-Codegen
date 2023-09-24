#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarData;
}
// Type: ::AvatarData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4766))
// CS Name: AvatarData
class CORDL_TYPE AvatarData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~AvatarData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarData", modifiers: " const&", def_value: None }]
constexpr AvatarData(AvatarData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarData", modifiers: "&&", def_value: None }]
constexpr AvatarData(AvatarData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarData& operator=(AvatarData&& o) noexcept = default;
  constexpr AvatarData& operator=(AvatarData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__headTopId_k__BackingField, put=__set__headTopId_k__BackingField))  _headTopId_k__BackingField;

constexpr void __set__headTopId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__headTopId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__glassesId_k__BackingField, put=__set__glassesId_k__BackingField))  _glassesId_k__BackingField;

constexpr void __set__glassesId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__glassesId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__facialHairId_k__BackingField, put=__set__facialHairId_k__BackingField))  _facialHairId_k__BackingField;

constexpr void __set__facialHairId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__facialHairId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__handsId_k__BackingField, put=__set__handsId_k__BackingField))  _handsId_k__BackingField;

constexpr void __set__handsId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__handsId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__clothesId_k__BackingField, put=__set__clothesId_k__BackingField))  _clothesId_k__BackingField;

constexpr void __set__clothesId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__clothesId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__eyesId_k__BackingField, put=__set__eyesId_k__BackingField))  _eyesId_k__BackingField;

constexpr void __set__eyesId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__eyesId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__mouthId_k__BackingField, put=__set__mouthId_k__BackingField))  _mouthId_k__BackingField;

constexpr void __set__mouthId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__mouthId_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__headTopPrimaryColor_k__BackingField, put=__set__headTopPrimaryColor_k__BackingField))  _headTopPrimaryColor_k__BackingField;

constexpr void __set__headTopPrimaryColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__headTopPrimaryColor_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__headTopSecondaryColor_k__BackingField, put=__set__headTopSecondaryColor_k__BackingField))  _headTopSecondaryColor_k__BackingField;

constexpr void __set__headTopSecondaryColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__headTopSecondaryColor_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__glassesColor_k__BackingField, put=__set__glassesColor_k__BackingField))  _glassesColor_k__BackingField;

constexpr void __set__glassesColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__glassesColor_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__facialHairColor_k__BackingField, put=__set__facialHairColor_k__BackingField))  _facialHairColor_k__BackingField;

constexpr void __set__facialHairColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__facialHairColor_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__handsColor_k__BackingField, put=__set__handsColor_k__BackingField))  _handsColor_k__BackingField;

constexpr void __set__handsColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__handsColor_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__clothesPrimaryColor_k__BackingField, put=__set__clothesPrimaryColor_k__BackingField))  _clothesPrimaryColor_k__BackingField;

constexpr void __set__clothesPrimaryColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__clothesPrimaryColor_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__clothesSecondaryColor_k__BackingField, put=__set__clothesSecondaryColor_k__BackingField))  _clothesSecondaryColor_k__BackingField;

constexpr void __set__clothesSecondaryColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__clothesSecondaryColor_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__clothesDetailColor_k__BackingField, put=__set__clothesDetailColor_k__BackingField))  _clothesDetailColor_k__BackingField;

constexpr void __set__clothesDetailColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__clothesDetailColor_k__BackingField() const;

 ::StringW __declspec(property(get=__get__skinColorId_k__BackingField, put=__set__skinColorId_k__BackingField))  _skinColorId_k__BackingField;

constexpr void __set__skinColorId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__skinColorId_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_headTopId, put=set_headTopId))  headTopId;

 ::StringW __declspec(property(get=get_glassesId, put=set_glassesId))  glassesId;

 ::StringW __declspec(property(get=get_facialHairId, put=set_facialHairId))  facialHairId;

 ::StringW __declspec(property(get=get_handsId, put=set_handsId))  handsId;

 ::StringW __declspec(property(get=get_clothesId, put=set_clothesId))  clothesId;

 ::StringW __declspec(property(get=get_eyesId, put=set_eyesId))  eyesId;

 ::StringW __declspec(property(get=get_mouthId, put=set_mouthId))  mouthId;

 UnityEngine::Color __declspec(property(get=get_headTopPrimaryColor, put=set_headTopPrimaryColor))  headTopPrimaryColor;

 UnityEngine::Color __declspec(property(get=get_headTopSecondaryColor, put=set_headTopSecondaryColor))  headTopSecondaryColor;

 UnityEngine::Color __declspec(property(get=get_glassesColor, put=set_glassesColor))  glassesColor;

 UnityEngine::Color __declspec(property(get=get_facialHairColor, put=set_facialHairColor))  facialHairColor;

 UnityEngine::Color __declspec(property(get=get_handsColor, put=set_handsColor))  handsColor;

 UnityEngine::Color __declspec(property(get=get_clothesPrimaryColor, put=set_clothesPrimaryColor))  clothesPrimaryColor;

 UnityEngine::Color __declspec(property(get=get_clothesSecondaryColor, put=set_clothesSecondaryColor))  clothesSecondaryColor;

 UnityEngine::Color __declspec(property(get=get_clothesDetailColor, put=set_clothesDetailColor))  clothesDetailColor;

 ::StringW __declspec(property(get=get_skinColorId, put=set_skinColorId))  skinColorId;


// Methods

/// @brief Method get_headTopId addr 0x222701c size 0x8 virtual false final false
 ::StringW get_headTopId() ;

/// @brief Method set_headTopId addr 0x2227024 size 0x8 virtual false final false
 void set_headTopId(::StringW value) ;

/// @brief Method get_glassesId addr 0x222702c size 0x8 virtual false final false
 ::StringW get_glassesId() ;

/// @brief Method set_glassesId addr 0x2227034 size 0x8 virtual false final false
 void set_glassesId(::StringW value) ;

/// @brief Method get_facialHairId addr 0x222703c size 0x8 virtual false final false
 ::StringW get_facialHairId() ;

/// @brief Method set_facialHairId addr 0x2227044 size 0x8 virtual false final false
 void set_facialHairId(::StringW value) ;

/// @brief Method get_handsId addr 0x222704c size 0x8 virtual false final false
 ::StringW get_handsId() ;

/// @brief Method set_handsId addr 0x2227054 size 0x8 virtual false final false
 void set_handsId(::StringW value) ;

/// @brief Method get_clothesId addr 0x222705c size 0x8 virtual false final false
 ::StringW get_clothesId() ;

/// @brief Method set_clothesId addr 0x2227064 size 0x8 virtual false final false
 void set_clothesId(::StringW value) ;

/// @brief Method get_eyesId addr 0x222706c size 0x8 virtual false final false
 ::StringW get_eyesId() ;

/// @brief Method set_eyesId addr 0x2227074 size 0x8 virtual false final false
 void set_eyesId(::StringW value) ;

/// @brief Method get_mouthId addr 0x222707c size 0x8 virtual false final false
 ::StringW get_mouthId() ;

/// @brief Method set_mouthId addr 0x2227084 size 0x8 virtual false final false
 void set_mouthId(::StringW value) ;

/// @brief Method get_headTopPrimaryColor addr 0x222708c size 0xc virtual false final false
 UnityEngine::Color get_headTopPrimaryColor() ;

/// @brief Method set_headTopPrimaryColor addr 0x2227098 size 0xc virtual false final false
 void set_headTopPrimaryColor(UnityEngine::Color value) ;

/// @brief Method get_headTopSecondaryColor addr 0x22270a4 size 0xc virtual false final false
 UnityEngine::Color get_headTopSecondaryColor() ;

/// @brief Method set_headTopSecondaryColor addr 0x22270b0 size 0xc virtual false final false
 void set_headTopSecondaryColor(UnityEngine::Color value) ;

/// @brief Method get_glassesColor addr 0x22270bc size 0xc virtual false final false
 UnityEngine::Color get_glassesColor() ;

/// @brief Method set_glassesColor addr 0x22270c8 size 0xc virtual false final false
 void set_glassesColor(UnityEngine::Color value) ;

/// @brief Method get_facialHairColor addr 0x22270d4 size 0xc virtual false final false
 UnityEngine::Color get_facialHairColor() ;

/// @brief Method set_facialHairColor addr 0x22270e0 size 0xc virtual false final false
 void set_facialHairColor(UnityEngine::Color value) ;

/// @brief Method get_handsColor addr 0x22270ec size 0xc virtual false final false
 UnityEngine::Color get_handsColor() ;

/// @brief Method set_handsColor addr 0x22270f8 size 0xc virtual false final false
 void set_handsColor(UnityEngine::Color value) ;

/// @brief Method get_clothesPrimaryColor addr 0x2227104 size 0xc virtual false final false
 UnityEngine::Color get_clothesPrimaryColor() ;

/// @brief Method set_clothesPrimaryColor addr 0x2227110 size 0xc virtual false final false
 void set_clothesPrimaryColor(UnityEngine::Color value) ;

/// @brief Method get_clothesSecondaryColor addr 0x222711c size 0xc virtual false final false
 UnityEngine::Color get_clothesSecondaryColor() ;

/// @brief Method set_clothesSecondaryColor addr 0x2227128 size 0xc virtual false final false
 void set_clothesSecondaryColor(UnityEngine::Color value) ;

/// @brief Method get_clothesDetailColor addr 0x2227134 size 0xc virtual false final false
 UnityEngine::Color get_clothesDetailColor() ;

/// @brief Method set_clothesDetailColor addr 0x2227140 size 0xc virtual false final false
 void set_clothesDetailColor(UnityEngine::Color value) ;

/// @brief Method get_skinColorId addr 0x222714c size 0x8 virtual false final false
 ::StringW get_skinColorId() ;

/// @brief Method set_skinColorId addr 0x2227154 size 0x8 virtual false final false
 void set_skinColorId(::StringW value) ;

static GlobalNamespace::AvatarData New_ctor() ;

/// @brief Method .ctor addr 0x222715c size 0x8 virtual false final false
 void _ctor() ;

static GlobalNamespace::AvatarData New_ctor(::StringW headTopId, UnityEngine::Color headTopPrimaryColor, UnityEngine::Color headTopSecondaryColor, ::StringW glassesId, UnityEngine::Color glassesColor, ::StringW facialHairId, UnityEngine::Color facialHairColor, ::StringW handsId, UnityEngine::Color handsColor, ::StringW clothesId, UnityEngine::Color clothesPrimaryColor, UnityEngine::Color clothesSecondaryColor, UnityEngine::Color clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId) ;

/// @brief Method .ctor addr 0x2227164 size 0x138 virtual false final false
 void _ctor(::StringW headTopId, UnityEngine::Color headTopPrimaryColor, UnityEngine::Color headTopSecondaryColor, ::StringW glassesId, UnityEngine::Color glassesColor, ::StringW facialHairId, UnityEngine::Color facialHairColor, ::StringW handsId, UnityEngine::Color handsColor, ::StringW clothesId, UnityEngine::Color clothesPrimaryColor, UnityEngine::Color clothesSecondaryColor, UnityEngine::Color clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId) ;

/// @brief Method Clone addr 0x222729c size 0x248 virtual false final false
 GlobalNamespace::AvatarData Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarData, "", "AvatarData");
