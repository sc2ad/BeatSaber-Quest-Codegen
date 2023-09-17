#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::U2D {
struct SpriteBone;
}
// Type: UnityEngine.U2D::SpriteBone
namespace UnityEngine::U2D {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10230))
// CS Name: UnityEngine.U2D.SpriteBone
struct CORDL_TYPE SpriteBone : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Guid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr SpriteBone(::StringW m_Name, ::StringW m_Guid, ::UnityEngine::Vector3 m_Position, ::UnityEngine::Quaternion m_Rotation, float_t m_Length, int32_t m_ParentId, ::UnityEngine::Color32 m_Color) noexcept;


                    constexpr SpriteBone(SpriteBone const&) = default;
                    constexpr SpriteBone(SpriteBone&&) = default;
                    constexpr SpriteBone& operator=(SpriteBone const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpriteBone& operator=(SpriteBone&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpriteBone(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 ::StringW __declspec(property(get=__get_m_Guid, put=__set_m_Guid))  m_Guid;

constexpr void __set_m_Guid(::StringW value) ;

constexpr ::StringW __get_m_Guid() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_m_Rotation() const;

 float_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(float_t value) ;

constexpr float_t __get_m_Length() const;

 int32_t __declspec(property(get=__get_m_ParentId, put=__set_m_ParentId))  m_ParentId;

constexpr void __set_m_ParentId(int32_t value) ;

constexpr int32_t __get_m_ParentId() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_Color() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::U2D
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteBone, "UnityEngine.U2D", "SpriteBone");
