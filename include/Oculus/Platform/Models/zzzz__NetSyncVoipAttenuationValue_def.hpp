#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValue;
}
// Type: Oculus.Platform.Models::NetSyncVoipAttenuationValue
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13452))
// CS Name: Oculus.Platform.Models.NetSyncVoipAttenuationValue
class CORDL_TYPE NetSyncVoipAttenuationValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NetSyncVoipAttenuationValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValue", modifiers: " const&", def_value: None }]
constexpr NetSyncVoipAttenuationValue(NetSyncVoipAttenuationValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValue", modifiers: "&&", def_value: None }]
constexpr NetSyncVoipAttenuationValue(NetSyncVoipAttenuationValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncVoipAttenuationValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSyncVoipAttenuationValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncVoipAttenuationValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncVoipAttenuationValue& operator=(NetSyncVoipAttenuationValue&& o) noexcept = default;
  constexpr NetSyncVoipAttenuationValue& operator=(NetSyncVoipAttenuationValue const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_Decibels, put=__set_Decibels))  Decibels;

constexpr void __set_Decibels(float_t value) ;

constexpr float_t __get_Decibels() const;

 float_t __declspec(property(get=__get_Distance, put=__set_Distance))  Distance;

constexpr void __set_Distance(float_t value) ;

constexpr float_t __get_Distance() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NetSyncVoipAttenuationValue(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1890 size 0x88 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::NetSyncVoipAttenuationValue);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncVoipAttenuationValue, "Oculus.Platform.Models", "NetSyncVoipAttenuationValue");
