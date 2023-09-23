#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
struct RootMotion__BipedNaming__BoneSide;
}
namespace RootMotion {
struct RootMotion__BipedNaming__BoneType;
}
namespace RootMotion {
class BipedNaming;
}
// Type: ::BoneType
namespace RootMotion {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12426))
// CS Name: RootMotion.BipedNaming::BoneType
struct CORDL_TYPE RootMotion__BipedNaming__BoneType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__BipedNaming__BoneType(int32_t value__) noexcept;


                    constexpr RootMotion__BipedNaming__BoneType(RootMotion__BipedNaming__BoneType const&) = default;
                    constexpr RootMotion__BipedNaming__BoneType(RootMotion__BipedNaming__BoneType&&) = default;
                    constexpr RootMotion__BipedNaming__BoneType& operator=(RootMotion__BipedNaming__BoneType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__BipedNaming__BoneType& operator=(RootMotion__BipedNaming__BoneType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__BipedNaming__BoneType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__BipedNaming__BoneType_Unwrapped : int32_t {
__Unassigned = 0,
__Spine = 1,
__Head = 2,
__Arm = 3,
__Leg = 4,
__Tail = 5,
__Eye = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__BipedNaming__BoneType_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__BipedNaming__BoneType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unassigned offset 0
static RootMotion::RootMotion__BipedNaming__BoneType const Unassigned;

/// @brief Field Spine offset 0
static RootMotion::RootMotion__BipedNaming__BoneType const Spine;

/// @brief Field Head offset 0
static RootMotion::RootMotion__BipedNaming__BoneType const Head;

/// @brief Field Arm offset 0
static RootMotion::RootMotion__BipedNaming__BoneType const Arm;

/// @brief Field Leg offset 0
static RootMotion::RootMotion__BipedNaming__BoneType const Leg;

/// @brief Field Tail offset 0
static RootMotion::RootMotion__BipedNaming__BoneType const Tail;

/// @brief Field Eye offset 0
static RootMotion::RootMotion__BipedNaming__BoneType const Eye;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion
// Type: ::BoneSide
namespace RootMotion {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12427))
// CS Name: RootMotion.BipedNaming::BoneSide
struct CORDL_TYPE RootMotion__BipedNaming__BoneSide : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__BipedNaming__BoneSide(int32_t value__) noexcept;


                    constexpr RootMotion__BipedNaming__BoneSide(RootMotion__BipedNaming__BoneSide const&) = default;
                    constexpr RootMotion__BipedNaming__BoneSide(RootMotion__BipedNaming__BoneSide&&) = default;
                    constexpr RootMotion__BipedNaming__BoneSide& operator=(RootMotion__BipedNaming__BoneSide const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__BipedNaming__BoneSide& operator=(RootMotion__BipedNaming__BoneSide&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__BipedNaming__BoneSide(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__BipedNaming__BoneSide_Unwrapped : int32_t {
__Center = 0,
__Left = 1,
__Right = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__BipedNaming__BoneSide_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__BipedNaming__BoneSide_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Center offset 0
static RootMotion::RootMotion__BipedNaming__BoneSide const Center;

/// @brief Field Left offset 0
static RootMotion::RootMotion__BipedNaming__BoneSide const Left;

/// @brief Field Right offset 0
static RootMotion::RootMotion__BipedNaming__BoneSide const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion
// Type: RootMotion::BipedNaming
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12428))
// CS Name: RootMotion.BipedNaming
class CORDL_TYPE BipedNaming : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BoneSide = RootMotion::RootMotion__BipedNaming__BoneSide;

using BoneType = RootMotion::RootMotion__BipedNaming__BoneType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BipedNaming() = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedNaming", modifiers: " const&", def_value: None }]
constexpr BipedNaming(BipedNaming const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedNaming", modifiers: "&&", def_value: None }]
constexpr BipedNaming(BipedNaming&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BipedNaming(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BipedNaming& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BipedNaming& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BipedNaming& operator=(BipedNaming&& o) noexcept = default;
  constexpr BipedNaming& operator=(BipedNaming const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_typeLeft, put=__set_typeLeft))  typeLeft;

static void __set_typeLeft(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeLeft() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeRight, put=__set_typeRight))  typeRight;

static void __set_typeRight(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeRight() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeSpine, put=__set_typeSpine))  typeSpine;

static void __set_typeSpine(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeSpine() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeHead, put=__set_typeHead))  typeHead;

static void __set_typeHead(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeHead() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeArm, put=__set_typeArm))  typeArm;

static void __set_typeArm(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeArm() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeLeg, put=__set_typeLeg))  typeLeg;

static void __set_typeLeg(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeLeg() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeTail, put=__set_typeTail))  typeTail;

static void __set_typeTail(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeTail() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeEye, put=__set_typeEye))  typeEye;

static void __set_typeEye(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeEye() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeExclude, put=__set_typeExclude))  typeExclude;

static void __set_typeExclude(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeExclude() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeExcludeSpine, put=__set_typeExcludeSpine))  typeExcludeSpine;

static void __set_typeExcludeSpine(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeExcludeSpine() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeExcludeHead, put=__set_typeExcludeHead))  typeExcludeHead;

static void __set_typeExcludeHead(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeExcludeHead() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeExcludeArm, put=__set_typeExcludeArm))  typeExcludeArm;

static void __set_typeExcludeArm(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeExcludeArm() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeExcludeLeg, put=__set_typeExcludeLeg))  typeExcludeLeg;

static void __set_typeExcludeLeg(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeExcludeLeg() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeExcludeTail, put=__set_typeExcludeTail))  typeExcludeTail;

static void __set_typeExcludeTail(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeExcludeTail() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_typeExcludeEye, put=__set_typeExcludeEye))  typeExcludeEye;

static void __set_typeExcludeEye(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_typeExcludeEye() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

static void __set_pelvis(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_pelvis() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_hand, put=__set_hand))  hand;

static void __set_hand(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_hand() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_foot, put=__set_foot))  foot;

static void __set_foot(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_foot() ;


// Methods

/// @brief Method GetBonesOfType addr 0x11ac0ec size 0x1ac virtual false final false
static ::ArrayW<UnityEngine::Transform> GetBonesOfType(RootMotion::RootMotion__BipedNaming__BoneType boneType, ::ArrayW<UnityEngine::Transform> bones) ;

/// @brief Method GetBonesOfSide addr 0x11ac3b0 size 0x1ac virtual false final false
static ::ArrayW<UnityEngine::Transform> GetBonesOfSide(RootMotion::RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<UnityEngine::Transform> bones) ;

/// @brief Method GetBonesOfTypeAndSide addr 0x11ac5e4 size 0x74 virtual false final false
static ::ArrayW<UnityEngine::Transform> GetBonesOfTypeAndSide(RootMotion::RootMotion__BipedNaming__BoneType boneType, RootMotion::RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<UnityEngine::Transform> bones) ;

/// @brief Method GetFirstBoneOfTypeAndSide addr 0x11ac658 size 0x94 virtual false final false
static UnityEngine::Transform GetFirstBoneOfTypeAndSide(RootMotion::RootMotion__BipedNaming__BoneType boneType, RootMotion::RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<UnityEngine::Transform> bones) ;

/// @brief Method GetNamingMatch addr 0x11ac6ec size 0x114 virtual false final false
static UnityEngine::Transform GetNamingMatch(::ArrayW<UnityEngine::Transform> transforms, ::ArrayW<::ArrayW<::StringW>> namings) ;

/// @brief Method GetBoneType addr 0x11ac298 size 0x118 virtual false final false
static RootMotion::RootMotion__BipedNaming__BoneType GetBoneType(::StringW boneName) ;

/// @brief Method GetBoneSide addr 0x11ac55c size 0x88 virtual false final false
static RootMotion::RootMotion__BipedNaming__BoneSide GetBoneSide(::StringW boneName) ;

/// @brief Method GetBone addr 0x11ace24 size 0x80 virtual false final false
static UnityEngine::Transform GetBone(::ArrayW<UnityEngine::Transform> transforms, RootMotion::RootMotion__BipedNaming__BoneType boneType, RootMotion::RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<::ArrayW<::StringW>> namings) ;

/// @brief Method isLeft addr 0x11acc7c size 0xd4 virtual false final false
static bool isLeft(::StringW boneName) ;

/// @brief Method isRight addr 0x11acd50 size 0xd4 virtual false final false
static bool isRight(::StringW boneName) ;

/// @brief Method isSpine addr 0x11ac8d4 size 0x9c virtual false final false
static bool isSpine(::StringW boneName) ;

/// @brief Method isHead addr 0x11ac970 size 0x9c virtual false final false
static bool isHead(::StringW boneName) ;

/// @brief Method isArm addr 0x11aca0c size 0x9c virtual false final false
static bool isArm(::StringW boneName) ;

/// @brief Method isLeg addr 0x11acaa8 size 0x9c virtual false final false
static bool isLeg(::StringW boneName) ;

/// @brief Method isTail addr 0x11acb44 size 0x9c virtual false final false
static bool isTail(::StringW boneName) ;

/// @brief Method isEye addr 0x11acbe0 size 0x9c virtual false final false
static bool isEye(::StringW boneName) ;

/// @brief Method isTypeExclude addr 0x11ad00c size 0x60 virtual false final false
static bool isTypeExclude(::StringW boneName) ;

/// @brief Method matchesNaming addr 0x11ac800 size 0xd4 virtual false final false
static bool matchesNaming(::StringW boneName, ::ArrayW<::StringW> namingConvention) ;

/// @brief Method excludesNaming addr 0x11acf88 size 0x84 virtual false final false
static bool excludesNaming(::StringW boneName, ::ArrayW<::StringW> namingConvention) ;

/// @brief Method matchesLastLetter addr 0x11ad06c size 0xc0 virtual false final false
static bool matchesLastLetter(::StringW boneName, ::ArrayW<::StringW> namingConvention) ;

/// @brief Method LastLetterIs addr 0x11ad12c size 0x34 virtual false final false
static bool LastLetterIs(::StringW boneName, ::StringW letter) ;

/// @brief Method firstLetter addr 0x11acf14 size 0x74 virtual false final false
static ::StringW firstLetter(::StringW boneName) ;

/// @brief Method lastLetter addr 0x11acea4 size 0x70 virtual false final false
static ::StringW lastLetter(::StringW boneName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
DEFINE_IL2CPP_ARG_TYPE(RootMotion::RootMotion__BipedNaming__BoneSide, "RootMotion", "BipedNaming/BoneSide");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::RootMotion__BipedNaming__BoneType, "RootMotion", "BipedNaming/BoneType");
NEED_NO_BOX(RootMotion::BipedNaming);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedNaming, "RootMotion", "BipedNaming");
