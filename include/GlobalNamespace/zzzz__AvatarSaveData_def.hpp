#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarSaveData;
}
// Type: ::AvatarSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4774))
// CS Name: AvatarSaveData
class CORDL_TYPE AvatarSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~AvatarSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSaveData", modifiers: " const&", def_value: None }]
constexpr AvatarSaveData(AvatarSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSaveData", modifiers: "&&", def_value: None }]
constexpr AvatarSaveData(AvatarSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarSaveData& operator=(AvatarSaveData&& o) noexcept = default;
  constexpr AvatarSaveData& operator=(AvatarSaveData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_headTopId, put=__set_headTopId))  headTopId;

constexpr void __set_headTopId(::StringW value) ;

constexpr ::StringW __get_headTopId() const;

 ::StringW __declspec(property(get=__get_glassesId, put=__set_glassesId))  glassesId;

constexpr void __set_glassesId(::StringW value) ;

constexpr ::StringW __get_glassesId() const;

 ::StringW __declspec(property(get=__get_facialHairId, put=__set_facialHairId))  facialHairId;

constexpr void __set_facialHairId(::StringW value) ;

constexpr ::StringW __get_facialHairId() const;

 ::StringW __declspec(property(get=__get_handsId, put=__set_handsId))  handsId;

constexpr void __set_handsId(::StringW value) ;

constexpr ::StringW __get_handsId() const;

 ::StringW __declspec(property(get=__get_clothesId, put=__set_clothesId))  clothesId;

constexpr void __set_clothesId(::StringW value) ;

constexpr ::StringW __get_clothesId() const;

 ::StringW __declspec(property(get=__get_skinColorId, put=__set_skinColorId))  skinColorId;

constexpr void __set_skinColorId(::StringW value) ;

constexpr ::StringW __get_skinColorId() const;

 ::StringW __declspec(property(get=__get_mouthId, put=__set_mouthId))  mouthId;

constexpr void __set_mouthId(::StringW value) ;

constexpr ::StringW __get_mouthId() const;

 ::StringW __declspec(property(get=__get_eyesId, put=__set_eyesId))  eyesId;

constexpr void __set_eyesId(::StringW value) ;

constexpr ::StringW __get_eyesId() const;

 UnityEngine::Color __declspec(property(get=__get_headTopPrimaryColor, put=__set_headTopPrimaryColor))  headTopPrimaryColor;

constexpr void __set_headTopPrimaryColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_headTopPrimaryColor() const;

 UnityEngine::Color __declspec(property(get=__get_headTopSecondaryColor, put=__set_headTopSecondaryColor))  headTopSecondaryColor;

constexpr void __set_headTopSecondaryColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_headTopSecondaryColor() const;

 UnityEngine::Color __declspec(property(get=__get_glassesColor, put=__set_glassesColor))  glassesColor;

constexpr void __set_glassesColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_glassesColor() const;

 UnityEngine::Color __declspec(property(get=__get_facialHairColor, put=__set_facialHairColor))  facialHairColor;

constexpr void __set_facialHairColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_facialHairColor() const;

 UnityEngine::Color __declspec(property(get=__get_handsColor, put=__set_handsColor))  handsColor;

constexpr void __set_handsColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_handsColor() const;

 UnityEngine::Color __declspec(property(get=__get_clothesPrimaryColor, put=__set_clothesPrimaryColor))  clothesPrimaryColor;

constexpr void __set_clothesPrimaryColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_clothesPrimaryColor() const;

 UnityEngine::Color __declspec(property(get=__get_clothesSecondaryColor, put=__set_clothesSecondaryColor))  clothesSecondaryColor;

constexpr void __set_clothesSecondaryColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_clothesSecondaryColor() const;

 UnityEngine::Color __declspec(property(get=__get_clothesDetailColor, put=__set_clothesDetailColor))  clothesDetailColor;

constexpr void __set_clothesDetailColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_clothesDetailColor() const;


// Methods

static GlobalNamespace::AvatarSaveData New_ctor() ;

/// @brief Method .ctor addr 0x22277fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarSaveData, "", "AvatarSaveData");
