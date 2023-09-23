#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct Resolution;
}
// Type: UnityEngine::Resolution
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10025))
// CS Name: UnityEngine.Resolution
struct CORDL_TYPE Resolution : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RefreshRate", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Resolution(int32_t m_Width, int32_t m_Height, int32_t m_RefreshRate) noexcept;


                    constexpr Resolution(Resolution const&) = default;
                    constexpr Resolution(Resolution&&) = default;
                    constexpr Resolution& operator=(Resolution const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Resolution& operator=(Resolution&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Resolution(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Width, put=__set_m_Width))  m_Width;

constexpr void __set_m_Width(int32_t value) ;

constexpr int32_t __get_m_Width() const;

 int32_t __declspec(property(get=__get_m_Height, put=__set_m_Height))  m_Height;

constexpr void __set_m_Height(int32_t value) ;

constexpr int32_t __get_m_Height() const;

 int32_t __declspec(property(get=__get_m_RefreshRate, put=__set_m_RefreshRate))  m_RefreshRate;

constexpr void __set_m_RefreshRate(int32_t value) ;

constexpr int32_t __get_m_RefreshRate() const;


// Properties

 int32_t __declspec(property(get=get_width, put=set_width))  width;

 int32_t __declspec(property(get=get_height, put=set_height))  height;

 int32_t __declspec(property(get=get_refreshRate, put=set_refreshRate))  refreshRate;


// Methods

/// @brief Method get_width addr 0x2b402c8 size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method set_width addr 0x2b402d0 size 0x8 virtual false final false
 void set_width(int32_t value) ;

/// @brief Method get_height addr 0x2b402d8 size 0x8 virtual false final false
 int32_t get_height() ;

/// @brief Method set_height addr 0x2b402e0 size 0x8 virtual false final false
 void set_height(int32_t value) ;

/// @brief Method get_refreshRate addr 0x2b402e8 size 0x8 virtual false final false
 int32_t get_refreshRate() ;

/// @brief Method set_refreshRate addr 0x2b402f0 size 0x8 virtual false final false
 void set_refreshRate(int32_t value) ;

/// @brief Method ToString addr 0x2b402f8 size 0x16c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Resolution, "UnityEngine", "Resolution");
