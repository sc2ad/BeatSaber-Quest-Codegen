#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
// Type: UnityEngine::AnimatorTransitionInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15051))
// CS Name: UnityEngine.AnimatorTransitionInfo
struct CORDL_TYPE AnimatorTransitionInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserName", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_HasFixedDuration", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnyState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_TransitionType", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorTransitionInfo(int32_t m_FullPath, int32_t m_UserName, int32_t m_Name, bool m_HasFixedDuration, float_t m_Duration, float_t m_NormalizedTime, bool m_AnyState, int32_t m_TransitionType) noexcept;


                    constexpr AnimatorTransitionInfo(AnimatorTransitionInfo const&) = default;
                    constexpr AnimatorTransitionInfo(AnimatorTransitionInfo&&) = default;
                    constexpr AnimatorTransitionInfo& operator=(AnimatorTransitionInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorTransitionInfo& operator=(AnimatorTransitionInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorTransitionInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_FullPath, put=__set_m_FullPath))  m_FullPath;

constexpr void __set_m_FullPath(int32_t value) ;

constexpr int32_t __get_m_FullPath() const;

 int32_t __declspec(property(get=__get_m_UserName, put=__set_m_UserName))  m_UserName;

constexpr void __set_m_UserName(int32_t value) ;

constexpr int32_t __get_m_UserName() const;

 int32_t __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(int32_t value) ;

constexpr int32_t __get_m_Name() const;

 bool __declspec(property(get=__get_m_HasFixedDuration, put=__set_m_HasFixedDuration))  m_HasFixedDuration;

constexpr void __set_m_HasFixedDuration(bool value) ;

constexpr bool __get_m_HasFixedDuration() const;

 float_t __declspec(property(get=__get_m_Duration, put=__set_m_Duration))  m_Duration;

constexpr void __set_m_Duration(float_t value) ;

constexpr float_t __get_m_Duration() const;

 float_t __declspec(property(get=__get_m_NormalizedTime, put=__set_m_NormalizedTime))  m_NormalizedTime;

constexpr void __set_m_NormalizedTime(float_t value) ;

constexpr float_t __get_m_NormalizedTime() const;

 bool __declspec(property(get=__get_m_AnyState, put=__set_m_AnyState))  m_AnyState;

constexpr void __set_m_AnyState(bool value) ;

constexpr bool __get_m_AnyState() const;

 int32_t __declspec(property(get=__get_m_TransitionType, put=__set_m_TransitionType))  m_TransitionType;

constexpr void __set_m_TransitionType(int32_t value) ;

constexpr int32_t __get_m_TransitionType() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorTransitionInfo, "UnityEngine", "AnimatorTransitionInfo");
