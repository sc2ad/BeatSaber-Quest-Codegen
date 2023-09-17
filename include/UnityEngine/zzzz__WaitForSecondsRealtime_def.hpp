#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine {
class WaitForSecondsRealtime;
}
// Type: UnityEngine::WaitForSecondsRealtime
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10176))
// CS Name: UnityEngine.WaitForSecondsRealtime
class CORDL_TYPE WaitForSecondsRealtime : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~WaitForSecondsRealtime() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForSecondsRealtime", modifiers: " const&", def_value: None }]
constexpr WaitForSecondsRealtime(WaitForSecondsRealtime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitForSecondsRealtime", modifiers: "&&", def_value: None }]
constexpr WaitForSecondsRealtime(WaitForSecondsRealtime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitForSecondsRealtime(void* ptr) noexcept : ::UnityEngine::CustomYieldInstruction(ptr) {
}


  constexpr WaitForSecondsRealtime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitForSecondsRealtime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitForSecondsRealtime& operator=(WaitForSecondsRealtime&& o) noexcept = default;
  constexpr WaitForSecondsRealtime& operator=(WaitForSecondsRealtime const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__waitTime_k__BackingField, put=__set__waitTime_k__BackingField))  _waitTime_k__BackingField;

constexpr void __set__waitTime_k__BackingField(float_t value) ;

constexpr float_t __get__waitTime_k__BackingField() const;

 float_t __declspec(property(get=__get_m_WaitUntilTime, put=__set_m_WaitUntilTime))  m_WaitUntilTime;

constexpr void __set_m_WaitUntilTime(float_t value) ;

constexpr float_t __get_m_WaitUntilTime() const;


// Properties

 float_t __declspec(property(get=get_waitTime, put=set_waitTime))  waitTime;

 bool __declspec(property(get=get_keepWaiting))  keepWaiting;


// Methods

/// @brief Method get_waitTime addr 0x2b5c1f0 size 0x8 virtual false final false
 float_t get_waitTime() ;

/// @brief Method set_waitTime addr 0x2b5c1f8 size 0x8 virtual false final false
 void set_waitTime(float_t value) ;

/// @brief Method get_keepWaiting addr 0x2b5c200 size 0x9c virtual true final false
 bool get_keepWaiting() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
explicit WaitForSecondsRealtime(float_t time) ;

/// @brief Method .ctor addr 0x2b5c29c size 0x30 virtual false final false
 void _ctor(float_t time) ;

/// @brief Method Reset addr 0x2b5c2cc size 0xc virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::WaitForSecondsRealtime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForSecondsRealtime, "UnityEngine", "WaitForSecondsRealtime");
