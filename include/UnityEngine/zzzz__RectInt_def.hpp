#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormattable;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine {
struct RectInt;
}
// Type: UnityEngine::RectInt
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10104))
// CS Name: UnityEngine.RectInt
struct CORDL_TYPE RectInt : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::RectInt>
constexpr operator  ::System::IEquatable_1<::UnityEngine::RectInt>() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_XMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_YMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RectInt(int32_t m_XMin, int32_t m_YMin, int32_t m_Width, int32_t m_Height) noexcept;


                    constexpr RectInt(RectInt const&) = default;
                    constexpr RectInt(RectInt&&) = default;
                    constexpr RectInt& operator=(RectInt const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RectInt& operator=(RectInt&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RectInt(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_XMin, put=__set_m_XMin))  m_XMin;

constexpr void __set_m_XMin(int32_t value) ;

constexpr int32_t __get_m_XMin() const;

 int32_t __declspec(property(get=__get_m_YMin, put=__set_m_YMin))  m_YMin;

constexpr void __set_m_YMin(int32_t value) ;

constexpr int32_t __get_m_YMin() const;

 int32_t __declspec(property(get=__get_m_Width, put=__set_m_Width))  m_Width;

constexpr void __set_m_Width(int32_t value) ;

constexpr int32_t __get_m_Width() const;

 int32_t __declspec(property(get=__get_m_Height, put=__set_m_Height))  m_Height;

constexpr void __set_m_Height(int32_t value) ;

constexpr int32_t __get_m_Height() const;


// Properties

 int32_t __declspec(property(get=get_x, put=set_x))  x;

 int32_t __declspec(property(get=get_y, put=set_y))  y;

 int32_t __declspec(property(get=get_width, put=set_width))  width;

 int32_t __declspec(property(get=get_height, put=set_height))  height;

 int32_t __declspec(property(get=get_xMin))  xMin;

 int32_t __declspec(property(get=get_yMin))  yMin;

 int32_t __declspec(property(get=get_xMax))  xMax;

 int32_t __declspec(property(get=get_yMax))  yMax;


// Methods

/// @brief Method get_x addr 0x2b51fb0 size 0x8 virtual false final false
 int32_t get_x() ;

/// @brief Method set_x addr 0x2b51fb8 size 0x8 virtual false final false
 void set_x(int32_t value) ;

/// @brief Method get_y addr 0x2b51fc0 size 0x8 virtual false final false
 int32_t get_y() ;

/// @brief Method set_y addr 0x2b51fc8 size 0x8 virtual false final false
 void set_y(int32_t value) ;

/// @brief Method get_width addr 0x2b51fd0 size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method set_width addr 0x2b51fd8 size 0x8 virtual false final false
 void set_width(int32_t value) ;

/// @brief Method get_height addr 0x2b51fe0 size 0x8 virtual false final false
 int32_t get_height() ;

/// @brief Method set_height addr 0x2b51fe8 size 0x8 virtual false final false
 void set_height(int32_t value) ;

/// @brief Method get_xMin addr 0x2b51ff0 size 0x64 virtual false final false
 int32_t get_xMin() ;

/// @brief Method get_yMin addr 0x2b52054 size 0x64 virtual false final false
 int32_t get_yMin() ;

/// @brief Method get_xMax addr 0x2b520b8 size 0x64 virtual false final false
 int32_t get_xMax() ;

/// @brief Method get_yMax addr 0x2b5211c size 0x64 virtual false final false
 int32_t get_yMax() ;

/// @brief Method .ctor addr 0x2b52180 size 0xc virtual false final false
 void _ctor(int32_t xMin, int32_t yMin, int32_t width, int32_t height) ;

/// @brief Method Overlaps addr 0x2b5218c size 0x9c virtual false final false
 bool Overlaps(::UnityEngine::RectInt other) ;

/// @brief Method ToString addr 0x2b52228 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b52234 size 0x20c virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method Equals addr 0x2b52440 size 0x44 virtual true final true
 bool Equals(::UnityEngine::RectInt other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectInt, "UnityEngine", "RectInt");
