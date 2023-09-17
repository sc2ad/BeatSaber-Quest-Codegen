#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net {
class NclUtilities;
}
// Type: System.Net::NclUtilities
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7925))
// CS Name: System.Net.NclUtilities
class CORDL_TYPE NclUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NclUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: " const&", def_value: None }]
constexpr NclUtilities(NclUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: "&&", def_value: None }]
constexpr NclUtilities(NclUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NclUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NclUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NclUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NclUtilities& operator=(NclUtilities&& o) noexcept = default;
  constexpr NclUtilities& operator=(NclUtilities const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Net::IPAddress> __declspec(property(get=__get__LocalAddresses, put=__set__LocalAddresses))  _LocalAddresses;

static void __set__LocalAddresses(::ArrayW<::System::Net::IPAddress> value) ;

static ::ArrayW<::System::Net::IPAddress> __get__LocalAddresses() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__LocalAddressesLock, put=__set__LocalAddressesLock))  _LocalAddressesLock;

static void __set__LocalAddressesLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__LocalAddressesLock() ;

static ::StringW __declspec(property(get=__get__LocalDomainName, put=__set__LocalDomainName))  _LocalDomainName;

static void __set__LocalDomainName(::StringW value) ;

static ::StringW __get__LocalDomainName() ;


// Properties

static ::ArrayW<::System::Net::IPAddress> __declspec(property(get=get_LocalAddresses))  LocalAddresses;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_LocalAddressesLock))  LocalAddressesLock;


// Methods

/// @brief Method IsFatal addr 0x280c05c size 0xc0 virtual false final false
static bool IsFatal(::System::Exception exception) ;

/// @brief Method IsAddressLocal addr 0x280c11c size 0x8c virtual false final false
static bool IsAddressLocal(::System::Net::IPAddress ipAddress) ;

/// @brief Method GetLocalHost addr 0x280c664 size 0x18 virtual false final false
static ::System::Net::IPHostEntry GetLocalHost() ;

/// @brief Method get_LocalAddresses addr 0x280c1a8 size 0x4bc virtual false final false
static ::ArrayW<::System::Net::IPAddress> get_LocalAddresses() ;

/// @brief Method get_LocalAddressesLock addr 0x280c67c size 0xa4 virtual false final false
static ::bs_hook::Il2CppWrapperType get_LocalAddressesLock() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NclUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NclUtilities, "System.Net", "NclUtilities");
