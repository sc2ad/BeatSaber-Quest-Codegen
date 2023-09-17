#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AnimatorStateInfo;
}
// Type: UnityEngine::AnimatorStateInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15050))
// CS Name: UnityEngine.AnimatorStateInfo
struct CORDL_TYPE AnimatorStateInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorStateInfo(int32_t m_Name, int32_t m_Path, int32_t m_FullPath, float_t m_NormalizedTime, float_t m_Length, float_t m_Speed, float_t m_SpeedMultiplier, int32_t m_Tag, int32_t m_Loop) noexcept;


                    constexpr AnimatorStateInfo(AnimatorStateInfo const&) = default;
                    constexpr AnimatorStateInfo(AnimatorStateInfo&&) = default;
                    constexpr AnimatorStateInfo& operator=(AnimatorStateInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorStateInfo& operator=(AnimatorStateInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x24};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorStateInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(int32_t value) ;

constexpr int32_t __get_m_Name() const;

 int32_t __declspec(property(get=__get_m_Path, put=__set_m_Path))  m_Path;

constexpr void __set_m_Path(int32_t value) ;

constexpr int32_t __get_m_Path() const;

 int32_t __declspec(property(get=__get_m_FullPath, put=__set_m_FullPath))  m_FullPath;

constexpr void __set_m_FullPath(int32_t value) ;

constexpr int32_t __get_m_FullPath() const;

 float_t __declspec(property(get=__get_m_NormalizedTime, put=__set_m_NormalizedTime))  m_NormalizedTime;

constexpr void __set_m_NormalizedTime(float_t value) ;

constexpr float_t __get_m_NormalizedTime() const;

 float_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(float_t value) ;

constexpr float_t __get_m_Length() const;

 float_t __declspec(property(get=__get_m_Speed, put=__set_m_Speed))  m_Speed;

constexpr void __set_m_Speed(float_t value) ;

constexpr float_t __get_m_Speed() const;

 float_t __declspec(property(get=__get_m_SpeedMultiplier, put=__set_m_SpeedMultiplier))  m_SpeedMultiplier;

constexpr void __set_m_SpeedMultiplier(float_t value) ;

constexpr float_t __get_m_SpeedMultiplier() const;

 int32_t __declspec(property(get=__get_m_Tag, put=__set_m_Tag))  m_Tag;

constexpr void __set_m_Tag(int32_t value) ;

constexpr int32_t __get_m_Tag() const;

 int32_t __declspec(property(get=__get_m_Loop, put=__set_m_Loop))  m_Loop;

constexpr void __set_m_Loop(int32_t value) ;

constexpr int32_t __get_m_Loop() const;


// Properties

 float_t __declspec(property(get=get_normalizedTime))  normalizedTime;


// Methods

/// @brief Method get_normalizedTime addr 0x2b1abe0 size 0x8 virtual false final false
 float_t get_normalizedTime() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorStateInfo, "UnityEngine", "AnimatorStateInfo");
