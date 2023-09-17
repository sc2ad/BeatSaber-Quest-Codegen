#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPriority;
}
// Type: LIV.SDK.Unity::SDKPriority
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15161))
// CS Name: LIV.SDK.Unity.SDKPriority
struct CORDL_TYPE SDKPriority : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pose", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "clipPlane", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "stage", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "feature", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "nearFarAdjustment", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "groundPlane", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "reserved2", ty: "int8_t", modifiers: "", def_value: None }]
constexpr SDKPriority(int8_t pose, int8_t clipPlane, int8_t stage, int8_t resolution, int8_t feature, int8_t nearFarAdjustment, int8_t groundPlane, int8_t reserved2) noexcept;


                    constexpr SDKPriority(SDKPriority const&) = default;
                    constexpr SDKPriority(SDKPriority&&) = default;
                    constexpr SDKPriority& operator=(SDKPriority const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SDKPriority& operator=(SDKPriority&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SDKPriority(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int8_t __declspec(property(get=__get_pose, put=__set_pose))  pose;

constexpr void __set_pose(int8_t value) ;

constexpr int8_t __get_pose() const;

 int8_t __declspec(property(get=__get_clipPlane, put=__set_clipPlane))  clipPlane;

constexpr void __set_clipPlane(int8_t value) ;

constexpr int8_t __get_clipPlane() const;

 int8_t __declspec(property(get=__get_stage, put=__set_stage))  stage;

constexpr void __set_stage(int8_t value) ;

constexpr int8_t __get_stage() const;

 int8_t __declspec(property(get=__get_resolution, put=__set_resolution))  resolution;

constexpr void __set_resolution(int8_t value) ;

constexpr int8_t __get_resolution() const;

 int8_t __declspec(property(get=__get_feature, put=__set_feature))  feature;

constexpr void __set_feature(int8_t value) ;

constexpr int8_t __get_feature() const;

 int8_t __declspec(property(get=__get_nearFarAdjustment, put=__set_nearFarAdjustment))  nearFarAdjustment;

constexpr void __set_nearFarAdjustment(int8_t value) ;

constexpr int8_t __get_nearFarAdjustment() const;

 int8_t __declspec(property(get=__get_groundPlane, put=__set_groundPlane))  groundPlane;

constexpr void __set_groundPlane(int8_t value) ;

constexpr int8_t __get_groundPlane() const;

 int8_t __declspec(property(get=__get_reserved2, put=__set_reserved2))  reserved2;

constexpr void __set_reserved2(int8_t value) ;

constexpr int8_t __get_reserved2() const;


// Properties

static ::LIV::SDK::Unity::SDKPriority __declspec(property(get=get_empty))  empty;


// Methods

/// @brief Method get_empty addr 0x20a24f8 size 0xc virtual false final false
static ::LIV::SDK::Unity::SDKPriority get_empty() ;

/// @brief Method ToString addr 0x20a2504 size 0x26c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPriority, "LIV.SDK.Unity", "SDKPriority");
