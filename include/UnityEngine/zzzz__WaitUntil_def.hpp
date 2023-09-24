#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine {
class WaitUntil;
}
// Type: UnityEngine::WaitUntil
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10140))
// CS Name: UnityEngine.WaitUntil
class CORDL_TYPE WaitUntil : public UnityEngine::CustomYieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~WaitUntil() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitUntil", modifiers: " const&", def_value: None }]
constexpr WaitUntil(WaitUntil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitUntil", modifiers: "&&", def_value: None }]
constexpr WaitUntil(WaitUntil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitUntil(void* ptr) noexcept : UnityEngine::CustomYieldInstruction(ptr) {
}


  constexpr WaitUntil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitUntil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitUntil& operator=(WaitUntil&& o) noexcept = default;
  constexpr WaitUntil& operator=(WaitUntil const& o) noexcept = default;
                


// Fields

 System::Func_1<bool> __declspec(property(get=__get_m_Predicate, put=__set_m_Predicate))  m_Predicate;

constexpr void __set_m_Predicate(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_m_Predicate() const;


// Properties

 bool __declspec(property(get=get_keepWaiting))  keepWaiting;


// Methods

/// @brief Method get_keepWaiting addr 0x2b57c64 size 0x30 virtual true final false
 bool get_keepWaiting() ;

static UnityEngine::WaitUntil New_ctor(System::Func_1<bool> predicate) ;

/// @brief Method .ctor addr 0x2b57c94 size 0x28 virtual false final false
 void _ctor(System::Func_1<bool> predicate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WaitUntil);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitUntil, "UnityEngine", "WaitUntil");
