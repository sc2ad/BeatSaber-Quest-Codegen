#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextureId;
}
// Type: UnityEngine.UIElements::TextureId
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7438))
// CS Name: UnityEngine.UIElements.TextureId
struct CORDL_TYPE TextureId : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureId(int32_t m_Index) noexcept;


                    constexpr TextureId(TextureId const&) = default;
                    constexpr TextureId(TextureId&&) = default;
                    constexpr TextureId& operator=(TextureId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureId& operator=(TextureId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;

static ::UnityEngine::UIElements::TextureId __declspec(property(get=__get_invalid, put=__set_invalid))  invalid;

static void __set_invalid(::UnityEngine::UIElements::TextureId value) ;

static ::UnityEngine::UIElements::TextureId __get_invalid() ;


// Properties

 int32_t __declspec(property(get=get_index))  index;


// Methods

/// @brief Method .ctor addr 0x2d06000 size 0xc virtual false final false
 void _ctor(int32_t index) ;

/// @brief Method get_index addr 0x2d0600c size 0xc virtual false final false
 int32_t get_index() ;

/// @brief Method ConvertToGpu addr 0x2d06018 size 0x10 virtual false final false
 float_t ConvertToGpu() ;

/// @brief Method Equals addr 0x2d06028 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d060d0 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2d060f0 size 0xc virtual false final false
static bool op_Equality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right) ;

/// @brief Method op_Inequality addr 0x2d060fc size 0x64 virtual false final false
static bool op_Inequality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextureId, "UnityEngine.UIElements", "TextureId");
