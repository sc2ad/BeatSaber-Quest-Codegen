#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
// Forward declare root types
namespace Oculus::Platform {
class RichPresenceOptions;
}
// Type: Oculus.Platform::RichPresenceOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13350))
// CS Name: Oculus.Platform.RichPresenceOptions
class CORDL_TYPE RichPresenceOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RichPresenceOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceOptions", modifiers: " const&", def_value: None }]
constexpr RichPresenceOptions(RichPresenceOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceOptions", modifiers: "&&", def_value: None }]
constexpr RichPresenceOptions(RichPresenceOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RichPresenceOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RichPresenceOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RichPresenceOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RichPresenceOptions& operator=(RichPresenceOptions&& o) noexcept = default;
  constexpr RichPresenceOptions& operator=(RichPresenceOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit RichPresenceOptions() ;

/// @brief Method .ctor addr 0x259930c size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method SetApiName addr 0x2599374 size 0x6c virtual false final false
 void SetApiName(::StringW value) ;

/// @brief Method SetCurrentCapacity addr 0x25993e0 size 0x6c virtual false final false
 void SetCurrentCapacity(uint32_t value) ;

/// @brief Method SetDeeplinkMessageOverride addr 0x259944c size 0x6c virtual false final false
 void SetDeeplinkMessageOverride(::StringW value) ;

/// @brief Method SetEndTime addr 0x25994b8 size 0x6c virtual false final false
 void SetEndTime(System::DateTime value) ;

/// @brief Method SetExtraContext addr 0x2599524 size 0x6c virtual false final false
 void SetExtraContext(Oculus::Platform::RichPresenceExtraContext value) ;

/// @brief Method SetInstanceId addr 0x2599590 size 0x6c virtual false final false
 void SetInstanceId(::StringW value) ;

/// @brief Method SetIsIdle addr 0x25995fc size 0x6c virtual false final false
 void SetIsIdle(bool value) ;

/// @brief Method SetIsJoinable addr 0x2599668 size 0x6c virtual false final false
 void SetIsJoinable(bool value) ;

/// @brief Method SetMaxCapacity addr 0x25996d4 size 0x6c virtual false final false
 void SetMaxCapacity(uint32_t value) ;

/// @brief Method SetStartTime addr 0x2599740 size 0x6c virtual false final false
 void SetStartTime(System::DateTime value) ;

/// @brief Method op_Explicit addr 0x2597010 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::RichPresenceOptions options) ;

/// @brief Method Finalize addr 0x25997ac size 0xd8 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::RichPresenceOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RichPresenceOptions, "Oculus.Platform", "RichPresenceOptions");
