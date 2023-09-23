#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class BootConfigData;
}
// Type: UnityEngine::BootConfigData
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10128))
// CS Name: UnityEngine.BootConfigData
class CORDL_TYPE BootConfigData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BootConfigData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BootConfigData", modifiers: " const&", def_value: None }]
constexpr BootConfigData(BootConfigData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BootConfigData", modifiers: "&&", def_value: None }]
constexpr BootConfigData(BootConfigData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BootConfigData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BootConfigData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BootConfigData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BootConfigData& operator=(BootConfigData&& o) noexcept = default;
  constexpr BootConfigData& operator=(BootConfigData const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method WrapBootConfigData addr 0x2b55d7c size 0x60 virtual false final false
static UnityEngine::BootConfigData WrapBootConfigData(::cordl_internals::intptr_t nativeHandle) ;

// Ctor Parameters [CppParam { name: "nativeHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit BootConfigData(::cordl_internals::intptr_t nativeHandle) ;

/// @brief Method .ctor addr 0x2b55ddc size 0xc4 virtual false final false
 void _ctor(::cordl_internals::intptr_t nativeHandle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::BootConfigData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BootConfigData, "UnityEngine", "BootConfigData");
