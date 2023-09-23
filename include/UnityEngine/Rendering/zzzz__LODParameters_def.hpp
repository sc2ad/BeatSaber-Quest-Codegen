#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODParameters;
}
// Type: UnityEngine.Rendering::LODParameters
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10291))
// CS Name: UnityEngine.Rendering.LODParameters
struct CORDL_TYPE LODParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::LODParameters>
constexpr operator  System::IEquatable_1<UnityEngine::Rendering::LODParameters>() const;

// Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CameraPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_FieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OrthoSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CameraPixelHeight", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LODParameters(int32_t m_IsOrthographic, UnityEngine::Vector3 m_CameraPosition, float_t m_FieldOfView, float_t m_OrthoSize, int32_t m_CameraPixelHeight) noexcept;


                    constexpr LODParameters(LODParameters const&) = default;
                    constexpr LODParameters(LODParameters&&) = default;
                    constexpr LODParameters& operator=(LODParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LODParameters& operator=(LODParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LODParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_IsOrthographic, put=__set_m_IsOrthographic))  m_IsOrthographic;

constexpr void __set_m_IsOrthographic(int32_t value) ;

constexpr int32_t __get_m_IsOrthographic() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_CameraPosition, put=__set_m_CameraPosition))  m_CameraPosition;

constexpr void __set_m_CameraPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_CameraPosition() const;

 float_t __declspec(property(get=__get_m_FieldOfView, put=__set_m_FieldOfView))  m_FieldOfView;

constexpr void __set_m_FieldOfView(float_t value) ;

constexpr float_t __get_m_FieldOfView() const;

 float_t __declspec(property(get=__get_m_OrthoSize, put=__set_m_OrthoSize))  m_OrthoSize;

constexpr void __set_m_OrthoSize(float_t value) ;

constexpr float_t __get_m_OrthoSize() const;

 int32_t __declspec(property(get=__get_m_CameraPixelHeight, put=__set_m_CameraPixelHeight))  m_CameraPixelHeight;

constexpr void __set_m_CameraPixelHeight(int32_t value) ;

constexpr int32_t __get_m_CameraPixelHeight() const;


// Methods

/// @brief Method Equals addr 0x2b75884 size 0x9c virtual true final true
 bool Equals(UnityEngine::Rendering::LODParameters other) ;

/// @brief Method Equals addr 0x2b75920 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2b759b0 size 0x94 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::LODParameters, "UnityEngine.Rendering", "LODParameters");
