#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalAsset;
}
// Type: UnityEngine.Timeline::SignalAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14103))
// CS Name: UnityEngine.Timeline.SignalAsset
class CORDL_TYPE SignalAsset : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignalAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalAsset", modifiers: " const&", def_value: None }]
constexpr SignalAsset(SignalAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalAsset", modifiers: "&&", def_value: None }]
constexpr SignalAsset(SignalAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalAsset(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr SignalAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalAsset& operator=(SignalAsset&& o) noexcept = default;
  constexpr SignalAsset& operator=(SignalAsset const& o) noexcept = default;
                


// Fields

static System::Action_1<UnityEngine::Timeline::SignalAsset> __declspec(property(get=__get_OnEnableCallback, put=__set_OnEnableCallback))  OnEnableCallback;

static void __set_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset> value) ;

static System::Action_1<UnityEngine::Timeline::SignalAsset> __get_OnEnableCallback() ;


// Methods

/// @brief Method add_OnEnableCallback addr 0x2ad0408 size 0xcc virtual false final false
static void add_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset> value) ;

/// @brief Method remove_OnEnableCallback addr 0x2ad04d4 size 0xcc virtual false final false
static void remove_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset> value) ;

/// @brief Method OnEnable addr 0x2ad05a0 size 0x6c virtual false final false
 void OnEnable() ;

static UnityEngine::Timeline::SignalAsset New_ctor() ;

/// @brief Method .ctor addr 0x2ad060c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::SignalAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalAsset, "UnityEngine.Timeline", "SignalAsset");
