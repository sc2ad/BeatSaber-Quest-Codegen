#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class JumpReceiver;
}
// Type: ::JumpReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13892))
// CS Name: JumpReceiver
class CORDL_TYPE JumpReceiver : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::INotificationReceiver
constexpr operator  UnityEngine::Playables::INotificationReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JumpReceiver() = default;

// Ctor Parameters [CppParam { name: "", ty: "JumpReceiver", modifiers: " const&", def_value: None }]
constexpr JumpReceiver(JumpReceiver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JumpReceiver", modifiers: "&&", def_value: None }]
constexpr JumpReceiver(JumpReceiver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JumpReceiver(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr JumpReceiver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JumpReceiver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JumpReceiver& operator=(JumpReceiver&& o) noexcept = default;
  constexpr JumpReceiver& operator=(JumpReceiver const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__jumpToDestinationValid_k__BackingField, put=__set__jumpToDestinationValid_k__BackingField))  _jumpToDestinationValid_k__BackingField;

constexpr void __set__jumpToDestinationValid_k__BackingField(bool value) ;

constexpr bool __get__jumpToDestinationValid_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_jumpToDestinationValid, put=set_jumpToDestinationValid))  jumpToDestinationValid;


// Methods

/// @brief Method get_jumpToDestinationValid addr 0x1f838e0 size 0x8 virtual false final false
 bool get_jumpToDestinationValid() ;

/// @brief Method set_jumpToDestinationValid addr 0x1f838e8 size 0xc virtual false final false
 void set_jumpToDestinationValid(bool value) ;

/// @brief Method OnNotify addr 0x1f838f4 size 0x140 virtual true final true
 void OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context) ;

// Ctor Parameters []
explicit JumpReceiver() ;

/// @brief Method .ctor addr 0x1f83a34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::JumpReceiver);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JumpReceiver, "", "JumpReceiver");
