#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System {
struct TimeSpan;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Threading {
class Timer;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class LeaseManager;
}
// Type: System.Runtime.Remoting.Lifetime::LeaseManager
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3090))
// CS Name: System.Runtime.Remoting.Lifetime.LeaseManager
class CORDL_TYPE LeaseManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LeaseManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaseManager", modifiers: " const&", def_value: None }]
constexpr LeaseManager(LeaseManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaseManager", modifiers: "&&", def_value: None }]
constexpr LeaseManager(LeaseManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaseManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaseManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaseManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaseManager& operator=(LeaseManager&& o) noexcept = default;
  constexpr LeaseManager& operator=(LeaseManager const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get__objects, put=__set__objects))  _objects;

constexpr void __set__objects(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__objects() const;

 System::Threading::Timer __declspec(property(get=__get__timer, put=__set__timer))  _timer;

constexpr void __set__timer(System::Threading::Timer value) ;

constexpr System::Threading::Timer __get__timer() const;


// Methods

/// @brief Method SetPollTime addr 0x232f41c size 0xf8 virtual false final false
 void SetPollTime(System::TimeSpan timeSpan) ;

/// @brief Method TrackLifetime addr 0x232f514 size 0x134 virtual false final false
 void TrackLifetime(System::Runtime::Remoting::ServerIdentity identity) ;

/// @brief Method StartManager addr 0x232f648 size 0x160 virtual false final false
 void StartManager() ;

/// @brief Method StopManager addr 0x232f7a8 size 0x1c virtual false final false
 void StopManager() ;

/// @brief Method ManageLeases addr 0x232f7c4 size 0x264 virtual false final false
 void ManageLeases(::bs_hook::Il2CppWrapperType state) ;

static System::Runtime::Remoting::Lifetime::LeaseManager New_ctor() ;

/// @brief Method .ctor addr 0x232fa28 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
NEED_NO_BOX(System::Runtime::Remoting::Lifetime::LeaseManager);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::LeaseManager, "System.Runtime.Remoting.Lifetime", "LeaseManager");
