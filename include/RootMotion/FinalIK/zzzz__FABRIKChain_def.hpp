#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace RootMotion::FinalIK {
class FABRIK;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FABRIKChain;
}
// Type: RootMotion.FinalIK::FABRIKChain
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12486))
// CS Name: RootMotion.FinalIK.FABRIKChain
class CORDL_TYPE FABRIKChain : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FABRIKChain() = default;

// Ctor Parameters [CppParam { name: "", ty: "FABRIKChain", modifiers: " const&", def_value: None }]
constexpr FABRIKChain(FABRIKChain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FABRIKChain", modifiers: "&&", def_value: None }]
constexpr FABRIKChain(FABRIKChain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FABRIKChain(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FABRIKChain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FABRIKChain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FABRIKChain& operator=(FABRIKChain&& o) noexcept = default;
  constexpr FABRIKChain& operator=(FABRIKChain const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FABRIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::FABRIK value) ;

constexpr RootMotion::FinalIK::FABRIK __get_ik() const;

 float_t __declspec(property(get=__get_pull, put=__set_pull))  pull;

constexpr void __set_pull(float_t value) ;

constexpr float_t __get_pull() const;

 float_t __declspec(property(get=__get_pin, put=__set_pin))  pin;

constexpr void __set_pin(float_t value) ;

constexpr float_t __get_pin() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_children, put=__set_children))  children;

constexpr void __set_children(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_children() const;


// Methods

/// @brief Method IsValid addr 0x11c6af8 size 0xc4 virtual false final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method Initiate addr 0x11c6bbc size 0x20 virtual false final false
 void Initiate() ;

/// @brief Method Stage1 addr 0x11c6bdc size 0xc0 virtual false final false
 void Stage1(::ArrayW<RootMotion::FinalIK::FABRIKChain> chain) ;

/// @brief Method Stage2 addr 0x11c6e30 size 0xe4 virtual false final false
 void Stage2(UnityEngine::Vector3 rootPosition, ::ArrayW<RootMotion::FinalIK::FABRIKChain> chain) ;

/// @brief Method GetCentroid addr 0x11c6c9c size 0x194 virtual false final false
 UnityEngine::Vector3 GetCentroid(::ArrayW<RootMotion::FinalIK::FABRIKChain> chain) ;

// Ctor Parameters []
explicit FABRIKChain() ;

/// @brief Method .ctor addr 0x11c6f14 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::FABRIKChain);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FABRIKChain, "RootMotion.FinalIK", "FABRIKChain");
