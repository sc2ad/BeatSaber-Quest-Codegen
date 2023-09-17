#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerStatusData__UserMessage;
}
namespace GlobalNamespace {
class ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage;
}
// Type: ::AvailabilityStatus
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4478))
// CS Name: MultiplayerStatusData::AvailabilityStatus
struct CORDL_TYPE ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus(____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus const&) = default;
                    constexpr ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus(____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus&&) = default;
                    constexpr ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus& operator=(____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus& operator=(____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MultiplayerStatusData__AvailabilityStatus_Unwrapped : int32_t {
__Online = 0,
__MaintenanceUpcoming = 1,
__Offline = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MultiplayerStatusData__AvailabilityStatus_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MultiplayerStatusData__AvailabilityStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Online offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus const Online;

/// @brief Field MaintenanceUpcoming offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus const MaintenanceUpcoming;

/// @brief Field Offline offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus const Offline;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalizedMessage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4479))
// CS Name: MultiplayerStatusData::UserMessage::LocalizedMessage
class CORDL_TYPE ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage", modifiers: " const&", def_value: None }]
constexpr ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage(______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage", modifiers: "&&", def_value: None }]
constexpr ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage(______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage& operator=(______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage&& o) noexcept = default;
  constexpr ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage& operator=(______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(::StringW value) ;

constexpr ::StringW __get_language() const;

 ::StringW __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(::StringW value) ;

constexpr ::StringW __get_message() const;


// Methods

// Ctor Parameters []
explicit ______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage() ;

/// @brief Method .ctor addr 0x21f1388 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UserMessage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4480))
// CS Name: MultiplayerStatusData::UserMessage
class CORDL_TYPE ____GlobalNamespace__MultiplayerStatusData__UserMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LocalizedMessage = ::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MultiplayerStatusData__UserMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerStatusData__UserMessage", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerStatusData__UserMessage(____GlobalNamespace__MultiplayerStatusData__UserMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerStatusData__UserMessage", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerStatusData__UserMessage(____GlobalNamespace__MultiplayerStatusData__UserMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerStatusData__UserMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerStatusData__UserMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerStatusData__UserMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerStatusData__UserMessage& operator=(____GlobalNamespace__MultiplayerStatusData__UserMessage&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerStatusData__UserMessage& operator=(____GlobalNamespace__MultiplayerStatusData__UserMessage const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage> __declspec(property(get=__get_localizations, put=__set_localizations))  localizations;

constexpr void __set_localizations(::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage> value) ;

constexpr ::ArrayW<::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage> __get_localizations() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerStatusData__UserMessage() ;

/// @brief Method .ctor addr 0x21f1380 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerStatusData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4481))
// CS Name: MultiplayerStatusData
class CORDL_TYPE MultiplayerStatusData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UserMessage = ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage;

using AvailabilityStatus = ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerStatusData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: " const&", def_value: None }]
constexpr MultiplayerStatusData(MultiplayerStatusData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusData", modifiers: "&&", def_value: None }]
constexpr MultiplayerStatusData(MultiplayerStatusData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerStatusData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerStatusData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerStatusData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerStatusData& operator=(MultiplayerStatusData&& o) noexcept = default;
  constexpr MultiplayerStatusData& operator=(MultiplayerStatusData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_minimumAppVersion, put=__set_minimumAppVersion))  minimumAppVersion;

constexpr void __set_minimumAppVersion(::StringW value) ;

constexpr ::StringW __get_minimumAppVersion() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus __get_status() const;

 int64_t __declspec(property(get=__get_maintenanceStartTime, put=__set_maintenanceStartTime))  maintenanceStartTime;

constexpr void __set_maintenanceStartTime(int64_t value) ;

constexpr int64_t __get_maintenanceStartTime() const;

 int64_t __declspec(property(get=__get_maintenanceEndTime, put=__set_maintenanceEndTime))  maintenanceEndTime;

constexpr void __set_maintenanceEndTime(int64_t value) ;

constexpr int64_t __get_maintenanceEndTime() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage __declspec(property(get=__get_userMessage, put=__set_userMessage))  userMessage;

constexpr void __set_userMessage(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage __get_userMessage() const;

 bool __declspec(property(get=__get_useGamelift, put=__set_useGamelift))  useGamelift;

constexpr void __set_useGamelift(bool value) ;

constexpr bool __get_useGamelift() const;

 bool __declspec(property(get=__get_useXPlatformAuth, put=__set_useXPlatformAuth))  useXPlatformAuth;

constexpr void __set_useXPlatformAuth(bool value) ;

constexpr bool __get_useXPlatformAuth() const;


// Properties

 ::StringW __declspec(property(get=get__minimumAppVersion, put=set__minimumAppVersion))  _minimumAppVersion;

 int64_t __declspec(property(get=get__maintenanceStartTime, put=set__maintenanceStartTime))  _maintenanceStartTime;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage __declspec(property(get=get__userMessage, put=set__userMessage))  _userMessage;

 bool __declspec(property(get=get__useGamelift, put=set__useGamelift))  _useGamelift;

 bool __declspec(property(get=get__useXPlatformAuth, put=set__useXPlatformAuth))  _useXPlatformAuth;


// Methods

/// @brief Method get__minimumAppVersion addr 0x21f1320 size 0x8 virtual false final false
 ::StringW get__minimumAppVersion() ;

/// @brief Method set__minimumAppVersion addr 0x21f1328 size 0x8 virtual false final false
 void set__minimumAppVersion(::StringW value) ;

/// @brief Method get__maintenanceStartTime addr 0x21f1330 size 0x8 virtual false final false
 int64_t get__maintenanceStartTime() ;

/// @brief Method set__maintenanceStartTime addr 0x21f1338 size 0x8 virtual false final false
 void set__maintenanceStartTime(int64_t value) ;

/// @brief Method get__userMessage addr 0x21f1340 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage get__userMessage() ;

/// @brief Method set__userMessage addr 0x21f1348 size 0x8 virtual false final false
 void set__userMessage(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage value) ;

/// @brief Method get__useGamelift addr 0x21f1350 size 0x8 virtual false final false
 bool get__useGamelift() ;

/// @brief Method set__useGamelift addr 0x21f1358 size 0xc virtual false final false
 void set__useGamelift(bool value) ;

/// @brief Method get__useXPlatformAuth addr 0x21f1364 size 0x8 virtual false final false
 bool get__useXPlatformAuth() ;

/// @brief Method set__useXPlatformAuth addr 0x21f136c size 0xc virtual false final false
 void set__useXPlatformAuth(bool value) ;

// Ctor Parameters []
explicit MultiplayerStatusData() ;

/// @brief Method .ctor addr 0x21f1378 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__AvailabilityStatus, "", "MultiplayerStatusData/AvailabilityStatus");
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusData, "", "MultiplayerStatusData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerStatusData__UserMessage, "", "MultiplayerStatusData/UserMessage");
NEED_NO_BOX(::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______GlobalNamespace__MultiplayerStatusData__UserMessage__LocalizedMessage, "", "MultiplayerStatusData/UserMessage/LocalizedMessage");
