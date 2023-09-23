#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class AppDomainLevelActivator;
}
// Type: System.Runtime.Remoting.Activation::AppDomainLevelActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3126))
// CS Name: System.Runtime.Remoting.Activation.AppDomainLevelActivator
class CORDL_TYPE AppDomainLevelActivator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Activation::IActivator
constexpr operator  System::Runtime::Remoting::Activation::IActivator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AppDomainLevelActivator() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainLevelActivator", modifiers: " const&", def_value: None }]
constexpr AppDomainLevelActivator(AppDomainLevelActivator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainLevelActivator", modifiers: "&&", def_value: None }]
constexpr AppDomainLevelActivator(AppDomainLevelActivator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppDomainLevelActivator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AppDomainLevelActivator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppDomainLevelActivator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppDomainLevelActivator& operator=(AppDomainLevelActivator&& o) noexcept = default;
  constexpr AppDomainLevelActivator& operator=(AppDomainLevelActivator const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__activationUrl, put=__set__activationUrl))  _activationUrl;

constexpr void __set__activationUrl(::StringW value) ;

constexpr ::StringW __get__activationUrl() const;

 System::Runtime::Remoting::Activation::IActivator __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(System::Runtime::Remoting::Activation::IActivator value) ;

constexpr System::Runtime::Remoting::Activation::IActivator __get__next() const;


// Properties

 System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_NextActivator))  NextActivator;


// Methods

// Ctor Parameters [CppParam { name: "activationUrl", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Runtime::Remoting::Activation::IActivator", modifiers: "", def_value: None }]
explicit AppDomainLevelActivator(::StringW activationUrl, System::Runtime::Remoting::Activation::IActivator next) ;

/// @brief Method .ctor addr 0x23382c0 size 0x2c virtual false final false
 void _ctor(::StringW activationUrl, System::Runtime::Remoting::Activation::IActivator next) ;

/// @brief Method get_NextActivator addr 0x2338860 size 0x8 virtual true final true
 System::Runtime::Remoting::Activation::IActivator get_NextActivator() ;

/// @brief Method Activate addr 0x2338868 size 0x4dc virtual true final true
 System::Runtime::Remoting::Activation::IConstructionReturnMessage Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(System::Runtime::Remoting::Activation::AppDomainLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::AppDomainLevelActivator, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
