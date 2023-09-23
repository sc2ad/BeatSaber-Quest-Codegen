#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableOutputExtensions;
}
// Type: UnityEngine.Playables::PlayableOutputExtensions
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10362))
// CS Name: UnityEngine.Playables.PlayableOutputExtensions
class CORDL_TYPE PlayableOutputExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlayableOutputExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableOutputExtensions", modifiers: " const&", def_value: None }]
constexpr PlayableOutputExtensions(PlayableOutputExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableOutputExtensions", modifiers: "&&", def_value: None }]
constexpr PlayableOutputExtensions(PlayableOutputExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayableOutputExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayableOutputExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayableOutputExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayableOutputExtensions& operator=(PlayableOutputExtensions&& o) noexcept = default;
  constexpr PlayableOutputExtensions& operator=(PlayableOutputExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SetReferenceObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetReferenceObject(U output, UnityEngine::Object value) ;

/// @brief Method SetUserData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetUserData(U output, UnityEngine::Object value) ;

/// @brief Method GetSourcePlayable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static UnityEngine::Playables::Playable GetSourcePlayable(U output) ;

/// @brief Method SetSourcePlayable addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U,typename V>
static void SetSourcePlayable(U output, V value, int32_t port) ;

/// @brief Method GetSourceOutputPort addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static int32_t GetSourceOutputPort(U output) ;

/// @brief Method SetWeight addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetWeight(U output, float_t value) ;

/// @brief Method PushNotification addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void PushNotification(U output, UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method AddNotificationReceiver addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void AddNotificationReceiver(U output, UnityEngine::Playables::INotificationReceiver receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::PlayableOutputExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutputExtensions, "UnityEngine.Playables", "PlayableOutputExtensions");
