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
namespace UnityEngine::XR {
struct Hand;
}
// Type: UnityEngine.XR::Hand
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15571))
// CS Name: UnityEngine.XR.Hand
struct CORDL_TYPE Hand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::XR::Hand>
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::Hand>() const;

// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FeatureIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Hand(uint64_t m_DeviceId, uint32_t m_FeatureIndex) noexcept;


                    constexpr Hand(Hand const&) = default;
                    constexpr Hand(Hand&&) = default;
                    constexpr Hand& operator=(Hand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Hand& operator=(Hand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Hand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_m_DeviceId, put=__set_m_DeviceId))  m_DeviceId;

constexpr void __set_m_DeviceId(uint64_t value) ;

constexpr uint64_t __get_m_DeviceId() const;

 uint32_t __declspec(property(get=__get_m_FeatureIndex, put=__set_m_FeatureIndex))  m_FeatureIndex;

constexpr void __set_m_FeatureIndex(uint32_t value) ;

constexpr uint32_t __get_m_FeatureIndex() const;


// Properties

 uint64_t __declspec(property(get=get_deviceId))  deviceId;

 uint32_t __declspec(property(get=get_featureIndex))  featureIndex;


// Methods

/// @brief Method get_deviceId addr 0x2d39078 size 0x8 virtual false final false
 uint64_t get_deviceId() ;

/// @brief Method get_featureIndex addr 0x2d39080 size 0x8 virtual false final false
 uint32_t get_featureIndex() ;

/// @brief Method Equals addr 0x2d39088 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2d39110 size 0x24 virtual true final true
 bool Equals(::UnityEngine::XR::Hand other) ;

/// @brief Method GetHashCode addr 0x2d39134 size 0x4c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Hand, "UnityEngine.XR", "Hand");
