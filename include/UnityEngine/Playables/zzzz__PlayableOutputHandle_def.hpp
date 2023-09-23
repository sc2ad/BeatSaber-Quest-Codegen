#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Type: UnityEngine.Playables::PlayableOutputHandle
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10351))
// CS Name: UnityEngine.Playables.PlayableOutputHandle
struct CORDL_TYPE PlayableOutputHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Playables::PlayableOutputHandle>
constexpr operator  System::IEquatable_1<UnityEngine::Playables::PlayableOutputHandle>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PlayableOutputHandle(::cordl_internals::intptr_t m_Handle, uint32_t m_Version) noexcept;


                    constexpr PlayableOutputHandle(PlayableOutputHandle const&) = default;
                    constexpr PlayableOutputHandle(PlayableOutputHandle&&) = default;
                    constexpr PlayableOutputHandle& operator=(PlayableOutputHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayableOutputHandle& operator=(PlayableOutputHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayableOutputHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Handle() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;

static UnityEngine::Playables::PlayableOutputHandle __declspec(property(get=__get_m_Null, put=__set_m_Null))  m_Null;

static void __set_m_Null(UnityEngine::Playables::PlayableOutputHandle value) ;

static UnityEngine::Playables::PlayableOutputHandle __get_m_Null() ;


// Properties

static UnityEngine::Playables::PlayableOutputHandle __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method get_Null addr 0x2b7b7f0 size 0x58 virtual false final false
static UnityEngine::Playables::PlayableOutputHandle get_Null() ;

/// @brief Method IsPlayableOutputOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool IsPlayableOutputOfType() ;

/// @brief Method GetHashCode addr 0x2b7b848 size 0x34 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2b7b87c size 0x88 virtual false final false
static bool op_Equality(UnityEngine::Playables::PlayableOutputHandle lhs, UnityEngine::Playables::PlayableOutputHandle rhs) ;

/// @brief Method Equals addr 0x2b7b938 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType p) ;

/// @brief Method Equals addr 0x2b7b9b0 size 0x80 virtual true final true
 bool Equals(UnityEngine::Playables::PlayableOutputHandle other) ;

/// @brief Method CompareVersion addr 0x2b7b904 size 0x34 virtual false final false
static bool CompareVersion(UnityEngine::Playables::PlayableOutputHandle lhs, UnityEngine::Playables::PlayableOutputHandle rhs) ;

/// @brief Method IsValid addr 0x2b7ba30 size 0x74 virtual false final false
 bool IsValid() ;

/// @brief Method GetPlayableOutputType addr 0x2b7bae0 size 0x74 virtual false final false
 System::Type GetPlayableOutputType() ;

/// @brief Method SetReferenceObject addr 0x2b7bb90 size 0x84 virtual false final false
 void SetReferenceObject(UnityEngine::Object target) ;

/// @brief Method SetUserData addr 0x2b7bc58 size 0x84 virtual false final false
 void SetUserData(UnityEngine::Object target) ;

/// @brief Method GetSourcePlayable addr 0x2b7bd20 size 0x8c virtual false final false
 UnityEngine::Playables::PlayableHandle GetSourcePlayable() ;

/// @brief Method SetSourcePlayable addr 0x2b7bdf0 size 0x98 virtual false final false
 void SetSourcePlayable(UnityEngine::Playables::PlayableHandle target, int32_t port) ;

/// @brief Method GetSourceOutputPort addr 0x2b7bedc size 0x74 virtual false final false
 int32_t GetSourceOutputPort() ;

/// @brief Method SetWeight addr 0x2b7bf8c size 0x84 virtual false final false
 void SetWeight(float_t weight) ;

/// @brief Method PushNotification addr 0x2b7c05c size 0xa0 virtual false final false
 void PushNotification(UnityEngine::Playables::PlayableHandle origin, UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method AddNotificationReceiver addr 0x2b7c158 size 0x84 virtual false final false
 void AddNotificationReceiver(UnityEngine::Playables::INotificationReceiver receiver) ;

/// @brief Method IsValid_Injected addr 0x2b7baa4 size 0x3c virtual false final false
static bool IsValid_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self) ;

/// @brief Method GetPlayableOutputType_Injected addr 0x2b7bb54 size 0x3c virtual false final false
static System::Type GetPlayableOutputType_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self) ;

/// @brief Method SetReferenceObject_Injected addr 0x2b7bc14 size 0x44 virtual false final false
static void SetReferenceObject_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self, UnityEngine::Object target) ;

/// @brief Method SetUserData_Injected addr 0x2b7bcdc size 0x44 virtual false final false
static void SetUserData_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self, UnityEngine::Object target) ;

/// @brief Method GetSourcePlayable_Injected addr 0x2b7bdac size 0x44 virtual false final false
static void GetSourcePlayable_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self, ByRef<UnityEngine::Playables::PlayableHandle> ret) ;

/// @brief Method SetSourcePlayable_Injected addr 0x2b7be88 size 0x54 virtual false final false
static void SetSourcePlayable_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self, ByRef<UnityEngine::Playables::PlayableHandle> target, int32_t port) ;

/// @brief Method GetSourceOutputPort_Injected addr 0x2b7bf50 size 0x3c virtual false final false
static int32_t GetSourceOutputPort_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self) ;

/// @brief Method SetWeight_Injected addr 0x2b7c010 size 0x4c virtual false final false
static void SetWeight_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self, float_t weight) ;

/// @brief Method PushNotification_Injected addr 0x2b7c0fc size 0x5c virtual false final false
static void PushNotification_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self, ByRef<UnityEngine::Playables::PlayableHandle> origin, UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method AddNotificationReceiver_Injected addr 0x2b7c1dc size 0x44 virtual false final false
static void AddNotificationReceiver_Injected(ByRef<UnityEngine::Playables::PlayableOutputHandle> _unity_self, UnityEngine::Playables::INotificationReceiver receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutputHandle, "UnityEngine.Playables", "PlayableOutputHandle");
