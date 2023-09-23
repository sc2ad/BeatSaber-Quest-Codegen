#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct UILineInfo;
}
// Type: UnityEngine::UILineInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15790))
// CS Name: UnityEngine.UILineInfo
struct CORDL_TYPE UILineInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "startCharIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "topY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leading", ty: "float_t", modifiers: "", def_value: None }]
constexpr UILineInfo(int32_t startCharIdx, int32_t height, float_t topY, float_t leading) noexcept;


                    constexpr UILineInfo(UILineInfo const&) = default;
                    constexpr UILineInfo(UILineInfo&&) = default;
                    constexpr UILineInfo& operator=(UILineInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UILineInfo& operator=(UILineInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UILineInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_startCharIdx, put=__set_startCharIdx))  startCharIdx;

constexpr void __set_startCharIdx(int32_t value) ;

constexpr int32_t __get_startCharIdx() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;

 float_t __declspec(property(get=__get_topY, put=__set_topY))  topY;

constexpr void __set_topY(float_t value) ;

constexpr float_t __get_topY() const;

 float_t __declspec(property(get=__get_leading, put=__set_leading))  leading;

constexpr void __set_leading(float_t value) ;

constexpr float_t __get_leading() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UILineInfo, "UnityEngine", "UILineInfo");
