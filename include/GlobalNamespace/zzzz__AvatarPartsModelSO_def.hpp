#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class AvatarMeshPartSO;
}
namespace GlobalNamespace {
class AvatarSpritePartSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPartsModelSO;
}
// Type: ::AvatarPartsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4772))
// CS Name: AvatarPartsModelSO
class CORDL_TYPE AvatarPartsModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AvatarPartsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModelSO", modifiers: " const&", def_value: None }]
constexpr AvatarPartsModelSO(AvatarPartsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartsModelSO", modifiers: "&&", def_value: None }]
constexpr AvatarPartsModelSO(AvatarPartsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPartsModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AvatarPartsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPartsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPartsModelSO& operator=(AvatarPartsModelSO&& o) noexcept = default;
  constexpr AvatarPartsModelSO& operator=(AvatarPartsModelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__headTops, put=__set__headTops))  _headTops;

constexpr void __set__headTops(::ArrayW<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __get__headTops() const;

 ::ArrayW<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=__get__eyes, put=__set__eyes))  _eyes;

constexpr void __set__eyes(::ArrayW<GlobalNamespace::AvatarSpritePartSO> value) ;

constexpr ::ArrayW<GlobalNamespace::AvatarSpritePartSO> __get__eyes() const;

 ::ArrayW<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=__get__mouths, put=__set__mouths))  _mouths;

constexpr void __set__mouths(::ArrayW<GlobalNamespace::AvatarSpritePartSO> value) ;

constexpr ::ArrayW<GlobalNamespace::AvatarSpritePartSO> __get__mouths() const;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__glasses, put=__set__glasses))  _glasses;

constexpr void __set__glasses(::ArrayW<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __get__glasses() const;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__facialHair, put=__set__facialHair))  _facialHair;

constexpr void __set__facialHair(::ArrayW<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __get__facialHair() const;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__hands, put=__set__hands))  _hands;

constexpr void __set__hands(::ArrayW<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __get__hands() const;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=__get__clothes, put=__set__clothes))  _clothes;

constexpr void __set__clothes(::ArrayW<GlobalNamespace::AvatarMeshPartSO> value) ;

constexpr ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __get__clothes() const;


// Properties

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_headTops))  headTops;

 ::ArrayW<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=get_Eyes))  Eyes;

 ::ArrayW<GlobalNamespace::AvatarSpritePartSO> __declspec(property(get=get_Mouths))  Mouths;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_Glasses))  Glasses;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_FacialHair))  FacialHair;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_Hands))  Hands;

 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> __declspec(property(get=get_Clothes))  Clothes;


// Methods

/// @brief Method get_headTops addr 0x2229934 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> get_headTops() ;

/// @brief Method get_Eyes addr 0x222993c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::AvatarSpritePartSO> get_Eyes() ;

/// @brief Method get_Mouths addr 0x2229944 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::AvatarSpritePartSO> get_Mouths() ;

/// @brief Method get_Glasses addr 0x222994c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> get_Glasses() ;

/// @brief Method get_FacialHair addr 0x2229954 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> get_FacialHair() ;

/// @brief Method get_Hands addr 0x222995c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> get_Hands() ;

/// @brief Method get_Clothes addr 0x2229964 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::AvatarMeshPartSO> get_Clothes() ;

static GlobalNamespace::AvatarPartsModelSO New_ctor() ;

/// @brief Method .ctor addr 0x222996c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarPartsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPartsModelSO, "", "AvatarPartsModelSO");
