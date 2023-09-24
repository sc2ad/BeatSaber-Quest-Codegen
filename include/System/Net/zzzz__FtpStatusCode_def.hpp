#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net {
struct FtpStatusCode;
}
// Type: System.Net::FtpStatusCode
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7913))
// CS Name: System.Net.FtpStatusCode
struct CORDL_TYPE FtpStatusCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FtpStatusCode(int32_t value__) noexcept;


                    constexpr FtpStatusCode(FtpStatusCode const&) = default;
                    constexpr FtpStatusCode(FtpStatusCode&&) = default;
                    constexpr FtpStatusCode& operator=(FtpStatusCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FtpStatusCode& operator=(FtpStatusCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FtpStatusCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FtpStatusCode_Unwrapped : int32_t {
__Undefined = 0,
__RestartMarker = 110,
__ServiceTemporarilyNotAvailable = 120,
__DataAlreadyOpen = 125,
__OpeningData = 150,
__CommandOK = 200,
__CommandExtraneous = 202,
__DirectoryStatus = 212,
__FileStatus = 213,
__SystemType = 215,
__SendUserCommand = 220,
__ClosingControl = 221,
__ClosingData = 226,
__EnteringPassive = 227,
__LoggedInProceed = 230,
__ServerWantsSecureSession = 234,
__FileActionOK = 250,
__PathnameCreated = 257,
__SendPasswordCommand = 331,
__NeedLoginAccount = 332,
__FileCommandPending = 350,
__ServiceNotAvailable = 421,
__CantOpenData = 425,
__ConnectionClosed = 426,
__ActionNotTakenFileUnavailableOrBusy = 450,
__ActionAbortedLocalProcessingError = 451,
__ActionNotTakenInsufficientSpace = 452,
__CommandSyntaxError = 500,
__ArgumentSyntaxError = 501,
__CommandNotImplemented = 502,
__BadCommandSequence = 503,
__NotLoggedIn = 530,
__AccountNeeded = 532,
__ActionNotTakenFileUnavailable = 550,
__ActionAbortedUnknownPageType = 551,
__FileActionAborted = 552,
__ActionNotTakenFilenameNotAllowed = 553,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpStatusCode_Unwrapped () const noexcept {
return std::bit_cast<__FtpStatusCode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static System::Net::FtpStatusCode const Undefined;

/// @brief Field RestartMarker offset 0
static System::Net::FtpStatusCode const RestartMarker;

/// @brief Field ServiceTemporarilyNotAvailable offset 0
static System::Net::FtpStatusCode const ServiceTemporarilyNotAvailable;

/// @brief Field DataAlreadyOpen offset 0
static System::Net::FtpStatusCode const DataAlreadyOpen;

/// @brief Field OpeningData offset 0
static System::Net::FtpStatusCode const OpeningData;

/// @brief Field CommandOK offset 0
static System::Net::FtpStatusCode const CommandOK;

/// @brief Field CommandExtraneous offset 0
static System::Net::FtpStatusCode const CommandExtraneous;

/// @brief Field DirectoryStatus offset 0
static System::Net::FtpStatusCode const DirectoryStatus;

/// @brief Field FileStatus offset 0
static System::Net::FtpStatusCode const FileStatus;

/// @brief Field SystemType offset 0
static System::Net::FtpStatusCode const SystemType;

/// @brief Field SendUserCommand offset 0
static System::Net::FtpStatusCode const SendUserCommand;

/// @brief Field ClosingControl offset 0
static System::Net::FtpStatusCode const ClosingControl;

/// @brief Field ClosingData offset 0
static System::Net::FtpStatusCode const ClosingData;

/// @brief Field EnteringPassive offset 0
static System::Net::FtpStatusCode const EnteringPassive;

/// @brief Field LoggedInProceed offset 0
static System::Net::FtpStatusCode const LoggedInProceed;

/// @brief Field ServerWantsSecureSession offset 0
static System::Net::FtpStatusCode const ServerWantsSecureSession;

/// @brief Field FileActionOK offset 0
static System::Net::FtpStatusCode const FileActionOK;

/// @brief Field PathnameCreated offset 0
static System::Net::FtpStatusCode const PathnameCreated;

/// @brief Field SendPasswordCommand offset 0
static System::Net::FtpStatusCode const SendPasswordCommand;

/// @brief Field NeedLoginAccount offset 0
static System::Net::FtpStatusCode const NeedLoginAccount;

/// @brief Field FileCommandPending offset 0
static System::Net::FtpStatusCode const FileCommandPending;

/// @brief Field ServiceNotAvailable offset 0
static System::Net::FtpStatusCode const ServiceNotAvailable;

/// @brief Field CantOpenData offset 0
static System::Net::FtpStatusCode const CantOpenData;

/// @brief Field ConnectionClosed offset 0
static System::Net::FtpStatusCode const ConnectionClosed;

/// @brief Field ActionNotTakenFileUnavailableOrBusy offset 0
static System::Net::FtpStatusCode const ActionNotTakenFileUnavailableOrBusy;

/// @brief Field ActionAbortedLocalProcessingError offset 0
static System::Net::FtpStatusCode const ActionAbortedLocalProcessingError;

/// @brief Field ActionNotTakenInsufficientSpace offset 0
static System::Net::FtpStatusCode const ActionNotTakenInsufficientSpace;

/// @brief Field CommandSyntaxError offset 0
static System::Net::FtpStatusCode const CommandSyntaxError;

/// @brief Field ArgumentSyntaxError offset 0
static System::Net::FtpStatusCode const ArgumentSyntaxError;

/// @brief Field CommandNotImplemented offset 0
static System::Net::FtpStatusCode const CommandNotImplemented;

/// @brief Field BadCommandSequence offset 0
static System::Net::FtpStatusCode const BadCommandSequence;

/// @brief Field NotLoggedIn offset 0
static System::Net::FtpStatusCode const NotLoggedIn;

/// @brief Field AccountNeeded offset 0
static System::Net::FtpStatusCode const AccountNeeded;

/// @brief Field ActionNotTakenFileUnavailable offset 0
static System::Net::FtpStatusCode const ActionNotTakenFileUnavailable;

/// @brief Field ActionAbortedUnknownPageType offset 0
static System::Net::FtpStatusCode const ActionAbortedUnknownPageType;

/// @brief Field FileActionAborted offset 0
static System::Net::FtpStatusCode const FileActionAborted;

/// @brief Field ActionNotTakenFilenameNotAllowed offset 0
static System::Net::FtpStatusCode const ActionNotTakenFilenameNotAllowed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpStatusCode, "System.Net", "FtpStatusCode");
