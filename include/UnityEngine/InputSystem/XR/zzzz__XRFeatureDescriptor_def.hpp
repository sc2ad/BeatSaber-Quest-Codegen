#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::XR {
struct UsageHint;
}
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
// Type: UnityEngine.InputSystem.XR::XRFeatureDescriptor
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6418))
// CS Name: UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct CORDL_TYPE XRFeatureDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "usageHints", ty: "System::Collections::Generic::List_1<UnityEngine::InputSystem::XR::UsageHint>", modifiers: "", def_value: None }, CppParam { name: "featureType", ty: "UnityEngine::InputSystem::XR::FeatureType", modifiers: "", def_value: None }, CppParam { name: "customSize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr XRFeatureDescriptor(::StringW name, System::Collections::Generic::List_1<UnityEngine::InputSystem::XR::UsageHint> usageHints, UnityEngine::InputSystem::XR::FeatureType featureType, uint32_t customSize) noexcept;


                    constexpr XRFeatureDescriptor(XRFeatureDescriptor const&) = default;
                    constexpr XRFeatureDescriptor(XRFeatureDescriptor&&) = default;
                    constexpr XRFeatureDescriptor& operator=(XRFeatureDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XRFeatureDescriptor& operator=(XRFeatureDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XRFeatureDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Collections::Generic::List_1<UnityEngine::InputSystem::XR::UsageHint> __declspec(property(get=__get_usageHints, put=__set_usageHints))  usageHints;

constexpr void __set_usageHints(System::Collections::Generic::List_1<UnityEngine::InputSystem::XR::UsageHint> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::XR::UsageHint> __get_usageHints() const;

 UnityEngine::InputSystem::XR::FeatureType __declspec(property(get=__get_featureType, put=__set_featureType))  featureType;

constexpr void __set_featureType(UnityEngine::InputSystem::XR::FeatureType value) ;

constexpr UnityEngine::InputSystem::XR::FeatureType __get_featureType() const;

 uint32_t __declspec(property(get=__get_customSize, put=__set_customSize))  customSize;

constexpr void __set_customSize(uint32_t value) ;

constexpr uint32_t __get_customSize() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::XRFeatureDescriptor, "UnityEngine.InputSystem.XR", "XRFeatureDescriptor");
