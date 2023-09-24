#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::EventSystems {
class AbstractEventData;
}
// Type: UnityEngine.EventSystems::AbstractEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13103))
// CS Name: UnityEngine.EventSystems.AbstractEventData
class CORDL_TYPE AbstractEventData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AbstractEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractEventData", modifiers: " const&", def_value: None }]
constexpr AbstractEventData(AbstractEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractEventData", modifiers: "&&", def_value: None }]
constexpr AbstractEventData(AbstractEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractEventData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractEventData& operator=(AbstractEventData&& o) noexcept = default;
  constexpr AbstractEventData& operator=(AbstractEventData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Used, put=__set_m_Used))  m_Used;

constexpr void __set_m_Used(bool value) ;

constexpr bool __get_m_Used() const;


// Properties

 bool __declspec(property(get=get_used))  used;


// Methods

/// @brief Method Reset addr 0x2c1c268 size 0x8 virtual true final false
 void Reset() ;

/// @brief Method Use addr 0x2c1c270 size 0xc virtual true final false
 void Use() ;

/// @brief Method get_used addr 0x2c1c27c size 0x8 virtual true final false
 bool get_used() ;

static UnityEngine::EventSystems::AbstractEventData New_ctor() ;

/// @brief Method .ctor addr 0x2c1c284 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::AbstractEventData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::AbstractEventData, "UnityEngine.EventSystems", "AbstractEventData");
