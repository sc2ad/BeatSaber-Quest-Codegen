#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct ____Unity__XR__Oculus__Boundary__BoundaryType;
}
namespace Unity::XR::Oculus {
class Boundary;
}
// Type: ::BoundaryType
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15216))
// CS Name: Unity.XR.Oculus.Boundary::BoundaryType
struct CORDL_TYPE ____Unity__XR__Oculus__Boundary__BoundaryType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Unity__XR__Oculus__Boundary__BoundaryType(int32_t value__) noexcept;


                    constexpr ____Unity__XR__Oculus__Boundary__BoundaryType(____Unity__XR__Oculus__Boundary__BoundaryType const&) = default;
                    constexpr ____Unity__XR__Oculus__Boundary__BoundaryType(____Unity__XR__Oculus__Boundary__BoundaryType&&) = default;
                    constexpr ____Unity__XR__Oculus__Boundary__BoundaryType& operator=(____Unity__XR__Oculus__Boundary__BoundaryType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Unity__XR__Oculus__Boundary__BoundaryType& operator=(____Unity__XR__Oculus__Boundary__BoundaryType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Unity__XR__Oculus__Boundary__BoundaryType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Unity__XR__Oculus__Boundary__BoundaryType_Unwrapped : int32_t {
__OuterBoundary = 0,
__PlayArea = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Unity__XR__Oculus__Boundary__BoundaryType_Unwrapped () const noexcept {
return std::bit_cast<______Unity__XR__Oculus__Boundary__BoundaryType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OuterBoundary offset 0
static ::Unity::XR::Oculus::____Unity__XR__Oculus__Boundary__BoundaryType const OuterBoundary;

/// @brief Field PlayArea offset 0
static ::Unity::XR::Oculus::____Unity__XR__Oculus__Boundary__BoundaryType const PlayArea;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::Boundary
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15217))
// CS Name: Unity.XR.Oculus.Boundary
class CORDL_TYPE Boundary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BoundaryType = ::Unity::XR::Oculus::____Unity__XR__Oculus__Boundary__BoundaryType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Boundary() = default;

// Ctor Parameters [CppParam { name: "", ty: "Boundary", modifiers: " const&", def_value: None }]
constexpr Boundary(Boundary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Boundary", modifiers: "&&", def_value: None }]
constexpr Boundary(Boundary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Boundary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Boundary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Boundary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Boundary& operator=(Boundary&& o) noexcept = default;
  constexpr Boundary& operator=(Boundary const& o) noexcept = default;
                


// Methods

/// @brief Method GetBoundaryConfigured addr 0x2adecc4 size 0x4 virtual false final false
static bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions addr 0x2adeccc size 0x4 virtual false final false
static bool GetBoundaryDimensions(::Unity::XR::Oculus::____Unity__XR__Oculus__Boundary__BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions) ;

/// @brief Method GetBoundaryVisible addr 0x2adecd4 size 0x4 virtual false final false
static bool GetBoundaryVisible() ;

/// @brief Method SetBoundaryVisible addr 0x2adecdc size 0x8 virtual false final false
static void SetBoundaryVisible(bool boundaryVisible) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::____Unity__XR__Oculus__Boundary__BoundaryType, "Unity.XR.Oculus", "Boundary/BoundaryType");
NEED_NO_BOX(::Unity::XR::Oculus::Boundary);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Boundary, "Unity.XR.Oculus", "Boundary");
