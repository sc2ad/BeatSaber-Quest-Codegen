#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct SkeletonBone;
}
namespace UnityEngine {
struct HumanBone;
}
// Forward declare root types
namespace UnityEngine {
struct HumanDescription;
}
// Type: UnityEngine::HumanDescription
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15026))
// CS Name: UnityEngine.HumanDescription
struct CORDL_TYPE HumanDescription : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "human", ty: "::ArrayW<UnityEngine::HumanBone>", modifiers: "", def_value: None }, CppParam { name: "skeleton", ty: "::ArrayW<UnityEngine::SkeletonBone>", modifiers: "", def_value: None }, CppParam { name: "m_ArmTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ForeArmTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UpperLegTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LegTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ArmStretch", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LegStretch", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_FeetSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_GlobalScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RootMotionBoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_HasTranslationDoF", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_HasExtraRoot", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SkeletonHasParents", ty: "bool", modifiers: "", def_value: None }]
constexpr HumanDescription(::ArrayW<UnityEngine::HumanBone> human, ::ArrayW<UnityEngine::SkeletonBone> skeleton, float_t m_ArmTwist, float_t m_ForeArmTwist, float_t m_UpperLegTwist, float_t m_LegTwist, float_t m_ArmStretch, float_t m_LegStretch, float_t m_FeetSpacing, float_t m_GlobalScale, ::StringW m_RootMotionBoneName, bool m_HasTranslationDoF, bool m_HasExtraRoot, bool m_SkeletonHasParents) noexcept;


                    constexpr HumanDescription(HumanDescription const&) = default;
                    constexpr HumanDescription(HumanDescription&&) = default;
                    constexpr HumanDescription& operator=(HumanDescription const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HumanDescription& operator=(HumanDescription&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HumanDescription(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::HumanBone> __declspec(property(get=__get_human, put=__set_human))  human;

constexpr void __set_human(::ArrayW<UnityEngine::HumanBone> value) ;

constexpr ::ArrayW<UnityEngine::HumanBone> __get_human() const;

 ::ArrayW<UnityEngine::SkeletonBone> __declspec(property(get=__get_skeleton, put=__set_skeleton))  skeleton;

constexpr void __set_skeleton(::ArrayW<UnityEngine::SkeletonBone> value) ;

constexpr ::ArrayW<UnityEngine::SkeletonBone> __get_skeleton() const;

 float_t __declspec(property(get=__get_m_ArmTwist, put=__set_m_ArmTwist))  m_ArmTwist;

constexpr void __set_m_ArmTwist(float_t value) ;

constexpr float_t __get_m_ArmTwist() const;

 float_t __declspec(property(get=__get_m_ForeArmTwist, put=__set_m_ForeArmTwist))  m_ForeArmTwist;

constexpr void __set_m_ForeArmTwist(float_t value) ;

constexpr float_t __get_m_ForeArmTwist() const;

 float_t __declspec(property(get=__get_m_UpperLegTwist, put=__set_m_UpperLegTwist))  m_UpperLegTwist;

constexpr void __set_m_UpperLegTwist(float_t value) ;

constexpr float_t __get_m_UpperLegTwist() const;

 float_t __declspec(property(get=__get_m_LegTwist, put=__set_m_LegTwist))  m_LegTwist;

constexpr void __set_m_LegTwist(float_t value) ;

constexpr float_t __get_m_LegTwist() const;

 float_t __declspec(property(get=__get_m_ArmStretch, put=__set_m_ArmStretch))  m_ArmStretch;

constexpr void __set_m_ArmStretch(float_t value) ;

constexpr float_t __get_m_ArmStretch() const;

 float_t __declspec(property(get=__get_m_LegStretch, put=__set_m_LegStretch))  m_LegStretch;

constexpr void __set_m_LegStretch(float_t value) ;

constexpr float_t __get_m_LegStretch() const;

 float_t __declspec(property(get=__get_m_FeetSpacing, put=__set_m_FeetSpacing))  m_FeetSpacing;

constexpr void __set_m_FeetSpacing(float_t value) ;

constexpr float_t __get_m_FeetSpacing() const;

 float_t __declspec(property(get=__get_m_GlobalScale, put=__set_m_GlobalScale))  m_GlobalScale;

constexpr void __set_m_GlobalScale(float_t value) ;

constexpr float_t __get_m_GlobalScale() const;

 ::StringW __declspec(property(get=__get_m_RootMotionBoneName, put=__set_m_RootMotionBoneName))  m_RootMotionBoneName;

constexpr void __set_m_RootMotionBoneName(::StringW value) ;

constexpr ::StringW __get_m_RootMotionBoneName() const;

 bool __declspec(property(get=__get_m_HasTranslationDoF, put=__set_m_HasTranslationDoF))  m_HasTranslationDoF;

constexpr void __set_m_HasTranslationDoF(bool value) ;

constexpr bool __get_m_HasTranslationDoF() const;

 bool __declspec(property(get=__get_m_HasExtraRoot, put=__set_m_HasExtraRoot))  m_HasExtraRoot;

constexpr void __set_m_HasExtraRoot(bool value) ;

constexpr bool __get_m_HasExtraRoot() const;

 bool __declspec(property(get=__get_m_SkeletonHasParents, put=__set_m_SkeletonHasParents))  m_SkeletonHasParents;

constexpr void __set_m_SkeletonHasParents(bool value) ;

constexpr bool __get_m_SkeletonHasParents() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanDescription, "UnityEngine", "HumanDescription");
