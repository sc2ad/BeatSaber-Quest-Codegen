#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::TextCore {
struct GlyphRect;
}
// Type: UnityEngine.TextCore::GlyphRect
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15504))
// CS Name: UnityEngine.TextCore.GlyphRect
struct CORDL_TYPE GlyphRect : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::TextCore::GlyphRect>
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::GlyphRect>() const;

// Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphRect(int32_t m_X, int32_t m_Y, int32_t m_Width, int32_t m_Height) noexcept;


                    constexpr GlyphRect(GlyphRect const&) = default;
                    constexpr GlyphRect(GlyphRect&&) = default;
                    constexpr GlyphRect& operator=(GlyphRect const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphRect& operator=(GlyphRect&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphRect(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_X, put=__set_m_X))  m_X;

constexpr void __set_m_X(int32_t value) ;

constexpr int32_t __get_m_X() const;

 int32_t __declspec(property(get=__get_m_Y, put=__set_m_Y))  m_Y;

constexpr void __set_m_Y(int32_t value) ;

constexpr int32_t __get_m_Y() const;

 int32_t __declspec(property(get=__get_m_Width, put=__set_m_Width))  m_Width;

constexpr void __set_m_Width(int32_t value) ;

constexpr int32_t __get_m_Width() const;

 int32_t __declspec(property(get=__get_m_Height, put=__set_m_Height))  m_Height;

constexpr void __set_m_Height(int32_t value) ;

constexpr int32_t __get_m_Height() const;

static ::UnityEngine::TextCore::GlyphRect __declspec(property(get=__get_s_ZeroGlyphRect, put=__set_s_ZeroGlyphRect))  s_ZeroGlyphRect;

static void __set_s_ZeroGlyphRect(::UnityEngine::TextCore::GlyphRect value) ;

static ::UnityEngine::TextCore::GlyphRect __get_s_ZeroGlyphRect() ;


// Properties

 int32_t __declspec(property(get=get_x))  x;

 int32_t __declspec(property(get=get_y))  y;

 int32_t __declspec(property(get=get_width))  width;

 int32_t __declspec(property(get=get_height))  height;

static ::UnityEngine::TextCore::GlyphRect __declspec(property(get=get_zero))  zero;


// Methods

/// @brief Method get_x addr 0x2baa3f8 size 0x8 virtual false final false
 int32_t get_x() ;

/// @brief Method get_y addr 0x2baa400 size 0x8 virtual false final false
 int32_t get_y() ;

/// @brief Method get_width addr 0x2baa408 size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method get_height addr 0x2baa410 size 0x8 virtual false final false
 int32_t get_height() ;

/// @brief Method get_zero addr 0x2baa418 size 0x58 virtual false final false
static ::UnityEngine::TextCore::GlyphRect get_zero() ;

/// @brief Method .ctor addr 0x2baa470 size 0xc virtual false final false
 void _ctor(int32_t x, int32_t y, int32_t width, int32_t height) ;

/// @brief Method GetHashCode addr 0x2baa47c size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2baa4e0 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2baa558 size 0x94 virtual true final true
 bool Equals(::UnityEngine::TextCore::GlyphRect other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphRect, "UnityEngine.TextCore", "GlyphRect");
