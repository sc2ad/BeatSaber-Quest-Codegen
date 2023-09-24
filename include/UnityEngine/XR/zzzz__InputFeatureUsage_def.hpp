#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR {
struct InputFeatureType;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::XR {
struct InputFeatureUsage;
}
// Type: UnityEngine.XR::InputFeatureUsage
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15568))
// CS Name: UnityEngine.XR.InputFeatureUsage
struct CORDL_TYPE InputFeatureUsage : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>
constexpr operator  System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>() const;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_InternalType", ty: "UnityEngine::XR::InputFeatureType", modifiers: "", def_value: None }]
constexpr InputFeatureUsage(::StringW m_Name, UnityEngine::XR::InputFeatureType m_InternalType) noexcept;


                    constexpr InputFeatureUsage(InputFeatureUsage const&) = default;
                    constexpr InputFeatureUsage(InputFeatureUsage&&) = default;
                    constexpr InputFeatureUsage& operator=(InputFeatureUsage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputFeatureUsage& operator=(InputFeatureUsage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputFeatureUsage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 UnityEngine::XR::InputFeatureType __declspec(property(get=__get_m_InternalType, put=__set_m_InternalType))  m_InternalType;

constexpr void __set_m_InternalType(UnityEngine::XR::InputFeatureType value) ;

constexpr UnityEngine::XR::InputFeatureType __get_m_InternalType() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 UnityEngine::XR::InputFeatureType __declspec(property(get=get_internalType))  internalType;


// Methods

/// @brief Method get_name addr 0x2d38af8 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_internalType addr 0x2d38b00 size 0x8 virtual false final false
 UnityEngine::XR::InputFeatureType get_internalType() ;

/// @brief Method Equals addr 0x2d38b08 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2d38b90 size 0x40 virtual true final true
 bool Equals(UnityEngine::XR::InputFeatureUsage other) ;

/// @brief Method GetHashCode addr 0x2d38bd0 size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputFeatureUsage, "UnityEngine.XR", "InputFeatureUsage");
