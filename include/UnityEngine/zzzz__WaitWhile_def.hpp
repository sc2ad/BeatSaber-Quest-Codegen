#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine {
class WaitWhile;
}
// Type: UnityEngine::WaitWhile
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10169))
// CS Name: UnityEngine.WaitWhile
class CORDL_TYPE WaitWhile : public UnityEngine::CustomYieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~WaitWhile() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitWhile", modifiers: " const&", def_value: None }]
constexpr WaitWhile(WaitWhile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitWhile", modifiers: "&&", def_value: None }]
constexpr WaitWhile(WaitWhile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitWhile(void* ptr) noexcept : UnityEngine::CustomYieldInstruction(ptr) {
}


  constexpr WaitWhile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitWhile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitWhile& operator=(WaitWhile&& o) noexcept = default;
  constexpr WaitWhile& operator=(WaitWhile const& o) noexcept = default;
                


// Fields

 System::Func_1<bool> __declspec(property(get=__get_m_Predicate, put=__set_m_Predicate))  m_Predicate;

constexpr void __set_m_Predicate(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_m_Predicate() const;


// Properties

 bool __declspec(property(get=get_keepWaiting))  keepWaiting;


// Methods

/// @brief Method get_keepWaiting addr 0x2b5c08c size 0x24 virtual true final false
 bool get_keepWaiting() ;

// Ctor Parameters [CppParam { name: "predicate", ty: "System::Func_1<bool>", modifiers: "", def_value: None }]
explicit WaitWhile(System::Func_1<bool> predicate) ;

/// @brief Method .ctor addr 0x2b5c0b0 size 0x28 virtual false final false
 void _ctor(System::Func_1<bool> predicate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WaitWhile);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitWhile, "UnityEngine", "WaitWhile");
