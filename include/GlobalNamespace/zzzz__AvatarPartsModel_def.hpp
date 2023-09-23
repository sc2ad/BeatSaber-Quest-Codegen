#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class SkinColorSetSO;
}
namespace GlobalNamespace {
class AvatarMeshPartSO;
}
namespace GlobalNamespace {
class SkinColorSO;
}
namespace GlobalNamespace {
class AvatarSpritePartSO;
}
namespace GlobalNamespace {
template<typename T>
class AvatarPartCollection_1;
}
namespace GlobalNamespace {
class AvatarPartsModelSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPartsModel;
}
// Type: ::AvatarPartsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4770))
// CS Name: AvatarPartsModel
class CORDL_TYPE AvatarPartsModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~AvatarPartsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModel", modifiers: " const&", def_value: None }]
constexpr AvatarPartsModel(AvatarPartsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModel", modifiers: "&&", def_value: None }]
constexpr AvatarPartsModel(AvatarPartsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPartsModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarPartsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPartsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPartsModel& operator=(AvatarPartsModel&& o) noexcept = default;
  constexpr AvatarPartsModel& operator=(AvatarPartsModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__headTopCollection_k__BackingField, put=__set__headTopCollection_k__BackingField))  _headTopCollection_k__BackingField;

constexpr void __set__headTopCollection_k__BackingField(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __get__headTopCollection_k__BackingField() const;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=__get__eyesCollection_k__BackingField, put=__set__eyesCollection_k__BackingField))  _eyesCollection_k__BackingField;

constexpr void __set__eyesCollection_k__BackingField(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> value) ;

constexpr GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> __get__eyesCollection_k__BackingField() const;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=__get__mouthCollection_k__BackingField, put=__set__mouthCollection_k__BackingField))  _mouthCollection_k__BackingField;

constexpr void __set__mouthCollection_k__BackingField(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> value) ;

constexpr GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> __get__mouthCollection_k__BackingField() const;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__glassesCollection_k__BackingField, put=__set__glassesCollection_k__BackingField))  _glassesCollection_k__BackingField;

constexpr void __set__glassesCollection_k__BackingField(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __get__glassesCollection_k__BackingField() const;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__facialHairCollection_k__BackingField, put=__set__facialHairCollection_k__BackingField))  _facialHairCollection_k__BackingField;

constexpr void __set__facialHairCollection_k__BackingField(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __get__facialHairCollection_k__BackingField() const;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__handsCollection_k__BackingField, put=__set__handsCollection_k__BackingField))  _handsCollection_k__BackingField;

constexpr void __set__handsCollection_k__BackingField(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __get__handsCollection_k__BackingField() const;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__clothesCollection_k__BackingField, put=__set__clothesCollection_k__BackingField))  _clothesCollection_k__BackingField;

constexpr void __set__clothesCollection_k__BackingField(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __get__clothesCollection_k__BackingField() const;

 ::ArrayW<GlobalNamespace::SkinColorSO> __declspec(property(get=__get__skinColors_k__BackingField, put=__set__skinColors_k__BackingField))  _skinColors_k__BackingField;

constexpr void __set__skinColors_k__BackingField(::ArrayW<GlobalNamespace::SkinColorSO> value) ;

constexpr ::ArrayW<GlobalNamespace::SkinColorSO> __get__skinColors_k__BackingField() const;

 System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get__indexById, put=__set__indexById))  _indexById;

constexpr void __set__indexById(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get__indexById() const;


// Properties

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_headTopCollection))  headTopCollection;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=get_eyesCollection))  eyesCollection;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=get_mouthCollection))  mouthCollection;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_glassesCollection))  glassesCollection;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_facialHairCollection))  facialHairCollection;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_handsCollection))  handsCollection;

 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_clothesCollection))  clothesCollection;

 ::ArrayW<GlobalNamespace::SkinColorSO> __declspec(property(get=get_skinColors))  skinColors;


// Methods

/// @brief Method get_headTopCollection addr 0x22295dc size 0x8 virtual false final false
 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> get_headTopCollection() ;

/// @brief Method get_eyesCollection addr 0x22295e4 size 0x8 virtual false final false
 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> get_eyesCollection() ;

/// @brief Method get_mouthCollection addr 0x22295ec size 0x8 virtual false final false
 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO> get_mouthCollection() ;

/// @brief Method get_glassesCollection addr 0x22295f4 size 0x8 virtual false final false
 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> get_glassesCollection() ;

/// @brief Method get_facialHairCollection addr 0x22295fc size 0x8 virtual false final false
 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> get_facialHairCollection() ;

/// @brief Method get_handsCollection addr 0x2229604 size 0x8 virtual false final false
 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> get_handsCollection() ;

/// @brief Method get_clothesCollection addr 0x222960c size 0x8 virtual false final false
 GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO> get_clothesCollection() ;

/// @brief Method get_skinColors addr 0x2229614 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::SkinColorSO> get_skinColors() ;

// Ctor Parameters [CppParam { name: "avatarPartData", ty: "GlobalNamespace::AvatarPartsModelSO", modifiers: "", def_value: None }, CppParam { name: "skinColorSet", ty: "GlobalNamespace::SkinColorSetSO", modifiers: "", def_value: None }]
explicit AvatarPartsModel(GlobalNamespace::AvatarPartsModelSO avatarPartData, GlobalNamespace::SkinColorSetSO skinColorSet) ;

/// @brief Method .ctor addr 0x222961c size 0x260 virtual false final false
 void _ctor(GlobalNamespace::AvatarPartsModelSO avatarPartData, GlobalNamespace::SkinColorSetSO skinColorSet) ;

/// @brief Method GetColorIndexById addr 0x222987c size 0x84 virtual false final false
 int32_t GetColorIndexById(::StringW id) ;

/// @brief Method GetSkinColorById addr 0x2229900 size 0x34 virtual false final false
 GlobalNamespace::SkinColorSO GetSkinColorById(::StringW id) ;

/// @brief Method GetRandomColor addr 0x2227b00 size 0x40 virtual false final false
 GlobalNamespace::SkinColorSO GetRandomColor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarPartsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPartsModel, "", "AvatarPartsModel");
