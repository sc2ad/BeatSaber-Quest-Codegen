#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class ____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserPairingOptions;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputControlScheme__MatchResult;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct ____UnityEngine__InputSystem__Users__InputUser__UserFlags;
}
namespace UnityEngine::InputSystem::Users {
class ____UnityEngine__InputSystem__Users__InputUser____c;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Users {
struct ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount;
}
namespace UnityEngine::InputSystem::Users {
struct ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax;
}
namespace UnityEngine::InputSystem::Users {
struct ____UnityEngine__InputSystem__Users__InputUser__GlobalState;
}
namespace UnityEngine::InputSystem::Users {
struct ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection;
}
namespace UnityEngine::InputSystem::Users {
struct ____UnityEngine__InputSystem__Users__InputUser__UserData;
}
// Type: ::ControlSchemeChangeSyntax
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6440))
// CS Name: UnityEngine.InputSystem.Users.InputUser::ControlSchemeChangeSyntax
struct CORDL_TYPE ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax(int32_t m_UserIndex) noexcept;


                    constexpr ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax(____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax const&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax(____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax&&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax& operator=(____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax& operator=(____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_UserIndex, put=__set_m_UserIndex))  m_UserIndex;

constexpr void __set_m_UserIndex(int32_t value) ;

constexpr int32_t __get_m_UserIndex() const;


// Methods

/// @brief Method AndPairRemainingDevices addr 0x293b848 size 0x24 virtual false final false
 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax AndPairRemainingDevices() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
// Type: ::UserFlags
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6441))
// CS Name: UnityEngine.InputSystem.Users.InputUser::UserFlags
struct CORDL_TYPE ____UnityEngine__InputSystem__Users__InputUser__UserFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser__UserFlags(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserFlags(____UnityEngine__InputSystem__Users__InputUser__UserFlags const&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserFlags(____UnityEngine__InputSystem__Users__InputUser__UserFlags&&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserFlags& operator=(____UnityEngine__InputSystem__Users__InputUser__UserFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserFlags& operator=(____UnityEngine__InputSystem__Users__InputUser__UserFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Users__InputUser__UserFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__Users__InputUser__UserFlags_Unwrapped : int32_t {
__BindToAllDevices = 1,
__UserAccountSelectionInProgress = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__Users__InputUser__UserFlags_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__Users__InputUser__UserFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BindToAllDevices offset 0
static ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags const BindToAllDevices;

/// @brief Field UserAccountSelectionInProgress offset 0
static ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags const UserAccountSelectionInProgress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
// Type: ::UserData
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6442))
// CS Name: UnityEngine.InputSystem.Users.InputUser::UserData
struct CORDL_TYPE ____UnityEngine__InputSystem__Users__InputUser__UserData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: None }, CppParam { name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actions", ty: "::UnityEngine::InputSystem::IInputActionCollection", modifiers: "", def_value: None }, CppParam { name: "controlScheme", ty: "::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: None }, CppParam { name: "controlSchemeMatch", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult", modifiers: "", def_value: None }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser__UserData(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle, ::StringW platformUserAccountName, ::StringW platformUserAccountId, int32_t deviceCount, int32_t deviceStartIndex, ::UnityEngine::InputSystem::IInputActionCollection actions, ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult controlSchemeMatch, int32_t lostDeviceCount, int32_t lostDeviceStartIndex, ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags flags) noexcept;


                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserData(____UnityEngine__InputSystem__Users__InputUser__UserData const&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserData(____UnityEngine__InputSystem__Users__InputUser__UserData&&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserData& operator=(____UnityEngine__InputSystem__Users__InputUser__UserData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__UserData& operator=(____UnityEngine__InputSystem__Users__InputUser__UserData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xb8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Users__InputUser__UserData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> __declspec(property(get=__get_platformUserAccountHandle, put=__set_platformUserAccountHandle))  platformUserAccountHandle;

constexpr void __set_platformUserAccountHandle(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> __get_platformUserAccountHandle() const;

 ::StringW __declspec(property(get=__get_platformUserAccountName, put=__set_platformUserAccountName))  platformUserAccountName;

constexpr void __set_platformUserAccountName(::StringW value) ;

constexpr ::StringW __get_platformUserAccountName() const;

 ::StringW __declspec(property(get=__get_platformUserAccountId, put=__set_platformUserAccountId))  platformUserAccountId;

constexpr void __set_platformUserAccountId(::StringW value) ;

constexpr ::StringW __get_platformUserAccountId() const;

 int32_t __declspec(property(get=__get_deviceCount, put=__set_deviceCount))  deviceCount;

constexpr void __set_deviceCount(int32_t value) ;

constexpr int32_t __get_deviceCount() const;

 int32_t __declspec(property(get=__get_deviceStartIndex, put=__set_deviceStartIndex))  deviceStartIndex;

constexpr void __set_deviceStartIndex(int32_t value) ;

constexpr int32_t __get_deviceStartIndex() const;

 ::UnityEngine::InputSystem::IInputActionCollection __declspec(property(get=__get_actions, put=__set_actions))  actions;

constexpr void __set_actions(::UnityEngine::InputSystem::IInputActionCollection value) ;

constexpr ::UnityEngine::InputSystem::IInputActionCollection __get_actions() const;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=__get_controlScheme, put=__set_controlScheme))  controlScheme;

constexpr void __set_controlScheme(::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> __get_controlScheme() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult __declspec(property(get=__get_controlSchemeMatch, put=__set_controlSchemeMatch))  controlSchemeMatch;

constexpr void __set_controlSchemeMatch(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult __get_controlSchemeMatch() const;

 int32_t __declspec(property(get=__get_lostDeviceCount, put=__set_lostDeviceCount))  lostDeviceCount;

constexpr void __set_lostDeviceCount(int32_t value) ;

constexpr int32_t __get_lostDeviceCount() const;

 int32_t __declspec(property(get=__get_lostDeviceStartIndex, put=__set_lostDeviceStartIndex))  lostDeviceStartIndex;

constexpr void __set_lostDeviceStartIndex(int32_t value) ;

constexpr int32_t __get_lostDeviceStartIndex() const;

 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags value) ;

constexpr ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags __get_flags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
// Type: ::CompareDevicesByUserAccount
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6443))
// CS Name: UnityEngine.InputSystem.Users.InputUser::CompareDevicesByUserAccount
struct CORDL_TYPE ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice>
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice>() const;

// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle) noexcept;


                    constexpr ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount(____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount const&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount(____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount&&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount& operator=(____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount& operator=(____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Users::InputUserAccountHandle __declspec(property(get=__get_platformUserAccountHandle, put=__set_platformUserAccountHandle))  platformUserAccountHandle;

constexpr void __set_platformUserAccountHandle(::UnityEngine::InputSystem::Users::InputUserAccountHandle value) ;

constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle __get_platformUserAccountHandle() const;


// Methods

/// @brief Method Compare addr 0x293b86c size 0x3c virtual true final true
 int32_t Compare(::UnityEngine::InputSystem::InputDevice x, ::UnityEngine::InputSystem::InputDevice y) ;

/// @brief Method GetUserAccountHandleForDevice addr 0x293b8a8 size 0xc virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice device) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
// Type: ::OngoingAccountSelection
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6444))
// CS Name: UnityEngine.InputSystem.Users.InputUser::OngoingAccountSelection
struct CORDL_TYPE ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection(::UnityEngine::InputSystem::InputDevice device, uint32_t userId) noexcept;


                    constexpr ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection(____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection const&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection(____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection&&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection& operator=(____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection& operator=(____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_device, put=__set_device))  device;

constexpr void __set_device(::UnityEngine::InputSystem::InputDevice value) ;

constexpr ::UnityEngine::InputSystem::InputDevice __get_device() const;

 uint32_t __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(uint32_t value) ;

constexpr uint32_t __get_userId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
// Type: ::GlobalState
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6445))
// CS Name: UnityEngine.InputSystem.Users.InputUser::GlobalState
struct CORDL_TYPE ____UnityEngine__InputSystem__Users__InputUser__GlobalState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allUsers", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser>", modifiers: "", def_value: None }, CppParam { name: "allUserData", ty: "::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserData>", modifiers: "", def_value: None }, CppParam { name: "allPairedDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: None }, CppParam { name: "allLostDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: None }, CppParam { name: "ongoingAccountSelections", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>", modifiers: "", def_value: None }, CppParam { name: "onChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice>>", modifiers: "", def_value: None }, CppParam { name: "onUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr>>", modifiers: "", def_value: None }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>", modifiers: "", def_value: None }, CppParam { name: "actionChangeDelegate", ty: "::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange>", modifiers: "", def_value: None }, CppParam { name: "onDeviceChangeDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange>", modifiers: "", def_value: None }, CppParam { name: "onEventDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: None }, CppParam { name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onEventHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser__GlobalState(int32_t pairingStateVersion, uint32_t lastUserId, int32_t allUserCount, int32_t allPairedDeviceCount, int32_t allLostDeviceCount, ::ArrayW<::UnityEngine::InputSystem::Users::InputUser> allUsers, ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserData> allUserData, ::ArrayW<::UnityEngine::InputSystem::InputDevice> allPairedDevices, ::ArrayW<::UnityEngine::InputSystem::InputDevice> allLostDevices, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> ongoingAccountSelections, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice>> onChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr>> onUnpairedDeviceUsed, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>> onPreFilterUnpairedDeviceUsed, ::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange> actionChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange> onDeviceChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> onEventDelegate, bool onActionChangeHooked, bool onDeviceChangeHooked, bool onEventHooked, int32_t listenForUnpairedDeviceActivity) noexcept;


                    constexpr ____UnityEngine__InputSystem__Users__InputUser__GlobalState(____UnityEngine__InputSystem__Users__InputUser__GlobalState const&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__GlobalState(____UnityEngine__InputSystem__Users__InputUser__GlobalState&&) = default;
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__GlobalState& operator=(____UnityEngine__InputSystem__Users__InputUser__GlobalState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Users__InputUser__GlobalState& operator=(____UnityEngine__InputSystem__Users__InputUser__GlobalState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x168};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Users__InputUser__GlobalState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_pairingStateVersion, put=__set_pairingStateVersion))  pairingStateVersion;

constexpr void __set_pairingStateVersion(int32_t value) ;

constexpr int32_t __get_pairingStateVersion() const;

 uint32_t __declspec(property(get=__get_lastUserId, put=__set_lastUserId))  lastUserId;

constexpr void __set_lastUserId(uint32_t value) ;

constexpr uint32_t __get_lastUserId() const;

 int32_t __declspec(property(get=__get_allUserCount, put=__set_allUserCount))  allUserCount;

constexpr void __set_allUserCount(int32_t value) ;

constexpr int32_t __get_allUserCount() const;

 int32_t __declspec(property(get=__get_allPairedDeviceCount, put=__set_allPairedDeviceCount))  allPairedDeviceCount;

constexpr void __set_allPairedDeviceCount(int32_t value) ;

constexpr int32_t __get_allPairedDeviceCount() const;

 int32_t __declspec(property(get=__get_allLostDeviceCount, put=__set_allLostDeviceCount))  allLostDeviceCount;

constexpr void __set_allLostDeviceCount(int32_t value) ;

constexpr int32_t __get_allLostDeviceCount() const;

 ::ArrayW<::UnityEngine::InputSystem::Users::InputUser> __declspec(property(get=__get_allUsers, put=__set_allUsers))  allUsers;

constexpr void __set_allUsers(::ArrayW<::UnityEngine::InputSystem::Users::InputUser> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::InputUser> __get_allUsers() const;

 ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserData> __declspec(property(get=__get_allUserData, put=__set_allUserData))  allUserData;

constexpr void __set_allUserData(::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserData> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserData> __get_allUserData() const;

 ::ArrayW<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_allPairedDevices, put=__set_allPairedDevices))  allPairedDevices;

constexpr void __set_allPairedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice> __get_allPairedDevices() const;

 ::ArrayW<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_allLostDevices, put=__set_allLostDevices))  allLostDevices;

constexpr void __set_allLostDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice> __get_allLostDevices() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> __declspec(property(get=__get_ongoingAccountSelections, put=__set_ongoingAccountSelections))  ongoingAccountSelections;

constexpr void __set_ongoingAccountSelections(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> __get_ongoingAccountSelections() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice>> __declspec(property(get=__get_onChange, put=__set_onChange))  onChange;

constexpr void __set_onChange(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice>> __get_onChange() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr>> __declspec(property(get=__get_onUnpairedDeviceUsed, put=__set_onUnpairedDeviceUsed))  onUnpairedDeviceUsed;

constexpr void __set_onUnpairedDeviceUsed(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr>> __get_onUnpairedDeviceUsed() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>> __declspec(property(get=__get_onPreFilterUnpairedDeviceUsed, put=__set_onPreFilterUnpairedDeviceUsed))  onPreFilterUnpairedDeviceUsed;

constexpr void __set_onPreFilterUnpairedDeviceUsed(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>> __get_onPreFilterUnpairedDeviceUsed() const;

 ::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange> __declspec(property(get=__get_actionChangeDelegate, put=__set_actionChangeDelegate))  actionChangeDelegate;

constexpr void __set_actionChangeDelegate(::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange> value) ;

constexpr ::System::Action_2<::bs_hook::Il2CppWrapperType,::UnityEngine::InputSystem::InputActionChange> __get_actionChangeDelegate() const;

 ::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange> __declspec(property(get=__get_onDeviceChangeDelegate, put=__set_onDeviceChangeDelegate))  onDeviceChangeDelegate;

constexpr void __set_onDeviceChangeDelegate(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange> value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange> __get_onDeviceChangeDelegate() const;

 ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_onEventDelegate, put=__set_onEventDelegate))  onEventDelegate;

constexpr void __set_onEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> __get_onEventDelegate() const;

 bool __declspec(property(get=__get_onActionChangeHooked, put=__set_onActionChangeHooked))  onActionChangeHooked;

constexpr void __set_onActionChangeHooked(bool value) ;

constexpr bool __get_onActionChangeHooked() const;

 bool __declspec(property(get=__get_onDeviceChangeHooked, put=__set_onDeviceChangeHooked))  onDeviceChangeHooked;

constexpr void __set_onDeviceChangeHooked(bool value) ;

constexpr bool __get_onDeviceChangeHooked() const;

 bool __declspec(property(get=__get_onEventHooked, put=__set_onEventHooked))  onEventHooked;

constexpr void __set_onEventHooked(bool value) ;

constexpr bool __get_onEventHooked() const;

 int32_t __declspec(property(get=__get_listenForUnpairedDeviceActivity, put=__set_listenForUnpairedDeviceActivity))  listenForUnpairedDeviceActivity;

constexpr void __set_listenForUnpairedDeviceActivity(int32_t value) ;

constexpr int32_t __get_listenForUnpairedDeviceActivity() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
// Type: ::<>c
namespace UnityEngine::InputSystem::Users {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6446))
// CS Name: UnityEngine.InputSystem.Users.InputUser::<>c
class CORDL_TYPE ____UnityEngine__InputSystem__Users__InputUser____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__Users__InputUser____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Users__InputUser____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser____c(____UnityEngine__InputSystem__Users__InputUser____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Users__InputUser____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Users__InputUser____c(____UnityEngine__InputSystem__Users__InputUser____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Users__InputUser____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Users__InputUser____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Users__InputUser____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Users__InputUser____c& operator=(____UnityEngine__InputSystem__Users__InputUser____c&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Users__InputUser____c& operator=(____UnityEngine__InputSystem__Users__InputUser____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser____c value) ;

static ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser____c __get___9() ;

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState> __declspec(property(get=__get___9__86_0, put=__set___9__86_0))  __9__86_0;

static void __set___9__86_0(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState> value) ;

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState> __get___9__86_0() ;

static ::System::Action __declspec(property(get=__get___9__86_1, put=__set___9__86_1))  __9__86_1;

static void __set___9__86_1(::System::Action value) ;

static ::System::Action __get___9__86_1() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Users__InputUser____c() ;

/// @brief Method .ctor addr 0x293b944 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SaveAndResetState>b__86_0 addr 0x293b94c size 0x74 virtual false final false
 void _SaveAndResetState_b__86_0(ByRef<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState> state) ;

/// @brief Method <SaveAndResetState>b__86_1 addr 0x293b9c0 size 0x8 virtual false final false
 void _SaveAndResetState_b__86_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
// Type: UnityEngine.InputSystem.Users::InputUser
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6447))
// CS Name: UnityEngine.InputSystem.Users.InputUser
struct CORDL_TYPE InputUser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser____c;

using GlobalState = ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState;

using OngoingAccountSelection = ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection;

using CompareDevicesByUserAccount = ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount;

using UserData = ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserData;

using UserFlags = ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags;

using ControlSchemeChangeSyntax = ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>() const;

// Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputUser(uint32_t m_Id) noexcept;


                    constexpr InputUser(InputUser const&) = default;
                    constexpr InputUser(InputUser&&) = default;
                    constexpr InputUser& operator=(InputUser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputUser& operator=(InputUser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputUser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field InvalidId offset 0
static constexpr uint32_t  InvalidId{0u};

 uint32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(uint32_t value) ;

constexpr uint32_t __get_m_Id() const;

static ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState __declspec(property(get=__get_s_GlobalState, put=__set_s_GlobalState))  s_GlobalState;

static void __set_s_GlobalState(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState value) ;

static ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState __get_s_GlobalState() ;


// Properties

 bool __declspec(property(get=get_valid))  valid;

 int32_t __declspec(property(get=get_index))  index;

 uint32_t __declspec(property(get=get_id))  id;

 ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> __declspec(property(get=get_platformUserAccountHandle))  platformUserAccountHandle;

 ::StringW __declspec(property(get=get_platformUserAccountName))  platformUserAccountName;

 ::StringW __declspec(property(get=get_platformUserAccountId))  platformUserAccountId;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_pairedDevices))  pairedDevices;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_lostDevices))  lostDevices;

 ::UnityEngine::InputSystem::IInputActionCollection __declspec(property(get=get_actions))  actions;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=get_controlScheme))  controlScheme;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult __declspec(property(get=get_controlSchemeMatch))  controlSchemeMatch;

 bool __declspec(property(get=get_hasMissingRequiredDevices))  hasMissingRequiredDevices;

static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> __declspec(property(get=get_all))  all;

static int32_t __declspec(property(get=get_listenForUnpairedDeviceActivity, put=set_listenForUnpairedDeviceActivity))  listenForUnpairedDeviceActivity;


// Methods

/// @brief Method get_valid addr 0x292a8a8 size 0xa4 virtual false final false
 bool get_valid() ;

/// @brief Method get_index addr 0x2937200 size 0xf4 virtual false final false
 int32_t get_index() ;

/// @brief Method get_id addr 0x2937388 size 0x8 virtual false final false
 uint32_t get_id() ;

/// @brief Method get_platformUserAccountHandle addr 0x2937390 size 0x90 virtual false final false
 ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> get_platformUserAccountHandle() ;

/// @brief Method get_platformUserAccountName addr 0x2937420 size 0x78 virtual false final false
 ::StringW get_platformUserAccountName() ;

/// @brief Method get_platformUserAccountId addr 0x2937498 size 0x78 virtual false final false
 ::StringW get_platformUserAccountId() ;

/// @brief Method get_pairedDevices addr 0x292b610 size 0xac virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice> get_pairedDevices() ;

/// @brief Method get_lostDevices addr 0x2937510 size 0xac virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice> get_lostDevices() ;

/// @brief Method get_actions addr 0x29375bc size 0x78 virtual false final false
 ::UnityEngine::InputSystem::IInputActionCollection get_actions() ;

/// @brief Method get_controlScheme addr 0x292a94c size 0x8c virtual false final false
 ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> get_controlScheme() ;

/// @brief Method get_controlSchemeMatch addr 0x2937634 size 0x8c virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult get_controlSchemeMatch() ;

/// @brief Method get_hasMissingRequiredDevices addr 0x292b704 size 0x7c virtual false final false
 bool get_hasMissingRequiredDevices() ;

/// @brief Method get_all addr 0x29376c0 size 0x80 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> get_all() ;

/// @brief Method add_onChange addr 0x292e934 size 0xb8 virtual false final false
static void add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice> value) ;

/// @brief Method remove_onChange addr 0x292f4cc size 0xb8 virtual false final false
static void remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice> value) ;

/// @brief Method add_onUnpairedDeviceUsed addr 0x292ecf4 size 0xdc virtual false final false
static void add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

/// @brief Method remove_onUnpairedDeviceUsed addr 0x292efc0 size 0xf4 virtual false final false
static void remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

/// @brief Method add_onPrefilterUnpairedDeviceActivity addr 0x292edd0 size 0xb8 virtual false final false
static void add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> value) ;

/// @brief Method remove_onPrefilterUnpairedDeviceActivity addr 0x292f0b4 size 0xb8 virtual false final false
static void remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> value) ;

/// @brief Method get_listenForUnpairedDeviceActivity addr 0x292ee88 size 0x48 virtual false final false
static int32_t get_listenForUnpairedDeviceActivity() ;

/// @brief Method set_listenForUnpairedDeviceActivity addr 0x292eed0 size 0xf0 virtual false final false
static void set_listenForUnpairedDeviceActivity(int32_t value) ;

/// @brief Method ToString addr 0x29378f4 size 0x26c virtual true final false
 ::StringW ToString() ;

/// @brief Method AssociateActionsWithUser addr 0x292db98 size 0x338 virtual false final false
 void AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection actions) ;

/// @brief Method ActivateControlScheme addr 0x292e1ec size 0x78 virtual false final false
 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax ActivateControlScheme(::StringW schemeName) ;

/// @brief Method TryFindControlScheme addr 0x2938010 size 0x280 virtual false final false
 bool TryFindControlScheme(::StringW schemeName, ByRef<::UnityEngine::InputSystem::InputControlScheme> scheme) ;

/// @brief Method FindControlScheme addr 0x292c188 size 0xbc virtual false final false
 void FindControlScheme(::StringW schemeName, ByRef<::UnityEngine::InputSystem::InputControlScheme> scheme) ;

/// @brief Method ActivateControlScheme addr 0x292e018 size 0x1d4 virtual false final false
 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme scheme) ;

/// @brief Method ActivateControlSchemeInternal addr 0x2937c74 size 0x39c virtual false final false
 void ActivateControlSchemeInternal(int32_t userIndex, ::UnityEngine::InputSystem::InputControlScheme scheme) ;

/// @brief Method UnpairDevice addr 0x29302dc size 0xdc virtual false final false
 void UnpairDevice(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method UnpairDevices addr 0x292d400 size 0x278 virtual false final false
 void UnpairDevices() ;

/// @brief Method RemoveLostDevicesForUser addr 0x2938dc0 size 0x12c virtual false final false
static void RemoveLostDevicesForUser(int32_t userIndex) ;

/// @brief Method UnpairDevicesAndRemoveUser addr 0x292df88 size 0x24 virtual false final false
 void UnpairDevicesAndRemoveUser() ;

/// @brief Method GetUnpairedInputDevices addr 0x292da1c size 0x74 virtual false final false
static ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice> GetUnpairedInputDevices() ;

/// @brief Method GetUnpairedInputDevices addr 0x2939604 size 0x214 virtual false final false
static int32_t GetUnpairedInputDevices(ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice>> list) ;

/// @brief Method FindUserPairedToDevice addr 0x2939818 size 0x100 virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method FindUserByAccount addr 0x2939a04 size 0x13c virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle) ;

/// @brief Method CreateUserWithoutPairedDevices addr 0x292dfac size 0x6c virtual false final false
static ::UnityEngine::InputSystem::Users::InputUser CreateUserWithoutPairedDevices() ;

/// @brief Method PerformPairingWithDevice addr 0x292d678 size 0x1c4 virtual false final false
static ::UnityEngine::InputSystem::Users::InputUser PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::Users::InputUser user, ::UnityEngine::InputSystem::Users::InputUserPairingOptions options) ;

/// @brief Method InitiateUserAccountSelection addr 0x2939d20 size 0x118 virtual false final false
static bool InitiateUserAccountSelection(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions options) ;

/// @brief Method Equals addr 0x293a75c size 0x10 virtual true final true
 bool Equals(::UnityEngine::InputSystem::Users::InputUser other) ;

/// @brief Method Equals addr 0x293a76c size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x293a7e4 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x292fac4 size 0xc virtual false final false
static bool op_Equality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right) ;

/// @brief Method op_Inequality addr 0x2939d14 size 0xc virtual false final false
static bool op_Inequality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right) ;

/// @brief Method AddUser addr 0x2939c24 size 0xf0 virtual false final false
static int32_t AddUser() ;

/// @brief Method RemoveUser addr 0x293934c size 0x2b8 virtual false final false
static void RemoveUser(int32_t userIndex) ;

/// @brief Method Notify addr 0x2938290 size 0x308 virtual false final false
static void Notify(int32_t userIndex, ::UnityEngine::InputSystem::Users::InputUserChange change, ::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method TryFindUserIndex addr 0x29372f4 size 0x94 virtual false final false
static int32_t TryFindUserIndex(uint32_t userId) ;

/// @brief Method TryFindUserIndex addr 0x2939b40 size 0xe4 virtual false final false
static int32_t TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformHandle) ;

/// @brief Method TryFindUserIndex addr 0x2939918 size 0xec virtual false final false
static int32_t TryFindUserIndex(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method AddDeviceToUser addr 0x2939e38 size 0x40c virtual false final false
static void AddDeviceToUser(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice device, bool asLostDevice, bool dontUpdateControlScheme) ;

/// @brief Method RemoveDeviceFromUser addr 0x2938eec size 0x460 virtual false final false
static void RemoveDeviceFromUser(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice device, bool asLostDevice) ;

/// @brief Method UpdateControlSchemeMatch addr 0x2938598 size 0x828 virtual false final false
static void UpdateControlSchemeMatch(int32_t userIndex, bool autoPairMissing) ;

/// @brief Method UpdatePlatformUserAccount addr 0x293a244 size 0x36c virtual false final false
static int64_t UpdatePlatformUserAccount(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method QueryPairedPlatformUserAccount addr 0x293a94c size 0x184 virtual false final false
static int64_t QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice device, ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>> platformAccountHandle, ByRef<::StringW> platformAccountName, ByRef<::StringW> platformAccountId) ;

/// @brief Method InitiateUserAccountSelectionAtPlatformLevel addr 0x293a5b0 size 0xc0 virtual false final false
static bool InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method OnActionChange addr 0x293aad0 size 0xc8 virtual false final false
static void OnActionChange(::bs_hook::Il2CppWrapperType obj, ::UnityEngine::InputSystem::InputActionChange change) ;

/// @brief Method OnDeviceChange addr 0x293ab98 size 0x488 virtual false final false
static void OnDeviceChange(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::InputDeviceChange change) ;

/// @brief Method FindLostDevice addr 0x293b020 size 0xb8 virtual false final false
static int32_t FindLostDevice(::UnityEngine::InputSystem::InputDevice device, int32_t startIndex) ;

/// @brief Method OnEvent addr 0x293b0d8 size 0x4bc virtual false final false
static void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method SaveAndResetState addr 0x293b594 size 0x1e4 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ISavedState SaveAndResetState() ;

/// @brief Method HookIntoActionChange addr 0x2937b60 size 0x114 virtual false final false
static void HookIntoActionChange() ;

/// @brief Method UnhookFromActionChange addr 0x293a878 size 0xd4 virtual false final false
static void UnhookFromActionChange() ;

/// @brief Method HookIntoDeviceChange addr 0x293a670 size 0xec virtual false final false
static void HookIntoDeviceChange() ;

/// @brief Method UnhookFromDeviceChange addr 0x293a7ec size 0x8c virtual false final false
static void UnhookFromDeviceChange() ;

/// @brief Method HookIntoEvents addr 0x2937740 size 0x10c virtual false final false
static void HookIntoEvents() ;

/// @brief Method UnhookFromDeviceStateChange addr 0x293784c size 0xa8 virtual false final false
static void UnhookFromDeviceStateChange() ;

/// @brief Method DisposeAndResetGlobalState addr 0x293b778 size 0xb8 virtual false final false
static void DisposeAndResetGlobalState() ;

/// @brief Method ResetGlobals addr 0x293b830 size 0x18 virtual false final false
static void ResetGlobals() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserFlags, "UnityEngine.InputSystem.Users", "InputUser/UserFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser____c, "UnityEngine.InputSystem.Users", "InputUser/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser, "UnityEngine.InputSystem.Users", "InputUser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount, "UnityEngine.InputSystem.Users", "InputUser/CompareDevicesByUserAccount");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax, "UnityEngine.InputSystem.Users", "InputUser/ControlSchemeChangeSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__GlobalState, "UnityEngine.InputSystem.Users", "InputUser/GlobalState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection, "UnityEngine.InputSystem.Users", "InputUser/OngoingAccountSelection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__UserData, "UnityEngine.InputSystem.Users", "InputUser/UserData");
