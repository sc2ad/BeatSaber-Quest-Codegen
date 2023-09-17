#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Pose;
}
// Type: UnityEngine::Pose
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9999))
// CS Name: UnityEngine.Pose
struct CORDL_TYPE Pose : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Pose>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Pose>() const;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr Pose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) noexcept;


                    constexpr Pose(Pose const&) = default;
                    constexpr Pose(Pose&&) = default;
                    constexpr Pose& operator=(Pose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Pose& operator=(Pose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Pose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;

static ::UnityEngine::Pose __declspec(property(get=__get_k_Identity, put=__set_k_Identity))  k_Identity;

static void __set_k_Identity(::UnityEngine::Pose value) ;

static ::UnityEngine::Pose __get_k_Identity() ;


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_forward))  forward;

static ::UnityEngine::Pose __declspec(property(get=get_identity))  identity;


// Methods

/// @brief Method .ctor addr 0x2b2c16c size 0x14 virtual false final false
 void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) ;

/// @brief Method ToString addr 0x2b2c180 size 0xf4 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetTransformedBy addr 0x2b2c274 size 0xe4 virtual false final false
 ::UnityEngine::Pose GetTransformedBy(::UnityEngine::Pose lhs) ;

/// @brief Method get_forward addr 0x2b2c358 size 0x70 virtual false final false
 ::UnityEngine::Vector3 get_forward() ;

/// @brief Method get_identity addr 0x2b2c3c8 size 0x68 virtual false final false
static ::UnityEngine::Pose get_identity() ;

/// @brief Method Equals addr 0x2b2c430 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2b2c4c0 size 0x84 virtual true final true
 bool Equals(::UnityEngine::Pose other) ;

/// @brief Method GetHashCode addr 0x2b2c544 size 0xac virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Pose, "UnityEngine", "Pose");
