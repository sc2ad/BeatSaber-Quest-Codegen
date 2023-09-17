#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AnimatorClipInfo;
}
// Type: UnityEngine::AnimatorClipInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15049))
// CS Name: UnityEngine.AnimatorClipInfo
struct CORDL_TYPE AnimatorClipInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ClipInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }]
constexpr AnimatorClipInfo(int32_t m_ClipInstanceID, float_t m_Weight) noexcept;


                    constexpr AnimatorClipInfo(AnimatorClipInfo const&) = default;
                    constexpr AnimatorClipInfo(AnimatorClipInfo&&) = default;
                    constexpr AnimatorClipInfo& operator=(AnimatorClipInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorClipInfo& operator=(AnimatorClipInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorClipInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_ClipInstanceID, put=__set_m_ClipInstanceID))  m_ClipInstanceID;

constexpr void __set_m_ClipInstanceID(int32_t value) ;

constexpr int32_t __get_m_ClipInstanceID() const;

 float_t __declspec(property(get=__get_m_Weight, put=__set_m_Weight))  m_Weight;

constexpr void __set_m_Weight(float_t value) ;

constexpr float_t __get_m_Weight() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorClipInfo, "UnityEngine", "AnimatorClipInfo");
